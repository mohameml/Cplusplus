# cour :

### 1. **Définition et Création d'une Chaîne (`std::string`)**

-   **Définition:**

    > `std::string` est une classe définie dans l'en-tête `<string>`. Elle encapsule un tableau dynamique de caractères et fournit une large gamme de méthodes pour manipuler ces caractères.

-   **Syntaxe:**

    ```cpp
    std::string str = "val";
    ```

-   **Exemple:**

    ```cpp
    #include <iostream>
    #include <string>

    int main() {
        std::string msg1 = "Hello, World!";  // Initialisation directe avec une chaîne littérale
        std::string msg2("Hello, C++!");     // Initialisation avec un constructeur
        std::string msg3;                    // Chaîne vide

        std::cout << msg1 << std::endl;
        std::cout << msg2 << std::endl;
        std::cout << "Message 3 is empty: " << msg3.empty() << std::endl;

        return 0;
    }
    ```

### 2. **Méthodes Importantes pour `std::string`**

Voici un tableau récapitulatif des méthodes principales de la classe `std::string` en C++, avec leur nom, description, et syntaxe :

| **Nom de la Méthode** | **Description**                                            | **Syntaxe**                             |
| --------------------- | ---------------------------------------------------------- | --------------------------------------- |
| `length()`            | Retourne le nombre de caractères dans la chaîne.           | `msg.length();`                         |
| `empty()`             | Vérifie si la chaîne est vide (longueur égale à 0).        | `msg.empty()`                           |
| `clear()`             | Efface le contenu de la chaîne, la rendant vide.           | `msg.clear();`                          |
| `append()`            | Ajoute une chaîne à la fin de la chaîne actuelle.          | `msg.append("append some code there");` |
| `at()`                | Retourne une référence au caractère à l'index spécifié.    | `msg.at(0);`                            |
| `insert()`            | Insère une sous-chaîne à une position spécifique.          | `msg.insert(0, "@");`                   |
| `find()`              | Recherche une sous-chaîne et retourne sa position.         | `msg.find("B");`                        |
| `erase()`             | Supprime une portion de la chaîne à partir d'une position. | `msg.erase(0, 3);`                      |
