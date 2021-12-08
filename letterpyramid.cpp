/*
Example output: 
{'A', 'B', 'C'}


        A
       ABA
      ABCBA

Get user string
Get total size
Get amount of spaces
print input out to current letter - 1
print current letter
print current letter - 1 to beggining

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // user input
    string user_input{};

    // position of the loop, used to count
    // up to and back from current letter
    int position{0};

    std::cout << "Enter a string: ";
    getline(cin, user_input);

    // total size of user input
    size_t total_size{user_input.size()};

    for (char c : user_input)
    {

        // to calculate spaces needed before/after
        // string tree
        int spaces = total_size - position;
        while (spaces > 0)
        {
            std::cout << " ";
            --spaces;
        }

        // display up to current position
        for (int i {0}; i < position; i++)
        {
            std::cout << user_input.at(i);
        }

        // display current letter
        std::cout << c;

        // display back down to 0 from current position -1
        for (int j{position - 1}; j >= 0; j--)
        {
            // static cast to get rid of narrowing warning
            auto k {static_cast<size_t>(j)};
            std::cout << user_input.at(k);
        }

        // iterate position and create new line
        std::cout << endl;
        position++;
    }
    std::cout << endl;
    return 0;
}