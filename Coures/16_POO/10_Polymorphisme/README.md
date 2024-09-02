# cour :**polymorphisme**

> Le **polymorphisme** en C++ est un concept fondamental de la programmation orientée objet (POO) qui permet à une fonction ou une méthode de se comporter différemment en fonction du type d'objet sur lequel elle est appelée. Il existe plusieurs types de polymorphisme en C++, notamment le polymorphisme statique (ou compilation) et le polymorphisme dynamique (ou exécution).

## 1. **Types de Polymorphisme en C++:**

1. **Polymorphisme Statique (ou Compilation)**

    - **Fonctions Surcharge** :
      La surcharge de fonctions permet d'avoir plusieurs fonctions avec le même nom mais avec des signatures différentes (différents types ou nombres d'arguments).
    - **Opérateurs Surcharge** :
      La surcharge d'opérateurs permet de définir des comportements spécifiques pour les opérateurs lorsqu'ils sont appliqués à des objets d'une classe définie par l'utilisateur.

    - **Exemple** :

        ```cpp
        #include <iostream>

        class Math {
        public:
            // Surcharge de la fonction add
            int add(int a, int b) {
                return a + b;
            }

            double add(double a, double b) {
                return a + b;
            }
        };

        int main() {
            Math math;
            std::cout << "Addition (int): " << math.add(5, 3) << std::endl;
            std::cout << "Addition (double): " << math.add(5.5, 3.3) << std::endl;

            return 0;
        }
        ```

        Dans cet exemple, la fonction `add` est surchargée pour accepter à la fois des entiers et des doubles.

2. **Polymorphisme Dynamique (ou Exécution)**

    - **Héritage et Méthodes Virtuelles** :
      Le polymorphisme dynamique est réalisé à l'aide de l'héritage et des méthodes virtuelles. Cela permet à des méthodes de base d'être redéfinies dans des classes dérivées et appelées via des pointeurs ou des références à la classe de base.

    - **Fonctions Virtuelles** :
      Les fonctions virtuelles permettent d'utiliser des méthodes redéfinies dans des classes dérivées, permettant l'appel de la méthode appropriée en fonction du type d'objet pointé.

    - **Exemple** :

        ```cpp
        #include <iostream>

        class Animal {
        public:
            virtual void faireDuBruit() const {
                std::cout << "Animal fait du bruit" << std::endl;
            }
            virtual ~Animal() {} // Destructeur virtuel pour un nettoyage correct
        };

        class Chien : public Animal {
        public:
            void faireDuBruit() const override {
                std::cout << "Chien aboie" << std::endl;
            }
        };

        class Chat : public Animal {
        public:
            void faireDuBruit() const override {
                std::cout << "Chat miaule" << std::endl;
            }
        };

        void faireFaireDuBruit(const Animal& animal) {
            animal.faireDuBruit(); // Appel de la méthode appropriée
        }

        int main() {
            Chien chien;
            Chat chat;

            faireFaireDuBruit(chien); // Affiche : Chien aboie
            faireFaireDuBruit(chat);  // Affiche : Chat miaule

            return 0;
        }
        ```

## 2. **Concepts Clés du Polymorphisme Dynamique:**

1. **Fonction Virtuelle** :

    - Une fonction virtuelle est une méthode dans une classe de base qui peut être redéfinie dans une classe dérivée. L'appel à cette fonction est résolu dynamiquement à l'exécution, en fonction du type réel de l'objet.

2. **Mot-Clé `override`** :

    - Utilisé pour indiquer qu'une méthode dans une classe dérivée remplace une méthode virtuelle de la classe de base. Cela améliore la lisibilité et la vérification par le compilateur.

3. **Destructeurs Virtuels** :

    - Un destructeur virtuel dans la classe de base assure que le destructeur approprié de la classe dérivée est appelé lors de la suppression d'un objet via un pointeur de base.
