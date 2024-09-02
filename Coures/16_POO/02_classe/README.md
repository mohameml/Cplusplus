# cour 02 : **classe**

-   **Def:**

    > Une classe est un modèle ou un plan qui définit la structure et le comportement des objets. En d'autres termes, elle est une sorte de "gabarit" à partir duquel on peut créer plusieurs objets similaires.

    -   Une classe contient des attributs, qui représentent les caractéristiques d'un objet, et des méthodes, qui définissent les actions qu'un objet peut effectuer.

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

-   **Exemple simple de définition d'une classe en C++ :**

    ```cpp
    class Voiture {
    public:
        std::string marque;
        int annee;

        void demarrer() {
            std::cout << "La voiture démarre." << std::endl;
        }
    };
    ```
