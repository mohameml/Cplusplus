# cour 04 : **Programmation modulaire**

> La programmation modulaire en C++ est une approche qui consiste à diviser un programme en plusieurs modules ou fichiers, chacun contenant une partie spécifique du code. Cela permet de structurer le code de manière organisée, facilitant la maintenance, la lisibilité, et la réutilisation du code.

## 1. **Header Files:**

-   **Description:**
    Les fichiers d'en-tête (ou headers) contiennent généralement les déclarations de fonctions, de classes, de structures, et de constantes. Ils servent de contrat ou d'interface que les autres fichiers `.cpp` peuvent utiliser.

-   **Exemple de fichier `math_operations.h`:**

    ```cpp
    #ifndef MATH_OPERATIONS_H
    #define MATH_OPERATIONS_H
    namespace MathOperations {

    int add(int a, int b);
    int subtract(int a, int b);

    }
    #endif // MATH_OPERATIONS_H
    ```

### 2. **Source Files:**

-   **Description:**
    Les fichiers sources contiennent l'implémentation des fonctions ou des classes déclarées dans les fichiers `.h`. Ils incluent généralement les fichiers d'en-tête correspondants pour s'assurer que les déclarations sont visibles.

-   **Exemple de fichier `math_operations.cpp`:**

    ```cpp
    #include "math_operations.h"

    namespace MathOperations {
        int add(int a, int b) {
            return a + b;
        }

        int subtract(int a, int b) {
            return a - b;
        }
    }
    ```

## 3. **Namespace (Espaces de Noms)**

-   **Description:**
    Les espaces de noms (`namespace`) sont utilisés pour organiser le code et éviter les conflits de noms, surtout dans les grands projets ou les bibliothèques.

-   **Exemple:**
    Dans l'exemple ci-dessus, `MathOperations` est un espace de noms qui encapsule les fonctions `add` et `subtract`.

    ```cpp
    #include "math_operations.h"

    namespace MathOperations {
        // ..
    }
    ```

## 4. **Inclure et Utiliser les Modules**

-   Pour utiliser les fonctions définies dans un module, vous incluez le fichier d'en-tête correspondant dans votre fichier source principal et utilisez les fonctions avec le nom de l'espace de noms.

-   **Exemple de fichier `main.cpp`:**

    ```cpp
    #include <iostream>
    #include "math_operations.h"

    int main() {
        int sum = MathOperations::add(5, 3);
        int difference = MathOperations::subtract(5, 3);

        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;

        return 0;
    }
    ```

## 5. **Compilation/**

-   Lors de la compilation d'un programme modulaire, vous compilez d'abord chaque fichier source `.cpp` séparément pour créer des fichiers objets `.o`. Ensuite, vous liez ces fichiers objets pour créer l'exécutable final.

-   **Commande de compilation:**

    ```bash
    g++ -c math_operations.cpp
    g++ -c main.cpp
    g++ -o my_program main.o math_operations.o
    ```
