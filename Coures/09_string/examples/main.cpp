#include <iostream>
#include <string>

int main()
{
    std::string msg1 = "Hello, World!"; // Initialisation directe avec une chaîne littérale
    std::string msg("Hello, C++!");     // Initialisation avec un constructeur
    std::string msg3;                   // Chaîne vide

    std::cout << msg1 << std::endl;
    std::cout << msg << std::endl;
    std::cout << "Message 3 is empty: " << msg3.empty() << std::endl;

    return 0;
}