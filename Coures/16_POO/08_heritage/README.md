# cour 03 :

## 1. **Qu'est-ce que l'héritage ?:**

-   **Description:**

    > L'héritage est un concept fondamental en programmation orientée objet (POO) qui permet de créer de nouvelles classes à partir de classes existantes. En C++, l'héritage permet à une classe (appelée **classe dérivée** ou **classe enfant**) de hériter des attributs et des méthodes d'une autre classe (appelée **classe de base** ou **classe parent**). Cela favorise la réutilisation du code, la modularité et l'extensibilité.

-   Il existe principalement trois types d'héritage en C++ :

    -   **Héritage public** : La classe dérivée hérite des membres publics et protégés de la classe de base. Les membres publics restent publics, et les membres protégés restent protégés dans la classe dérivée.
    -   **Héritage protégé** : Les membres publics et protégés de la classe de base deviennent protégés dans la classe dérivée.
    -   **Héritage privé** : Les membres publics et protégés de la classe de base deviennent privés dans la classe dérivée.

-   **Syntaxe de l'héritage:**

    Pour déclarer une classe dérivée en C++, on utilise la syntaxe suivante :

    ```cpp
    class ClasseDerivee : modeAcces ClasseDeBase {
        // Membres de la classe dérivée
    };
    ```

    -   **modeAcces** peut être `public`, `protected`, ou `private` et détermine la manière dont les membres de la classe de base seront accessibles dans la classe dérivée.

-   **Exemple d'héritage:**

    Imaginons que nous avons une classe de base `Personne` qui représente une personne générale, et une classe dérivée `Employe` qui représente un employé, une forme spécifique de personne.

    ```cpp
    #include <iostream>
    #include <string>

    class Personne {
    public:
        std::string nom;
        int age;

        Personne(std::string n, int a) : nom(n), age(a) {}

        void afficher() {
            std::cout << "Nom : " << nom << ", Âge : " << age << std::endl;
        }
    };

    // Classe dérivée
    class Employe : public Personne {
    public:
        std::string entreprise;

        Employe(std::string n, int a, std::string e) : Personne(n, a), entreprise(e) {}

        void afficher() {
            std::cout << "Nom : " << nom << ", Âge : " << age << ", Entreprise : " << entreprise << std::endl;
        }
    };

    int main() {
        Employe e("Alice", 30, "TechCorp");
        e.afficher(); // Appelle la méthode afficher() de la classe Employe

        return 0;
    }
    ```

## 2. **`virtual` && `override`:**

-   **Description:**

    -   Le mot-clé `virtual` est utilisé pour indiquer qu'une méthode dans une classe de base peut être redéfinie dans une classe dérivée.

    -   Le mot-clé `override` a été introduit avec C++11 pour indiquer explicitement qu'une méthode dans une classe dérivée est censée redéfinir une méthode virtuelle de la classe de base.

-   **Syntaxe:**

    ```cpp
    #include <iostream>

    class Pere {
    public:
        virtual void nomDeMethode()  { // Méthode virtuelle
            //
        }
    };

    class Enfant : public Personne {
    public:
        void nomDeMethode()  override { // Redéfinition de la méthode virtuelle
            //
        }
    };


    ```

-   **Exemple :**

    ```cpp
    #include <iostream>

    class Personne {
    public:
        virtual void afficher() const { // Méthode virtuelle
            std::cout << "Je suis une personne." << std::endl;
        }
    };

    class Employe : public Personne {
    public:
        void afficher() const override { // Redéfinition de la méthode virtuelle
            std::cout << "Je suis un employé." << std::endl;
        }
    };

    int main() {
        Personne* p = new Employe();
        p->afficher();  // Affiche : "Je suis un employé." grâce à la liaison dynamique

        delete p;
        return 0;
    }
    ```

## 3. **Appele d'une méthode de la classe parent:**

-   **Def:**

    > Pour appeler une méthode de la classe parent (classe de base) à partir d'une classe dérivée en C++, vous pouvez utiliser l'opérateur de portée (`::`). Cela est souvent nécessaire lorsque vous avez redéfini (overriden) une méthode dans la classe dérivée, mais que vous souhaitez tout de même accéder à l'implémentation de cette méthode dans la classe parent.

-   **Syntaxe:**

    Pour appeler une méthode de la classe parent, la syntaxe générale est :

    ```cpp
    ClasseParent::NomDeLaMethode(paramètres);
    ```

-   **Exemple de code:**

    ```cpp
    #include <iostream>

    class Personne {
    public:
        std::string nom;

        Personne(std::string n) : nom(n) {}

        virtual void afficher() const {
            std::cout << "Nom : " << nom << std::endl;
        }
    };

    class Employe : public Personne {
    public:
        std::string poste;

        Employe(std::string n, std::string p) : Personne(n), poste(p) {}

        void afficher() const override {
            // Appel de la méthode afficher() de la classe parent (Personne)
            Personne::afficher();  // Appelle Personne::afficher()
            std::cout << "Poste : " << poste << std::endl;
        }
    };

    int main() {
        Employe e("Alice", "Développeur");
        e.afficher();  // Appelle la méthode afficher() redéfinie dans Employe

        return 0;
    }
    ```
