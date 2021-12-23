#include <iostream>
#include <fstream>
#include <string>

bool login_function();

int main() {
    int choice;
    std::cout << "Welcome to my login system test app!\n";

    do {

        std::cout << "What would you like to do?";
        std::cout << "\n1. Register\n2. Login\n3. Quit\n";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Select a username: ";

            std::string username;
            std::cin >> username;
            std::cout << "Select a password: ";
            std::string password;
            std::cin >> password;

            std::ofstream file;
            file.open("data\\" + username + ".txt");


            file << username << '\n' << password;
            file.close();
            std::cout << "\nRegistered Successfully!";
        } else if (choice == 2) {
            bool status{login_function()};

            if (!status) {
                int attempt_count{0};
                int attempt_fail{3};
                while (attempt_count < attempt_fail) {
                    std::cout << "Could not find username or password\nTry Again: ";
                    std::cout << "You have " << (attempt_count - attempt_fail) << " attempt's left";
                    status = login_function();
                    attempt_count++;
                }
                if (!status) {
                    std::cout << "MAX ATTEMPTS REACHED\nTRY AGAIN LATER\nGoodbye...";
                    return 0;
                }

            } else {
                std::cout << "Successfully logged in!\n";
                return 1;
            }


        }
    } while (choice != 3);

}


// will happen when logging in (option 2)
bool login_function() {
    std::string username, password, un, pw;

    std::cout << "\n--------------------------------\n";
    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    std::ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
        return true;
    else
        return false;
}
