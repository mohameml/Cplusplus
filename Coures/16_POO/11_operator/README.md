# cour 11 : **operator**

## 1. **Description:**

-   **Def:**

    > En C++, les méthodes `operator` (ou surcharges d'opérateurs) permettent de redéfinir ou d'étendre le comportement des opérateurs pour des types définis par l'utilisateur, tels que des classes ou des structures. Cela permet d'utiliser des objets personnalisés avec les opérateurs standard, comme `+`, `-`, `*`, `==`, etc.

-   **Syntaxe:**

    La syntaxe générale pour surcharger un opérateur est la suivante :

    ```cpp
    retour_type operator(symbole)(paramètres) {
        // implémentation de l'opérateur
    }
    ```

## 2. **Exemples de Surcharge d'Opérateurs:**

1. **Surcharge de l'opérateur `+`**

    Supposons que vous ayez une classe `Point` représentant un point dans un espace 2D. Vous pouvez surcharger l'opérateur `+` pour additionner deux points :

    ```cpp
    #include <iostream>
    using namespace std;

    class Point {
    private:
        int x, y;

    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

        // Surcharge de l'opérateur +
        Point operator+(const Point& autre) const {
            return Point(x + autre.x, y + autre.y);
        }

        void afficher() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }
    };

    int main() {
        Point p1(2, 3);
        Point p2(4, 5);

        Point p3 = p1 + p2;  // Utilisation de l'opérateur +
        p3.afficher();       // Affiche : (6, 8)

        return 0;
    }
    ```

    Dans cet exemple, l'opérateur `+` est surchargé pour permettre l'addition de deux objets `Point`. La méthode `operator+` prend un autre objet `Point` en paramètre, additionne les coordonnées `x` et `y`, et retourne un nouvel objet `Point`.

2. **Surcharge de l'opérateur `==`**

    Vous pouvez également surcharger l'opérateur `==` pour comparer deux objets `Point` :

    ```cpp
    class Point {
    private:
        int x, y;

    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

        // Surcharge de l'opérateur ==
        bool operator==(const Point& autre) const {
            return (x == autre.x && y == autre.y);
        }
    };

    int main() {
        Point p1(2, 3);
        Point p2(2, 3);
        Point p3(4, 5);

        if (p1 == p2) {
            cout << "p1 et p2 sont égaux" << endl;  // Cette ligne sera affichée
        }

        if (p1 != p3) {
            cout << "p1 et p3 sont différents" << endl;  // Cette ligne sera affichée
        }

        return 0;
    }
    ```

3. **Surcharge de l'opérateur `<<` (Insertion dans un flux)**

    Cet opérateur est souvent surchargé pour permettre l'affichage des objets à l'aide de `cout` :

    ```cpp
    class Point {
    private:
        int x, y;

    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

        // Surcharge de l'opérateur <<
        friend ostream& operator<<(ostream& os, const Point& p) {
            os << "(" << p.x << ", " << p.y << ")";
            return os;
        }
    };

    int main() {
        Point p1(2, 3);
        cout << "Le point p1 est : " << p1 << endl;  // Affiche : Le point p1 est : (2, 3)

        return 0;
    }
    ```

    Dans cet exemple, l'opérateur `<<` est surchargé pour permettre l'affichage d'un objet `Point` avec `cout`. Notez que cette surcharge est souvent réalisée comme une fonction amie (`friend`) car elle a besoin d'accéder aux membres privés de la classe.

### RQ : **les avantages de La signature `const Point& autre` dans une méthode telle que la surcharge**

La signature `const Point& autre` dans une méthode telle que la surcharge d'un opérateur a plusieurs avantages clés en C++ :

-   **Éviter la copie inutile** :

    -   En passant un objet par référence (`&`), vous évitez de créer une copie de l'objet, ce qui peut être coûteux en termes de performance, surtout pour les objets volumineux.
    -   Si vous passiez simplement `Point autre` (sans la référence), une copie complète de l'objet serait effectuée à chaque appel de la fonction. Avec une référence, seule une adresse mémoire est passée, ce qui est beaucoup plus rapide.

-   **Préserver l'intégrité des données (Immuabilité)** :

    -   Le mot-clé `const` garantit que l'objet `autre` ne sera pas modifié à l'intérieur de la fonction. C'est une promesse que vous faites au compilateur et à tout autre code qui pourrait utiliser cette fonction.
    -   Cela est particulièrement important dans le cadre des surcharges d'opérateurs et autres méthodes où vous ne souhaitez pas accidentellement modifier l'objet passé en paramètre.

-   **Compatibilité avec les objets temporaires** :

    -   L'utilisation de `const` permet également à la fonction de fonctionner avec des objets temporaires ou des constantes. Par exemple, vous pouvez appeler la surcharge de l'opérateur avec un objet temporaire sans erreur :
        ```cpp
        Point p1(2, 3);
        Point p2 = p1 + Point(4, 5);  // Ok, car l'opérateur + accepte const Point&
        ```
    -   Si vous ne mettiez pas `const`, le code ci-dessus ne fonctionnerait pas, car un objet temporaire ne peut être modifié.
