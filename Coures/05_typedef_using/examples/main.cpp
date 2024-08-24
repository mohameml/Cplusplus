#include <iostream>

// Alias pour un type entier long
typedef long long int LongInt;

// Alias pour un pointeur sur une fonction qui prend un int et retourne un int
typedef int (*FuncPtr)(int);

int addOne(int x)
{
    return x + 1;
}

int main()
{
    LongInt largeNumber = 123456789012345;
    FuncPtr myFunc = addOne;

    std::cout << "Large Number: " << largeNumber << std::endl;
    std::cout << "Result: " << myFunc(5) << std::endl;

    return 0;
}