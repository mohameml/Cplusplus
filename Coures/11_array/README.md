# cour 11 :

## 1. **Déclaration et Initialisation d'un Tableau**

-   **Description:**

    > En C++, les tableaux (ou arrays) sont des structures de données qui stockent une collection d'éléments du même type. Ils sont utilisés pour gérer des ensembles de données de manière efficace.

-   **Déclaration:**

    Pour déclarer un tableau, vous spécifiez le type des éléments, le nom du tableau, et la taille du tableau.

    ```cpp
    type nom_tableau[taille];
    ```

-   **Initialisation:**

    Vous pouvez initialiser un tableau lors de sa déclaration.

    ```cpp
    int numbers[5] = {1, 2, 3, 4, 5}; // Initialisation directe
    ```

## 2. **Accès aux Éléments du Tableau:**

-   Les éléments d'un tableau sont accessibles par leurs indices, qui commencent à 0.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int numbers[5] = {1, 2, 3, 4, 5};

        std::cout << "Premier élément: " << numbers[0] << std::endl; // Affiche : Premier élément: 1
        std::cout << "Deuxième élément: " << numbers[1] << std::endl; // Affiche : Deuxième élément: 2

        return 0;
    }
    ```

## 3. **Tableaux Multidimensionnels**

-   C++ permet de créer des tableaux à plusieurs dimensions (par exemple, des matrices).

-   **Exemple de Tableau 2D:**

    ```cpp
    #include <iostream>

    int main() {
        int matrix[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        // Accéder à un élément
        std::cout << "Élément à [1][1]: " << matrix[1][1] << std::endl; // Affiche : Élément à [1][1]: 5

        return 0;
    }
    ```

## 4. **Parcours d'un Tableau**

-   Vous pouvez parcourir un tableau en utilisant des boucles `for`.

-   **Exemple**

    ```cpp
    #include <iostream>

    int main() {
        int numbers[5] = {1, 2, 3, 4, 5};

        for (int i = 0; i < 5; ++i) {
            std::cout << numbers[i] << " "; // Affiche : 1 2 3 4 5
        }

        return 0;
    }
    ```

## 5. **Tableaux et Pointeurs**

-   En C++, les tableaux et les pointeurs sont étroitement liés. Le nom d'un tableau représente l'adresse du premier élément.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int numbers[3] = {10, 20, 30};
        int* ptr = numbers; // Le pointeur pointe vers le premier élément du tableau

        std::cout << "Premier élément via pointeur: " << *ptr << std::endl; // Affiche : 10
        std::cout << "Deuxième élément via pointeur: " << *(ptr + 1) << std::endl; // Affiche : 20

        return 0;
    }
    ```
