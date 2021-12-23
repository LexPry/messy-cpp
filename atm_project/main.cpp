#include <iostream>

void showMenu() {
    std::cout << "-------------MENU-------------\n";
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "--------------------------" << std::endl;
}

int main() {
    // check balance, deposit, withdraw, show menu
    int option{};
    double balance{500};

    do {
        showMenu();
        std::cout << "Please choose an option: ";
        std::cin >> option;


        switch (option) {
            case 1: {
                std::cout << "Balance is: $" << balance << std::endl;
                break;
            }
            case 2: {
                double depositAmount{};
                std::cout << "Enter Deposit Amount: ";
                std::cin >> depositAmount;
                balance += depositAmount;
                break;
            }
            case 3: {
                double withdrawAmount{};
                std::cout << "Enter Deposit Amount: ";
                std::cin >> withdrawAmount;
                if (withdrawAmount <= balance)
                    balance -= withdrawAmount;
                else
                    std::cout << "Not enough money" << std::endl;
                break;
            }
            default: {
                std::cout << "Not a valid option!" << std::endl;
                break;
            }

        }
    } while (option != 4);
    return 0;
}
