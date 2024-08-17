#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>

typedef std::vector<std::pair<std::string, int>> parlist_t;
// typedef std::string str_t;
using str_t = std::string;
using number_t = int;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

void Myfunction()
{
    std::cout << "Hello World !!";
}
int add(int *a, int *b);

int main()
{

    /*
    ================================= Bases ================================
    */
    // affichage console :
    std::cout << "Bonjour tout le mond!" << std::endl;
    // variables :
    int a = 10;
    double price = 10.95;
    char b = 'B';
    bool isFinish = true;
    std::string name = "sidi";
    const double PI = 3.14;
    // namespace :
    using namespace first;
    std::cout << first::x << std::endl;
    std::cout << second::x << "\n";
    // typedef && using
    std::vector<std::pair<std::string, int>> list1;
    parlist_t list2;
    str_t firstName = "sidi";
    // arthmetic op :
    // + , - , * , / , += , ++ , -- , % ,
    // Conversion : Implicite , Explicite : (type) variable
    double x = (int)3.14; // explicite
    char y = 100;         // d : implicite
    // user input : cout << , cin >>
    std::string name2;
    std::string name3;
    std::cout << "What's your full name :";
    std::cin >> name2;                        // recupere juste le 1 ere mots avant le 1ere espace
    std::getline(std::cin >> std::ws, name3); // rq : getline apres std::cin
    std::cout << "Hello " << name2 << std::endl;
    std::cout << "Hello " << name3 << std::endl;
    // fonctions math : std::max() , <cmath> : pow , sqrt , abs ,  round /ceil/floor
    int a1 = pow(2, 3);
    std::cout << "2^3 =" << a1 << std::endl;
    // condition : if/else-if/else , switch , ternnaire ? , && || !

    if (a1 == 2)
    {
        std::cout << "a1 == 2 \n";
    }
    else if (a == 3)
    {
        std::cout << "a1 == 3 \n";
    }
    else
    {
        std::cout << "a1 \n";
    }

    int b1 = a1 == 8 ? 4 : 12;

    std::cout << "b1 = " << b1 << std::endl;

    switch (b1)
    {
    case 1:
        std::cout << "b1 = 1";
        break;
    case 2:
    case 4:
        std::cout << "b1 est paire \n";
        break;

    default:
        break;
    }
    // string methodes :
    std::string msg = "sidi va à l'école!!";
    msg.length();
    msg.empty();
    msg.clear();
    msg.append("append some code there");
    msg.at(0);
    msg.insert(0, "@");
    msg.find("B");
    msg.erase(0, 3);
    // boucles : for , while , do-while , break , continue
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        std::cout << "i =" << i << std::endl;
    }
    // random number :
    srand(time(NULL));
    int a = (rand() % 6) + 1;
    // fonctions : prototype , overloaded
    Myfunction();
    // Array : introduction
    int tab[] = {1, 10, 7, 9, 16};
    tab[1];
    std::string cars[3];
    cars[0] = "car1";
    cars[1] = "car2";
    cars[2] = "car3";
    // sizeof(): size in bytes of variable

    return 0;
}

int add(int *a, int *b)
{
    int res = *a + *b;
    return res;
}
