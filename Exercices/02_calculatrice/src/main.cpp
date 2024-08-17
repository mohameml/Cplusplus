#include <iostream>
#include <cmath>

int main()
{

    char op;
    double a;
    double b;
    double res;
    bool quit = true;

    std::cout << "================================= wolckom to your calc ===========================" << std::endl;
    std::cout << "1.Pres Q to quit " << std::endl;
    std::cout << "2.Pres op : + , - , * , / , ^" << std::endl;
    std::cout << "3.Pres a : number" << std::endl;
    std::cout << "4.Pres b : number" << std::endl;

    do
    {
        std::cout << "op :";
        std::cin >> op;

        if (op == 'Q')
        {
            std::exit(0);
        }

        std::cout << "a :";
        std::cin >> a;

        std::cout << "b :";
        std::cin >> b;

        switch (op)
        {
        case 'Q':
            quit = false;
            break;
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':

            if (b == 0)
            {
                std::cout << "you can't divide by zero";
            }
            else
            {
                res = a / b;
            }
        case '^':
            res = pow(a, b);

        default:
            std::cout << "please entre valide op : +,-,*,/,^ \n";
            break;
        }

        std::cout << "res = " << res << std::endl;

    } while (quit);

    return 0;
}