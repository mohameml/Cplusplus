# cour : **Abstraction:**

## 1. **Concept d'Abstraction**

-   **Description:**

    > L'abstraction en C++ est un concept clé de la programmation orientée objet (POO) qui permet de simplifier la complexité en cachant les détails d'implémentation et en exposant seulement les fonctionnalités essentielles. Elle se concentre sur **le "quoi"** fait un objet plutôt que **le "comment"** il le fait.

-   **Définition** :

    > L'abstraction consiste à créer une interface simplifiée pour interagir avec des objets, sans se soucier de la complexité sous-jacente. Par exemple, lorsque vous conduisez une voiture, vous n'avez pas besoin de connaître le fonctionnement interne du moteur, vous interagissez simplement avec l'accélérateur, le volant, etc.

## 2. **Classes Abstraites**

-   Une **classe abstraite** est une classe qui ne peut pas être instanciée directement. Elle sert de base pour d'autres classes.

-   Elle peut contenir des méthodes abstraites (méthodes sans implémentation) qui doivent être implémentées par les classes dérivées.

-   Utilisation du mot-clé `virtual` et `= 0` pour déclarer une méthode abstraite :
    ```cpp
    class Forme {
    public:
        virtual void dessiner() = 0;  // méthode purement virtuelle
    };
    ```

## 3. **Interfaces**

-   En C++, une interface peut être créée en utilisant une classe abstraite qui ne contient que des méthodes purement virtuelles.
-   Par exemple :
    ```cpp
    class IMoteur {
    public:
        virtual void demarrer() = 0;
        virtual void arreter() = 0;
    };
    ```

## 4. **Exemple Concret**

Voici un exemple qui montre l'abstraction avec des formes géométriques :

```cpp
#include <iostream>
using namespace std;

// Classe abstraite
class Forme {
public:
    virtual void dessiner() = 0;  // méthode purement virtuelle
};

// Classe concrète
class Cercle : public Forme {
public:
    void dessiner() override {
        cout << "Dessiner un cercle" << endl;
    }
};

// Classe concrète
class Rectangle : public Forme {
public:
    void dessiner() override {
        cout << "Dessiner un rectangle" << endl;
    }
};

int main() {
    Forme* forme1 = new Cercle();
    Forme* forme2 = new Rectangle();

    forme1->dessiner();  // Appel à la méthode abstraite dessiner()
    forme2->dessiner();

    delete forme1;
    delete forme2;

    return 0;
}
```

Dans cet exemple, `Forme` est une classe abstraite qui définit une interface pour dessiner différentes formes. `Cercle` et `Rectangle` sont des classes concrètes qui implémentent la méthode `dessiner`. L'utilisateur de ces classes interagit avec elles via l'interface `Forme` sans connaître les détails de leur implémentation.
