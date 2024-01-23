# cour 01 : **``introduction à C++``**


## 1. **``introduction à C++``**

La programmation en C++ est une compétence fondamentale dans le domaine de l'informatique et du développement logiciel. C++ est un langage de programmation polyvalent qui offre à la fois la programmation procédurale et la programmation orientée objet, ce qui en fait un outil puissant et flexible pour créer une variété d'applications, des logiciels système aux applications graphiques en passant par les jeux vidéo.

- **Introduction au C++ :**

>Le C++ a été développé comme une extension du langage C, avec l'ajout de fonctionnalités orientées objet. Il a été créé par Bjarne Stroustrup au début des années 1980. Le langage a évolué au fil du temps pour inclure des fonctionnalités modernes tout en préservant une compatibilité avec le C. 

- **Caractéristiques principales du C++ :**

1. **Orienté objet :** Le C++ prend en charge la programmation orientée objet, ce qui permet la création de classes et d'objets. Cette approche favorise la modularité, la réutilisabilité du code et facilite la gestion de projets complexes.

2. **Performant :** Le C++ offre un contrôle direct sur la mémoire et des fonctionnalités de bas niveau, ce qui en fait un langage performant. Il est largement utilisé dans le développement de logiciels système, de moteurs de jeu et d'autres applications nécessitant une efficacité maximale.

3. **Multi-paradigme :** Outre la programmation orientée objet, le C++ prend en charge la programmation procédurale et la programmation générique. Cela permet aux développeurs de choisir le paradigme qui convient le mieux à leur tâche.

4. **Standard Template Library (STL) :** La STL est une collection de classes et de fonctions prêtes à l'emploi qui simplifient de nombreuses tâches de programmation. Elle inclut des conteneurs de données, des algorithmes de traitement, et d'autres utilitaires.

- **Structure de base d'un programme C++ :**

Un programme C++ typique se compose de fonctions, de classes et d'objets. La fonction `main()` est le point de départ de l'exécution du programme. Voici une structure de base :

```cpp
#include <iostream>

int main() {
    // Code du programme

    return 0;
}
```

Cette structure utilise la bibliothèque `<iostream>` pour la gestion des entrées/sorties. Vous pouvez ensuite déclarer des variables, créer des fonctions, et intégrer des concepts orientés objet selon les besoins de votre programme.




## 2. programme **Hello, World!** :


Le programme "Hello, World!" est un programme classique utilisé pour illustrer les bases d'un langage de programmation. Voici le code en C++ pour le célèbre "Hello, World!" avec des explications détaillées pour chaque ligne :

```cpp
#include <iostream>

int main() {

    std::cout << "Hello, World!" << std::endl;
    // Cette ligne utilise std::cout pour afficher le texte "Hello, World!" à la console.
    // std::cout est l'objet de sortie standard (console) et << est l'opérateur d'insertion.

    return 0;
    // La fonction main() doit renvoyer un entier. En général, un retour de 0 indique que le programme s'est exécuté correctement.
}
```

- **Explications détaillées :**

1. `#include <iostream>` : Cette ligne inclut la bibliothèque iostream, qui fournit des fonctionnalités d'entrée/sortie standard en C++. La préfixe "i" dans iostream signifie "input" (entrée), et "ostream" signifie "output stream" (flux de sortie).

2. `int main()` : C'est la fonction principale du programme. Tous les programmes C++ commencent leur exécution à partir de la fonction main(). La déclaration `int` indique que la fonction renvoie un entier.

3. `{` : Début du bloc de code associé à la fonction main(). Tout le code exécuté lorsque le programme est lancé est contenu entre ces accolades.

4. `std::cout << "Hello, World!" << std::endl;` : Cette ligne utilise l'objet de sortie standard `std::cout` (console output) pour afficher le texte "Hello, World!". L'opérateur `<<` est utilisé pour insérer le texte dans le flux de sortie. `std::endl` est utilisé pour ajouter une nouvelle ligne à la fin de l'affichage.

