# Cour : **Les attributs**

## 1. **Introduction:**

-   **Def:**

    > Les attributs sont les variables qui stockent les données spécifiques à un objet. Ils représentent les propriétés ou caractéristiques d'un objet.

    -   Par exemple, pour une classe `Voiture`, les attributs pourraient être la marque, le modèle, l'année de fabrication, etc. Les attributs peuvent avoir des niveaux d'accès différents : public, privé, ou protégé, ce qui détermine leur visibilité à l'extérieur de la classe.

-   **Syntaxe:**

    ```cpp
    class NomDeClasse {
    public :
        type nomDeAtt ;
    }

    ```

-   **Exemple :**

    ```cpp
    class Voiture {
    public:
        std::string marque;
        int annee;
    };
    ```

## 2 **Attributs `static`:**

-   **Description:**

    > Un attribut `static` est un membre de la classe qui est partagé entre toutes les instances de cette classe. Il est alloué une seule fois et est accessible à travers la classe elle-même plutôt que par des instances spécifiques.

-   **Déclaration et Syntaxe:**

    -   **Déclaration** : Les attributs `static` sont déclarés à l'intérieur de la classe avec le mot-clé `static`.
    -   **Définition** : Les attributs `static` doivent être définis en dehors de la classe.

-   **Exemple:**

    ```cpp
    #include <iostream>

    class Compteur {
    public:
        // Attribut static
        static int nombreInstances;

        // Constructeur
        Compteur() {
            nombreInstances++;  // Incrémente le nombre d'instances
        }

        // Méthode pour afficher le nombre d'instances
        static void afficherNombreInstances() {
            std::cout << "Nombre d'instances : " << nombreInstances << std::endl;
        }
    };

    // Définition de l'attribut static
    int Compteur::nombreInstances = 0;

    int main() {
        Compteur c1;
        Compteur c2;

        Compteur::afficherNombreInstances(); // Affiche : Nombre d'instances : 2

        return 0;
    }
    ```
