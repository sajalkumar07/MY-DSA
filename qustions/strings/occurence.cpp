#include <iostream>
#include <string>
#include <cctype> // for tolower

using namespace std;

int countOccurrences(string str, char target) {
    int count = 0;

    // Convert the target character to lowercase
    target = tolower(target);

    // Iterate through each character in the string
    for (char ch : str) {
        // Convert the current character to lowercase for case-insensitive comparison
        char lowercaseCh = tolower(ch);

        // Check if the current character matches the target character
        if (lowercaseCh == target) {
            count++;
        }
    }

    return count;
}

int main() {
    string str;
    char targetCharacter;

    cout << "Enter your string: ";
    cin >> str;

    cout << "Enter the character to count: ";
    cin >> targetCharacter;

    int occurrences = countOccurrences(str, targetCharacter);

    cout << "The character '" << targetCharacter << "' occurs " << occurrences << " times in the string." << endl;

    return 0;
}
