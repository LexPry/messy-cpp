/*
Substitution cipher (ceasar cipher)

Each letter of the alphabet gets replaced with another letter of the alphabet

Ask the secret message
Encrypt the message using the substitution cipher
display the encrypted message, then decrypt the message back to the original

To encrypt (do not have to do it this way)
Can replace the character at position n in the alphabet with 
character at position n in key

To decrypt (do not have to do it this way)
Replace the character at position n in key with the character
at position n in alphabet
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string true_alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"HhLeKDxzAjWEmabVXwYfgyuIiSPrGTRCMFcZQqNBOopsnJlvdUtk"};
    string secret_message{};
    size_t position{};
    string encrypted_message{};
    string decrypted_message{};

    cout << "Please enter the message you'd like to encrypt: ";
    getline(cin, secret_message);

    for (auto letter : secret_message)
    {
        position = true_alphabet.find(letter);
        if (position != string::npos)
        {
            char new_char{key.at(position)};
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += letter;
        }
    }

    cout << "The encrypted message is: " << encrypted_message << endl;

    for (auto c : encrypted_message)
    {
        position = key.find(c);
        if (position != string::npos)
        {
            char new_char {true_alphabet.at(position)};
            decrypted_message += new_char;
        }
        else
        {
            decrypted_message += c;
        }
    }

    cout << "The decrypted message is: " << decrypted_message << endl;
    return 0;
}