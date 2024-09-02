# cour : **Méthodes**

## 1. **Introduction:**

-   **Def:**

    > En C++, les méthodes sont des fonctions membres qui définissent le comportement d'une classe. Les méthodes peuvent être de différents types, comme les méthodes normales, les méthodes `const`, les méthodes `static`, et les méthodes virtuelles.

-   **Syntaxe:**

    1. **Déclaration dans la Classe** :

        ```cpp
        class ClassName {
        public:
            // Déclaration d'une méthode
            ReturnType methodName(Parameters) const;
        };
        ```

    2. **Définition en Dehors de la Classe** (si nécessaire) :
        ```cpp
        // Définition de la méthode en dehors de la classe
        ReturnType ClassName::methodName(Parameters) {
            // Implémentation de la méthode
        }
        ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    class Personne {
    public:
        // Méthode normale
        void direBonjour() {
            std::cout << "Bonjour, je suis " << nom << std::endl;
        }

        void setNom(const std::string& n) {
            nom = n;
        }

    private:
        std::string nom;
    };

    int main() {
        Personne p;
        p.setNom("Alice");
        p.direBonjour();  // Affiche : Bonjour, je suis Alice
        return 0;
    }
    ```

## 2. **les méthodes `const`:**

-   **Description:**

    > les méthodes marquées comme `const` sont des méthodes qui garantissent qu'elles ne modifient pas l'état de l'objet sur lequel elles sont appelées. Elles sont particulièrement utiles pour les méthodes qui sont censées seulement lire des données et non les modifier. L'utilisation de `const` pour les méthodes améliore la sécurité du code et la clarté des intentions.

-   **Syntaxe:**

    Une méthode est marquée comme `const` en ajoutant le mot-clé `const` à la fin de la déclaration de la méthode dans la classe. La syntaxe générale est :

    ```cpp
    class ClassName {
    public:
        void methodName() const;
    };
    ```

-   **Exemple** :

    ```cpp
    class Personne {
    public:
        std::string nom;
        int age;

        // Méthode constante
        void afficher() const {
            std::cout << "Nom : " << nom << ", Âge : " << age << std::endl;
        }
    };
    ```

### 3. **Méthodes `static`:**

-   **Description:**

    > Une méthode `static` est une méthode qui appartient à la classe plutôt qu'à une instance spécifique de la classe. Elle peut accéder aux attributs `static` de la classe mais ne peut pas accéder aux membres non-`static`.

-   **Déclaration et Syntaxe:**

    -   **Déclaration** : Les méthodes `static` sont déclarées avec le mot-clé `static` dans la classe.
    -   **Appel** : Les méthodes `static` peuvent être appelées directement sur la classe, sans avoir besoin de créer une instance.

-   **Exemple:**

    ```cpp
    #include <iostream>

    class Compteur {
    public:
        static int nombreInstances;

        Compteur() {
            nombreInstances++;
        }

        // Méthode static
        static void afficherNombreInstances() {
            std::cout << "Nombre d'instances : " << nombreInstances << std::endl;
        }
    };

    int Compteur::nombreInstances = 0;

    int main() {
        Compteur c1;
        Compteur c2;

        // Appel de la méthode static
        Compteur::afficherNombreInstances(); // Affiche : Nombre d'instances : 2

        return 0;
    }
    ```
