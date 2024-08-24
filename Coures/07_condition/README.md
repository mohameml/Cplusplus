# cour 07 :

> Les conditions en C++ permettent de prendre des décisions dans un programme en fonction des valeurs ou des résultats d'expressions logiques. C++ propose plusieurs structures conditionnelles, les plus courantes étant `if`, `else`, `else if`, et `switch`. Ces structures permettent d'exécuter différents blocs de code en fonction des conditions évaluées.

## 1. **Les instructions `if` , `else` et `else if`**

-   **Description:**

    -   L'instruction `if` est utilisée pour tester une condition. Si la condition est vraie (c'est-à-dire que l'expression retourne `true`), le bloc de code associé est exécuté. Si elle est fausse (`false`), le bloc est ignoré.

    -   L'instruction `else` est utilisée en conjonction avec `if`. Si la condition du `if` est fausse, le bloc de code associé au `else` est exécuté.

    -   L'instruction `else if` permet de tester plusieurs conditions successives. Si la première condition est fausse, la condition suivante est testée, et ainsi de suite. Si aucune des conditions n'est vraie, le bloc `else` (s'il est présent) sera exécuté.

-   **Syntaxe:**

    ```cpp
    if (condition) {
        // Bloc de code exécuté si la condition est vraie
    } else if(condition2) {
        //
    } else {
        //
    }
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int age = 20;

        if (age < 13) {
            std::cout << "You are a child." << std::endl;
        } else if (age < 18) {
            std::cout << "You are a teenager." << std::endl;
        } else {
            std::cout << "You are an adult." << std::endl;
        }

        return 0;
    }
    ```

## 2. **L'Instruction `switch`**

-   **Description:**

    > L'instruction `switch` est utilisée pour tester une variable contre plusieurs valeurs possibles. Elle est souvent utilisée comme alternative à une série de `else if` lorsque les conditions concernent la comparaison d'une seule variable avec des valeurs constantes.

-   **Syntaxe:**

    ```cpp
    switch (variable) {
        case valeur1:
            // Bloc de code exécuté si variable == valeur1
            break;
        case valeur2:
            // Bloc de code exécuté si variable == valeur2
            break;
        // Autres cases
        default:
            // Bloc de code exécuté si aucune des valeurs ci-dessus ne correspond
    }
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int day = 3;

        switch (day) {
            case 1:
                std::cout << "Monday" << std::endl;
                break;
            case 2:
                std::cout << "Tuesday" << std::endl;
                break;
            case 3:
                std::cout << "Wednesday" << std::endl;
                break;
            case 4:
                std::cout << "Thursday" << std::endl;
                break;
            case 5:
                std::cout << "Friday" << std::endl;
                break;
            case 6:
                std::cout << "Saturday" << std::endl;
                break;
            case 7:
                std::cout << "Sunday" << std::endl;
                break;
            default:
                std::cout << "Invalid day" << std::endl;
                break;
        }

        return 0;
    }
    ```

## 3. **Opérateurs de Comparaison et Logiques**

Les conditions en C++ utilisent des opérateurs de comparaison et logiques pour tester les expressions :

-   **Opérateurs de comparaison** :

    -   `==` : Égal à
    -   `!=` : Différent de
    -   `<` : Inférieur à
    -   `>` : Supérieur à
    -   `<=` : Inférieur ou égal à
    -   `>=` : Supérieur ou égal à

-   **Opérateurs logiques** :
    -   `&&` : ET logique (toutes les conditions doivent être vraies)
    -   `||` : OU logique (au moins une condition doit être vraie)
    -   `!` : NON logique (inverse la valeur de la condition)

## 4. **L'opérateur ternaire:**

-   **Description:**

    > L'opérateur ternaire en C++ est un moyen concis d'écrire des conditions simples. Il permet d'évaluer une expression booléenne et de retourner une valeur en fonction de si cette expression est vraie ou fausse. C'est une alternative compacte à l'instruction `if-else` classique pour les situations simples où une seule expression ou valeur est retournée.

-   **Syntaxe de l'Opérateur Ternaire:**

    ```cpp
    condition ? expression_si_vrai : expression_si_faux;
    ```

    -   **condition** : C'est l'expression booléenne à évaluer. Si elle est vraie (`true`), `expression_si_vrai` sera évaluée et retournée.
    -   **expression_si_vrai** : L'expression qui sera exécutée et dont la valeur sera retournée si la condition est vraie.
    -   **expression_si_faux** : L'expression qui sera exécutée et dont la valeur sera retournée si la condition est fausse.

-   **Exemple:**

    ```cpp
    #include <iostream>

    int main() {
        int age = 20;

        // Utilisation de l'opérateur ternaire pour déterminer le statut adulte
        std::string status = (age >= 18) ? "Adult" : "Minor";

        std::cout << "Status: " << status << std::endl;

        return 0;
    }
    ```
