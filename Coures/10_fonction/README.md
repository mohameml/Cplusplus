# cour 10 : **fonctions:**

### 1. **Définition d'une Fonction**

-   **Description:**

    > Les fonctions en C++ sont des blocs de code qui effectuent une tâche spécifique et peuvent être appelés à plusieurs reprises dans un programme. Elles permettent d'organiser le code, de le rendre réutilisable, et de le rendre plus lisible.

-   **Def:**
    Pour définir une fonction, vous devez spécifier :

    -   **Type de retour** : Le type de donnée que la fonction retourne (par exemple, `int`, `double`, `void` si la fonction ne retourne rien).
    -   **Nom de la fonction** : Le nom que vous utilisez pour appeler la fonction.
    -   **Paramètres** : Les valeurs d'entrée que la fonction accepte (optionnels).
    -   **Corps de la fonction** : Le bloc de code que la fonction exécute.

-   **Syntaxe de Définition:**

    ```cpp
    type_de_retour nom_de_fonction(paramètres) {
        // Corps de la fonction


        // op :
        return val
    }
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    // Déclaration de la fonction
    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int result = add(3, 4);
        std::cout << "Result: " << result << std::endl; // Affiche : Result: 7
        return 0;
    }
    ```

## 2. **Fonctions avec Valeurs Par Défaut**

-   Vous pouvez spécifier des valeurs par défaut pour les paramètres. Ces valeurs sont utilisées si aucun argument n'est passé lors de l'appel de la fonction.

-   **Exemple:**

    ```cpp
    #include <iostream>

    void greet(std::string name = "Guest") {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

    int main() {
        greet();          // Affiche : Hello, Guest!
        greet("Alice");   // Affiche : Hello, Alice!
        return 0;
    }
    ```

## 3. **Fonctions Overload (Surcharge de Fonction)**

-   Vous pouvez définir plusieurs fonctions avec le même nom mais avec des paramètres différents. Cela s'appelle la surcharge de fonctions.

-   **Exemple:**

    ```cpp
    #include <iostream>

    // Fonction pour ajouter deux entiers
    int add(int a, int b) {
        return a + b;
    }

    // Fonction pour ajouter trois entiers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    int main() {
        std::cout << "Sum of 2 numbers: " << add(1, 2) << std::endl; // Affiche : Sum of 2 numbers: 3
        std::cout << "Sum of 3 numbers: " << add(1, 2, 3) << std::endl; // Affiche : Sum of 3 numbers: 6
        return 0;
    }
    ```
