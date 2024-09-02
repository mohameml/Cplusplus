# cour : Les **fonctions amies**

## 1. **Description:**

-   **Def:**

    > Les **fonctions amies** en C++ sont des fonctions qui, bien qu'elles ne soient pas membres d'une classe, ont un accès direct aux membres privés et protégés de cette classe. Une fonction amie est déclarée à l'intérieur de la définition de la classe avec le mot-clé `friend`.

### Pourquoi utiliser des fonctions amies ?

-   **Accès direct aux membres privés/protégés** : Parfois, il est nécessaire de permettre à une fonction externe de manipuler directement les données internes d'une classe sans passer par les méthodes publiques.
-   **Opérations complexes entre plusieurs objets** : Si une opération complexe doit manipuler les données de plusieurs objets d'une classe, une fonction amie peut simplifier l'implémentation.
-   **Flexibilité accrue** : Elles permettent de définir des opérations étroitement couplées avec la classe sans les rendre membres de la classe, ce qui conserve une séparation claire entre les fonctions et la classe tout en permettant un accès complet aux données.

### Exemple de Fonction Amie

Prenons l'exemple d'une classe `Boite` qui encapsule une largeur. Nous voulons définir une fonction externe qui puisse accéder à cette largeur.

```cpp
#include <iostream>
using namespace std;

class Boite {
private:
    int largeur;

public:
    Boite(int l) : largeur(l) {}

    // Déclaration de la fonction amie
    friend void afficherLargeur(const Boite& b);
};

// Définition de la fonction amie
void afficherLargeur(const Boite& b) {
    // Accès direct au membre privé `largeur`
    cout << "Largeur de la boîte : " << b.largeur << endl;
}

int main() {
    Boite boite(10);
    afficherLargeur(boite);  // Appel de la fonction amie
    return 0;
}
```

### Explication du Code

-   **Déclaration de la fonction amie** :

    -   Dans la classe `Boite`, la fonction `afficherLargeur` est déclarée comme amie en utilisant le mot-clé `friend`.
    -   Cela permet à `afficherLargeur` d'accéder au membre privé `largeur`.

-   **Définition de la fonction amie** :

    -   La fonction `afficherLargeur` est ensuite définie en dehors de la classe, mais elle peut accéder à `largeur` grâce à son statut d'amie.

-   **Appel de la fonction amie** :
    -   Dans `main`, un objet `boite` est créé, et la fonction `afficherLargeur` est appelée, accédant et affichant directement la valeur privée `largeur`.

### Utilisation dans des Opérateurs

Les fonctions amies sont couramment utilisées pour surcharger des opérateurs qui nécessitent l'accès aux membres privés de plusieurs objets d'une classe, comme l'opérateur `==` ou `<<`.

#### Exemple de Surcharge de l'Opérateur `<<` avec une Fonction Amie

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    // Déclare l'opérateur << comme ami
    friend ostream& operator<<(ostream& os, const Point& p);
};

// Définition de l'opérateur << comme une fonction amie
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int main() {
    Point p1(5, 10);
    cout << "Point p1: " << p1 << endl;  // Affiche : Point p1: (5, 10)
    return 0;
}
```

### Explication

-   **Déclaration de l'ami** : `operator<<` est déclaré comme une fonction amie de la classe `Point`, lui permettant d'accéder directement aux membres privés `x` et `y`.
-   **Définition de la fonction amie** : L'opérateur `<<` est défini comme une fonction non membre qui utilise son accès privilégié pour afficher les coordonnées du `Point`.

### Points à Noter

-   **Pas de transitivité** : L'amitié n'est pas transitive. Si la fonction A est amie de la classe B, et que B est amie de C, cela ne signifie pas que A est amie de C.
-   **Non réciproque** : Si une fonction est amie d'une classe, cela ne signifie pas que la classe est amie de cette fonction.
-   **Utilisation avec prudence** : Bien que puissantes, les fonctions amies doivent être utilisées judicieusement, car elles brisent partiellement l'encapsulation, un principe fondamental de la programmation orientée objet.

Les fonctions amies sont donc un outil utile en C++ pour fournir un accès contrôlé aux membres privés d'une classe, tout en maintenant une certaine séparation entre la classe et les fonctions externes.