5. `return 0;` : La fonction main() doit renvoyer un entier. Un retour de 0 indique généralement que le programme s'est exécuté correctement. La valeur de retour peut être utilisée par le système d'exploitation pour évaluer le statut d'exécution du programme.

6. `}` : Fin du bloc de code associé à la fonction main(). Toutes les instructions du programme se trouvent entre les accolades de début et de fin.

En exécutant ce programme, vous devriez voir la sortie "Hello, World!" affichée à la console.


## 3. **Étapes pour compiler un programme C++ avec g++ :**

Compiler un programme C++ consiste à traduire le code source en langage machine exécutable compréhensible par l'ordinateur. Voici comment vous pouvez compiler un programme C++ en utilisant un compilateur comme g++ (le compilateur GNU C++).



1. **Assurez-vous que g++ est installé :** Avant de commencer, assurez-vous que le compilateur g++ est installé sur votre système. Vous pouvez l'installer en utilisant le gestionnaire de paquets de votre système d'exploitation. Par exemple, sur un système basé sur Debian/Ubuntu, vous pouvez utiliser la commande suivante dans le terminal :

    ```bash
    sudo apt-get install g++
    ```

2. **Créez un fichier source C++ :** Créez un fichier source avec l'extension ".cpp". Par exemple, créez un fichier nommé "hello.cpp" avec le contenu suivant :

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
    ```

3. **Compilez le programme :** Utilisez la commande g++ pour compiler le programme. La syntaxe générale est la suivante :

    ```bash
    g++ nom_du_fichier.cpp -o nom_de_l_executable
    ```

    Par exemple, pour compiler "hello.cpp" et créer un exécutable appelé "hello":

    ```bash
    g++ hello.cpp -o hello
    ```

    Si la compilation se déroule sans erreur, un fichier exécutable nommé "hello" sera créé dans le même répertoire.

5. **Exécutez le programme :** Après la compilation, vous pouvez exécuter le programme en utilisant la commande suivante dans le terminal :

    ```bash
    ./hello
    ```

    Vous devriez voir la sortie "Hello, World!" affichée à la console.


6. **qq options du g++ :**

    ```bash
    g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o main
    ```

    1. **-std=c++17 :** Cette option spécifie la version du standard C++ à utiliser. Dans ce cas, elle indique que le programme doit être compilé en utilisant le standard C++17. Chaque version du standard C++ apporte de nouvelles fonctionnalités et améliorations, et l'option -std est utilisée pour indiquer au compilateur quelle version du standard doit être suivie.

    2. **-Wall :** Cette option active un ensemble de messages d'avertissement (warnings) pour aider à détecter des erreurs potentielles ou des pratiques non recommandées. "Wall" signifie "all warnings" (tous les avertissements). Activer cette option est une bonne pratique pour s'assurer que le code est écrit de manière sûre.

    3. **-Wextra :** Cette option active des avertissements supplémentaires qui ne sont pas inclus dans l'option -Wall. Cela permet d'accéder à un ensemble plus étendu d'avertissements pour détecter d'autres problèmes potentiels dans le code.

    4. **-Werror :** Cette option indique au compilateur de traiter tous les avertissements comme des erreurs. Cela signifie que si le compilateur génère un avertissement, la compilation sera interrompue et le code ne sera pas généré en un exécutable. L'utilisation de -Werror encourage une approche plus stricte pour s'assurer que le code est robuste et sans avertissements.

    5. **main.cpp :** C'est le nom du fichier source C++ que vous souhaitez compiler. Dans votre exemple, le fichier source est "main.cpp".

    6. **-o main :** Cette option spécifie le nom du fichier exécutable généré par le compilateur. Dans votre exemple, le fichier exécutable sera nommé "main". L'option -o permet de spécifier le nom du fichier de sortie.

En résumé, la commande `g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o main` indique au compilateur g++ de prendre le fichier source "main.cpp", de le compiler en utilisant le standard C++17, d'activer des avertissements détaillés pour détecter des erreurs potentielles, de traiter tous les avertissements comme des erreurs, et de générer un fichier exécutable nommé "main". Cette configuration est orientée vers une pratique de développement robuste en détectant et en traitant rigoureusement les avertissements.