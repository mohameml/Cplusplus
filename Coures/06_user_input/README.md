# cour :

## 1. **`std::cin`:**

-   **Description:**

    `std::cin` est l'objet standard d'entrée en C++. Il permet de lire des entrées de type simple comme des `int`, `float`, `char`, `std::string`, etc., directement depuis la console.

-   **Syntaxe:**

    ```cpp
    std::cin >> variable;
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;
        std::cout << "You entered: " << age << std::endl;
        return 0;
    }
    ```

## 2. **`std::getline()`:**

-   **Description:**

    `std::getline()` est une fonction qui lit une ligne entière de texte, y compris les espaces, jusqu'à ce qu'il rencontre un retour à la ligne (`\n`). Elle est souvent utilisée pour lire des chaînes de caractères avec des espaces.

-   **Syntaxe:**

    ```cpp
    std::getline(std::cin, variable);
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>
    #include <string>

    int main() {
        std::string name;
        std::cout << "Enter your full name: ";
        std::getline(std::cin, name);
        std::cout << "Hello, " << name << "!" << std::endl;
        return 0;
    }
    ```

## 3. **`std::cin.get()`:**

-   **Description:**

    `std::cin.get()` est une autre méthode pour lire des entrées, utilisée principalement pour lire un caractère à la fois. Il peut aussi être utilisé pour lire une ligne entière si utilisé avec des boucles ou pour capturer des caractères spéciaux.

-   **Syntaxe:**

    ```cpp
    char c;
    std::cin.get(c);
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        char ch;
        std::cout << "Enter a character: ";
        std::cin.get(ch);
        std::cout << "You entered: " << ch << std::endl;
        return 0;
    }
    ```
