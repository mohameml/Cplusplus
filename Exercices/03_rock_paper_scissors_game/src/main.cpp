#include <iostream>
/*
    rock paper scissors game .
*/
void wolckom();
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
std::string chooseWinner(char player, char computer);
bool isValidChoice(char choice);

int main()
{
    wolckom();

    char choicePlayer = getUserChoice();
    char choiceCompture = getComputerChoice();
    std::string msg = chooseWinner(choicePlayer, choiceCompture);
    std::cout << msg << std::endl;

    return 0;
}

void wolckom()
{
    std::cout << "================== Wolckom to the : Rock-Paper-Scissors Game ================ \n";
}

char getUserChoice()
{
    // 3 : R , P , S
    std::cout << "Please choose : R,P,S \n";

    char choice;
    do
    {
        std::cin >> choice;
    } while (!isValidChoice(choice));

    return choice;
}

char getComputerChoice()
{
    srand(time(NULL));
    int choice = rand() % 3;
    if (choice == 0)
    {
        return 'R';
    }
    else if (choice == '1')
    {
        return 'P';
    }
    else
    {
        return 'S';
    }
}

void showChoice(char choice)
{
    std::cout << "choice is :" << choice << std::endl;
}

std::string chooseWinner(char player, char computer)
{
    std::string msg;
    showChoice(player);
    showChoice(computer);
    if (player == 'R' && computer == 'P' || player == 'P' && computer == 'R')
    {
        msg = player == 'P' ? "You win !!!" : "computer win";
    }
    else if (player == 'R' && computer == 'S' || player == 'S' && computer == 'R')
    {
        msg = player == 'R' ? "You win !!!" : "computer win";
    }
    else if (player == 'P' && computer == 'S' || player == 'S' && computer == 'P')
    {
        msg = player == 'S' ? "You win !!!" : "computer win";
    }
    else
    {
        msg = "Equals";
    }

    return msg;
}

bool isValidChoice(char choice)
{
    if (choice == 'R' || choice == 'P' || choice == 'S')
    {
        return true;
    }

    return false;
}
