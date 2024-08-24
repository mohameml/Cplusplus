# cour 08 : **boucles**

> Les boucles en C++ permettent d'exécuter un bloc de code de manière répétée, soit un nombre déterminé de fois, soit jusqu'à ce qu'une certaine condition soit remplie. Les boucles sont essentielles pour automatiser les tâches répétitives dans un programme.

## 1. **La Boucle `for`:**

-   **Description:**

    > La boucle `for` est utilisée pour répéter un bloc de code un nombre déterminé de fois. Elle est idéale lorsque le nombre d'itérations est connu à l'avance.

-   **Syntaxe:**

    ```cpp
    for (initialisation; condition; incrément) {
        // Bloc de code à exécuter
    }
    ```

    -   **initialisation** : Initialise la variable de contrôle de la boucle.
    -   **condition** : La boucle continue tant que cette condition est vraie.
    -   **incrément** : Modifie la variable de contrôle après chaque itération.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        for (int i = 0; i < 5; i++) {
            std::cout << "Iteration: " << i << std::endl;
        }
        return 0;
    }
    ```

## 2. **La Boucle `while`**

-   **Description:**

    > La boucle `while` répète un bloc de code tant qu'une condition spécifiée est vraie. Elle est utile lorsque le nombre d'itérations n'est pas connu à l'avance et dépend d'une condition.

-   **Syntaxe:**

    ```cpp
    while (condition) {
        // Bloc de code à exécuter
    }
    ```

    -   **condition** : La boucle continue tant que cette condition est vraie.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int i = 0;

        while (i < 5) {
            std::cout << "Iteration: " << i << std::endl;
            i++;
        }

        return 0;
    }
    ```

## 3. **La Boucle `do-while`**

-   **Description:**

    > La boucle `do-while` est similaire à la boucle `while`, sauf que la condition est vérifiée après l'exécution du bloc de code. Cela garantit que le bloc de code est exécuté au moins une fois.

-   **Syntaxe:**

    ```cpp
    do {
        // Bloc de code à exécuter
    } while (condition);
    ```

    -   **condition** : La boucle continue tant que cette condition est vraie.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int i = 0;

        do {
            std::cout << "Iteration: " << i << std::endl;
            i++;
        } while (i < 5);

        return 0;
    }
    ```

## 4. **Boucle `for-each` (Boucle `for` avec `range-based`)**

-   **Description:**

    > En C++, il n'y a pas de boucle `foreach` explicite comme dans certains autres langages, mais depuis C++11, la boucle `for` basée sur les plages (`range-based for loop`) remplit ce rôle. Elle permet d'itérer facilement sur les éléments d'un conteneur, comme un tableau ou un vecteur.

-   **Syntaxe:**

    ```cpp
    for (type élément : conteneur) {
        // Bloc de code à exécuter pour chaque élément
    }
    ```

    -   **type élément** : Le type et la variable représentant chaque élément du conteneur.
    -   **conteneur** : Le conteneur à travers lequel on itère (tableau, vecteur, liste, etc.).

-   **Exemple:**

    ```cpp
    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> numbers = {1, 2, 3, 4, 5};

        for (int number : numbers) {
            std::cout << "Number: " << number << std::endl;
        }

        return 0;
    }
    ```

## 5. **Contrôle de Flux dans les Boucles**

-   **Description:**

    -   **`break`** : Interrompt la boucle immédiatement, sautant toute itération restante.
    -   **`continue`** : Saute l'itération actuelle et passe directement à la suivante.
    -   **`return`** : Sort de la fonction entière, ce qui arrête également la boucle.

-   **Exemple avec `break` et `continue`:**

    ```cpp
    #include <iostream>

    int main() {
        for (int i = 0; i < 10; i++) {
            if (i == 5) {
                continue; // Passe directement à l'itération suivante si i == 5
            }
            if (i == 8) {
                break; // Arrête la boucle si i == 8
            }
            std::cout << "Iteration: " << i << std::endl;
        }

        return 0;
    }
    ```
