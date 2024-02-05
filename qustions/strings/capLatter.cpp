#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

string capitalizeFirstLetterOfEachWord(const string& input) {
    stringstream ss(input);
    string word;
    string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += " "; 
        }
        word[0] = toupper(word[0]); 
        result += word;
    }

    return result;
}

int main() {

    cout << "Enter a sentence: ";
    string input;
    getline(cin, input);
 
    string capitalized = capitalizeFirstLetterOfEachWord(input);

  
    cout << "Capitalized: " << capitalized << endl;

    return 0;
}
