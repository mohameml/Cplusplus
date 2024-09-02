# cour 02 :

## 1. **Qu'est-ce que l'encapsulation ?:**

-   L'encapsulation est l'un des quatre principes fondamentaux de la programmation orientée objet (POO) en C++. Elle consiste à regrouper les données (attributs) et les méthodes (fonctions membres) qui opèrent sur ces données au sein d'une même classe, tout en contrôlant l'accès à ces éléments depuis l'extérieur de la classe. L'objectif est de protéger l'intégrité des données en masquant les détails d'implémentation et en exposant uniquement ce qui est nécessaire à l'utilisation de la classe.

-   L'encapsulation en C++ vise à cacher les détails internes d'une classe et à fournir une interface claire et sécurisée pour interagir avec les objets de cette classe. Elle permet de restreindre l'accès direct aux attributs d'un objet, ce qui empêche les modifications non souhaitées ou invalides. Au lieu d'accéder directement aux données d'une classe, l'encapsulation encourage l'utilisation de méthodes spécifiques (comme les accesseurs et mutateurs) pour interagir avec ces données.

## 2. **Niveaux d'Accessibilité : `public`, `protected`, `private`**

### a. **`public`:**

-   **Description:**

    -   Les membres déclarés `public` sont accessibles de n'importe où, c'est-à-dire depuis l'extérieur de la classe, y compris par d'autres classes et fonctions globales.
    -   Utilisation typique : Méthodes (fonctions membres) que l'on souhaite rendre accessibles à tous les utilisateurs de la classe.

-   **Exemple :**

    ```cpp
    class Personne {
    public:
        std::string nom;

        void afficherNom() {
            std::cout << "Nom : " << nom << std::endl;
        }
    };
    ```

### b. **`protected`:**

-   **Description:**

    -   Les membres déclarés `protected` sont accessibles au sein de la classe et des classes dérivées (c'est-à-dire les sous-classes), mais ne sont pas accessibles depuis l'extérieur de la classe ou de ses dérivées.
    -   Utilisation typique : Attributs ou méthodes qui doivent être hérités par des sous-classes mais protégés de l'accès direct par les utilisateurs de la classe.

-   **Exemple :**

    ```cpp
    class Personne {
    protected:
        int age;

    public:
        void setAge(int a) {
            age = a;
        }
    };

    class Employe : public Personne {
    public:
        void afficherAge() {
            std::cout << "Âge : " << age << std::endl; // Accès possible car Employe hérite de Personne
        }
    };
    ```

### c. **`private`:**

-   **Description:**

    -   Les membres déclarés `private` sont accessibles uniquement au sein de la classe dans laquelle ils sont définis. Même les classes dérivées ne peuvent pas y accéder directement.
    -   Utilisation typique : Attributs et méthodes internes qui ne doivent pas être exposés ou modifiés directement par l'extérieur.

-   **Exemple :**

    ```cpp
    class Personne {
    private:
        std::string nom;

    public:
        void setNom(std::string n) {
            nom = n;
        }

        std::string getNom() const {
            return nom;
        }
    };
    ```
