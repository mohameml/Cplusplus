# cour 05 : **destructeur**

## 1. **Introduction**

-   **Description:**

    > En C++, le destructeur est une méthode spéciale d'une classe qui est appelée automatiquement lorsque l'objet de cette classe est détruit ou libéré. Le rôle principal d'un destructeur est de libérer les ressources que l'objet pourrait avoir acquises pendant sa durée de vie, comme la mémoire dynamique, les fichiers ouverts, ou d'autres ressources systèmes.

-   **Caractéristiques du Destructeur**

    1. **Nom du Destructeur** :

        - Le nom du destructeur est le nom de la classe précédé d'un tilde (`~`). Par exemple, pour une classe nommée `Exemple`, le destructeur serait `~Exemple()`.

    2. **Pas de Paramètres** :

        - Les destructeurs ne prennent pas de paramètres et ne retournent pas de valeur.

    3. **Appel Automatique** :

        - Le destructeur est appelé automatiquement par le système lorsque l'objet sort du scope ou lorsqu'il est explicitement supprimé à l'aide de l'opérateur `delete`.

    4. **Utilisation de `delete`** :
        - Si un objet est créé dynamiquement avec `new`, son destructeur sera appelé automatiquement lorsque l'objet est supprimé avec `delete`.

-   **Exemple de Destructeur:**

    ```cpp
    #include <iostream>

    class Exemple {
    public:
        Exemple() {
            std::cout << "Constructeur appelé" << std::endl;
        }

        ~Exemple() {
            std::cout << "Destructeur appelé" << std::endl;
        }
    };

    int main() {
        {
            Exemple obj;  // Constructeur appelé ici
            // Destructeur sera appelé automatiquement à la fin du scope
        }
        // Au sortir du scope, le destructeur est appelé
        return 0;
    }
    ```

    -   Le constructeur est appelé lorsqu'un objet de type `Exemple` est créé.
    -   Le destructeur est appelé automatiquement lorsque l'objet `obj` sort du scope (à la fin du bloc `main()`).

## 2. **Destructeurs et Allocation Dynamique:`delete`**

-   **Description:**

    > En C++, le mot-clé `delete` est utilisé pour libérer la mémoire qui a été allouée dynamiquement avec `new`. L'utilisation correcte de `delete` est essentielle pour éviter les fuites de mémoire et pour gérer correctement les ressources.

-   **Syntaxe** :

    ```cpp
    delete pointer;
    delete[] arrayPointer ;
    ```

-   **Exemple** :

    ```cpp
    #include <iostream>

    class Exemple {
    public:
        Exemple() { std::cout << "Constructeur appelé" << std::endl; }
        ~Exemple() { std::cout << "Destructeur appelé" << std::endl; }
    };

    int main() {
        Exemple* obj = new Exemple(); // Allocation dynamique
        delete obj;                   // Libération de la mémoire
        return 0;
    }
    ```

    -   `new Exemple()` alloue un objet `Exemple` sur le tas et retourne un pointeur vers cet objet.
    -   `delete obj;` libère la mémoire allouée pour l'objet et appelle son destructeur.

## 3. **Destructeurs Virtuels** :

-   Lorsqu'une classe de base est destinée à être utilisée comme une classe polymorphe (avec héritage), le destructeur de la classe de base doit être marqué `virtual` pour garantir que le destructeur approprié de la classe dérivée est appelé lors de la suppression d'un objet via un pointeur de base.

-   **Exemple** :

    ```cpp
    class Base {
    public:
        virtual ~Base() { std::cout << "Destructeur de Base appelé" << std::endl; }
    };

    class Derived : public Base {
    public:
        ~Derived() override { std::cout << "Destructeur de Derived appelé" << std::endl; }
    };

    int main() {
        Base* b = new Derived();
        delete b;  // Appelle le destructeur de Derived, puis le destructeur de Base
        return 0;
    }
    ```
