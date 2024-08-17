# cour 03 : **Les Variables**

## 1. Introduction :

> En C++, les variables sont des emplacements de mémoire utilisés pour stocker des données. Pour utiliser une variable, il faut d'abord déclarer son type, puis lui donner un nom, et éventuellement l'initialiser avec une valeur.

## 2. Types de Variables

1. **Types de Base :**

    - `int` : Entiers (par exemple, `int age = 30;`)
    - `float` : Nombres à virgule flottante (par exemple, `float temperature = 23.5;`)
    - `double` : Nombres à virgule flottante avec double précision (par exemple, `double pi = 3.14159;`)
    - `char` : Caractères individuels (par exemple, `char initial = 'A';`)
    - `bool` : Valeurs booléennes (vrai ou faux) (par exemple, `bool isValid = true;`)

2. **Types Composés :**

    - `array` : Tableaux pour stocker plusieurs valeurs du même type (par exemple, `int numbers[5] = {1, 2, 3, 4, 5};`)
    - `struct` : Structures pour regrouper différentes variables (par exemple, `struct Person { std::string name; int age; };`)
    - `class` : Classes pour créer des objets avec des propriétés et des méthodes (par exemple, `class Car { std::string model; int year; };`)

3. **Types Énumérés :**

    - `enum` : Enumérations pour définir un ensemble de valeurs nommées (par exemple, `enum Color { RED, GREEN, BLUE };`)

4. **Types Définis par l’Utilisateur :**
    - `typedef` : Pour définir un nouveau nom pour un type existant (par exemple, `typedef unsigned long ulong;`)

## 3. Déclaration et Initialisation

-   **Déclaration :** On spécifie le type de la variable et son nom. Par exemple :

    ```cpp
    int number;
    float price;
    ```

-   **Initialisation :** On donne une valeur initiale à la variable lors de sa déclaration. Par exemple :

    ```cpp
    int number = 10;
    float price = 99.99;
    ```

-   **Déclaration Multiple :** On peut déclarer plusieurs variables du même type en une seule ligne. Par exemple :
    ```cpp
    int x = 5, y = 10, z = 15;
    ```

## 4. Portée et Durée de Vie

-   **Portée (Scope) :** La portée d'une variable est la partie du programme où la variable est accessible. Les variables peuvent être :

    -   **Locales :** Déclarées à l'intérieur d'une fonction ou d'un bloc, elles ne sont accessibles qu'à l'intérieur de ce bloc.
    -   **Globales :** Déclarées à l'extérieur de toutes les fonctions, elles sont accessibles dans tout le programme.
    -   **Statique :** Déclarées avec le mot-clé `static`, leur valeur est préservée entre les appels de fonction, mais leur portée est limitée au bloc ou à la fonction.

-   **Durée de Vie :** La durée pendant laquelle une variable conserve sa valeur. Les variables locales ont une durée de vie qui se limite à l'exécution du bloc où elles sont déclarées, tandis que les variables globales et statiques conservent leur valeur pendant toute la durée d'exécution du programme.

## 5. Exemple Complet

```cpp
#include <iostream>
#include <string>

// Déclaration de variables globales
int globalVar = 100;

struct Person {
    std::string name;
    int age;
};

int main() {
    // Déclaration de variables locales
    int localVar = 10;
    float salary = 2500.75;

    // Déclaration et initialisation d'un tableau
    int scores[3] = {90, 85, 88};

    // Création et initialisation d'un objet struct
    Person person;
    person.name = "Alice";
    person.age = 30;

    std::cout << "Global Variable: " << globalVar << std::endl;
    std::cout << "Local Variable: " << localVar << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Person Name: " << person.name << ", Age: " << person.age << std::endl;

    return 0;
}
```

Ce code montre différents types de variables, y compris les variables globales et locales, les tableaux et les structures, ainsi que comment les afficher en utilisant `std::cout`.

### RQ : Types fondamentaux

> La taille des données dépend de l'implémentation (utilisez l'opérateur **sizeof** pour vérifier)<br>
> Le standard C++ garantit que : `char` <= `short` <= `int` <= `long` <= `long long`

| NOM      | TAILLE  | VALEURS POSSIBLES |
| :------- | :-----: | :---------------- |
| **bool** | 1 octet | true / false      |

| NOM             |  TAILLE   | VALEUR MIN                 | VALEUR MAX                |
| :-------------- | :-------: | :------------------------- | :------------------------ |
| **char**        |  1 octet  | -128                       | 127                       |
| **short**       | 2 octets  | -32 768                    | 32 767                    |
| **int**         | 4 octets  | -2 147 483 648             | 2 147 483 647             |
| **long**        | 4 octets  | -2 147 483 648             | 2 147 483 647             |
| **long long**   | 8 octets  | -9 223 372 036 854 775 808 | 9 223 372 036 854 775 807 |
| **float**       | 4 octets  | ±1.17554e-38               | ±3.40282e+38              |
| **double**      | 8 octets  | ±2.22507e-308              | ±1.79769e+308             |
| **long double** | 16 octets | ±3.3621e-4932              | ±1.18973e+4932            |

| NOM                    |  TAILLE  | VALEUR MIN | VALEUR MAX                 |
| :--------------------- | :------: | :--------- | :------------------------- |
| **unsigned char**      | 1 octet  | 0          | 255                        |
| **unsigned short**     | 2 octets | 0          | 65 535                     |
| **unsigned int**       | 4 octets | 0          | 4 294 967 295              |
| **unsigned long**      | 4 octets | 0          | 4 294 967 295              |
| **unsigned long long** | 8 octets | 0          | 18 446 744 073 709 551 615 |

---

[Plus de types...](https://en.cppreference.com/w/cpp/language/types)
