# Cour : **Les constructeurs**

## 1. **Introduction:**

-   **Def:**

    > Un constructeur est une méthode spéciale d'une classe qui est automatiquement appelée lors de la création d'un objet. Il sert à initialiser les attributs d'un objet. En C++, un constructeur porte le même nom que la classe et n'a pas de type de retour.

-   **Syntaxe:**

    ```cpp
    class NomDeClasse {
    private :
        //
    public :
        //
        NomDeClasse() {
            //
        }

    }

    ```

-   **Exemple:**

    ```cpp
    class Voiture {
    public:
        std::string marque;
        int annee;

        // Constructeur : List d'initialisation
        Voiture(std::string m, int a) : marque(m), annee(a) {}
        // ou :
        Voiture(std::string m, int a) {
            marque = m ;
            annee = a ;
        }

        // Méthode
        void demarrer() {
            std::cout << "La " << marque << " de " << annee << " démarre." << std::endl;
        }
    };
    ```

## 2. **Liste d'initialisation:**

-   **Description:**

    -   une liste d'initialisation est une méthode pour initialiser les membres d'une classe au moment de la création d'un objet. Elle est particulièrement utile pour les attributs qui sont des objets complexes ou des types `const`, ainsi que pour les classes de base lorsqu'on travaille avec l'héritage.

    -   Une liste d'initialisation est une partie de la déclaration d'un constructeur dans laquelle vous pouvez initialiser les membres de la classe avant d'exécuter le corps du constructeur.Elle est utilisée pour initialiser les membres de données d'une classe et les objets membres avant que le constructeur ne commence son exécution.

-   **Avantages de la liste d'initialisation :**

    -   **Initialisation des membres `const` ou `reference`** : Les membres `const` ou `reference` doivent être initialisés lors de la création de l'objet, et la liste d'initialisation est le seul moyen de les initialiser.

    -   **Initialisation efficace** : Elle est plus efficace pour les membres complexes, car elle initialise les membres directement avec les valeurs fournies plutôt que d'utiliser une affectation dans le corps du constructeur.

    -   **Héritage** : Elle permet d'initialiser les classes de base avant d'initialiser les membres spécifiques de la classe dérivée.

-   **Syntaxe:**

    La syntaxe générale pour une liste d'initialisation est la suivante :

    ```cpp
    ClassName::ClassName(parameters) : member1(initializer1), member2(initializer2), ... {
        // Corps du constructeur (facultatif)
    }
    ```

    -   `ClassName::ClassName(parameters)` est la déclaration du constructeur.
    -   `: member1(initializer1), member2(initializer2), ...` est la liste d'initialisation, où chaque membre est initialisé avec la valeur fournie.

-   **Exemple:**

    ```cpp
    #include <iostream>
    #include <string>

    class Date {
    public:
        int jour;
        int mois;
        int annee;

        // Constructeur avec liste d'initialisation
        Date(int j, int m, int a) : jour(j), mois(m), annee(a) {}
    };

    class Personne {
    public:
        std::string nom;
        int age;
        Date dateDeNaissance; // Objet membre de type Date

        // Constructeur avec liste d'initialisation
        Personne(const std::string& n, int a, const Date& d)
            : nom(n), age(a), dateDeNaissance(d) {} // Initialisation des membres

        void afficher() const {
            std::cout << "Nom : " << nom << ", Âge : " << age << std::endl;
            std::cout << "Date de naissance : " << dateDeNaissance.jour << "/"
                    << dateDeNaissance.mois << "/" << dateDeNaissance.annee << std::endl;
        }
    };

    int main() {
        Date d(15, 8, 1990); // Création d'un objet Date
        Personne p("Alice", 34, d); // Création d'un objet Personne avec initialisation de ses membres

        p.afficher(); // Appel de la méthode afficher pour afficher les informations

        return 0;
    }
    ```

## 3. **`new`**

-   **Description:**

    > En C++, le mot-clé `new` est utilisé pour allouer dynamiquement de la mémoire sur le tas (heap) et pour créer des objets ou des tableaux d'objets à l'exécution. Contrairement à la mémoire allouée sur la pile (stack), la mémoire allouée avec `new` persiste jusqu'à ce qu'elle soit explicitement libérée avec `delete`.

-   **Syntaxe** :

    ```cpp
    Type* pointer = new Type;
    ```

-   **Exemple** :

    ```cpp
    #include <iostream>

    class Exemple {
    public:
        Exemple() { std::cout << "Constructeur appelé" << std::endl; }
        ~Exemple() { std::cout << "Destructeur appelé" << std::endl; }
    };

    int main() {
        Exemple* obj = new Exemple(); // Allocation dynamique
        delete obj;                   // Libération de la mémoire
        return 0;
    }
    ```

    -   `new Exemple()` crée un nouvel objet `Exemple` sur le tas et retourne un pointeur vers cet objet.
    -   `delete obj;` libère la mémoire allouée à l'objet et appelle son destructeur.

## 4. **Le constructeur de copie:**

-   **Description:**

    > Le constructeur de copie en C++ est un type spécial de constructeur utilisé pour créer un nouvel objet en copiant les membres d'un objet existant. Il est appelé lorsqu'un objet est initialisé à partir d'un autre objet du même type.

-   **Syntaxe du Constructeur de Copie:**

    La signature du constructeur de copie est la suivante :

    ```cpp
    ClassName(const ClassName& other);
    ```

    -   **`ClassName`** : Le nom de la classe.
    -   **`const ClassName& other`** : Une référence constante à l'objet à copier.

-   **Exemple de Constructeur de Copie:**

    Voici un exemple simple d'une classe `Boite` avec un constructeur de copie :

    ```cpp
    #include <iostream>
    using namespace std;

    class Boite {
    private:
        int* largeur;

    public:
        // Constructeur par défaut
        Boite(int l) : largeur(new int(l)) {
            cout << "Constructeur par défaut appelé" << endl;
        }

        // Constructeur de copie
        Boite(const Boite& autre) : largeur(new int(*(autre.largeur))) {
            cout << "Constructeur de copie appelé" << endl;
        }

        // Destructeur
        ~Boite() {
            delete largeur;
            cout << "Destructeur appelé" << endl;
        }

        // Méthode pour afficher la largeur
        void afficherLargeur() const {
            cout << "Largeur: " << *largeur << endl;
        }
    };

    int main() {
        Boite boite1(10);      // Appel du constructeur par défaut
        Boite boite2 = boite1; // Appel du constructeur de copie

        boite1.afficherLargeur();
        boite2.afficherLargeur();

        return 0;
    }
    ```

### RQ1 : **Quand le Constructeur de Copie est-il appelé ?**

Le constructeur de copie est invoqué dans plusieurs situations :

-   Lorsque vous passez un objet par valeur à une fonction.
-   Lorsque vous retournez un objet par valeur depuis une fonction.
-   Lorsque vous initialisez un nouvel objet avec un objet existant (par exemple, `ClassName obj2 = obj1;`).

### RQ2 : **Shallow Copy vs Deep Copy**

-   **Shallow Copy (Copie superficielle)** :
    -   Copie les valeurs des membres de l'objet de manière directe, y compris les pointeurs. Si deux objets partagent un même pointeur à une ressource, cela peut entraîner des conflits de mémoire.
-   **Deep Copy (Copie profonde)** :
    -   Copie non seulement les valeurs des membres, mais alloue également une nouvelle mémoire pour les pointeurs et copie le contenu pointé. Chaque objet a sa propre copie de la ressource, évitant ainsi les conflits.
