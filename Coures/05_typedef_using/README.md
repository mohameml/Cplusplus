# cour 05 :

## 1. **`typedef` en C++:**

-   **Description:**

    > `typedef` est une directive de préprocesseur qui permet de créer un alias (un nouveau nom) pour un type de donnée existant. Il a été utilisé dans les versions plus anciennes de C++ et est également disponible en C.

-   **Syntaxe:**

    ```cpp
    typedef type nouveau_nom;
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    // Alias pour un type entier long
    typedef long long int LongInt;

    // Alias pour un pointeur sur une fonction qui prend un int et retourne un int
    typedef int (*FuncPtr)(int);

    int addOne(int x) {
        return x + 1;
    }

    int main() {
        LongInt largeNumber = 123456789012345;
        FuncPtr myFunc = addOne;

        std::cout << "Large Number: " << largeNumber << std::endl;
        std::cout << "Result: " << myFunc(5) << std::endl;

        return 0;
    }
    ```

## 2. `using` en C++

-   **Description:**

    Introduit dans C++11, `using` est une alternative plus moderne à `typedef`. En plus de créer des alias de types comme `typedef`, `using` peut être utilisé avec des alias de modèles (`template`), ce qui le rend plus puissant et flexible.

-   **Syntaxe:**

    ```cpp
    using nouveau_nom = type;
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>
    #include <vector>

    // Alias pour un type entier long
    using LongInt = long long int;

    // Alias pour un vecteur d'entiers
    using IntVector = std::vector<int>;

    // Alias pour un pointeur sur une fonction qui prend un int et retourne un int
    using FuncPtr = int(*)(int);

    int addOne(int x) {
        return x + 1;
    }

    int main() {
        LongInt largeNumber = 123456789012345;
        IntVector myVector = {1, 2, 3, 4, 5};
        FuncPtr myFunc = addOne;

        std::cout << "Large Number: " << largeNumber << std::endl;
        std::cout << "Result: " << myFunc(5) << std::endl;

        return 0;
    }
    ```
