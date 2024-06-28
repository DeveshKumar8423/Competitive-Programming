#include <iostream>
#include <cctype>
using namespace std;

void toUpperCase(string &str) {
    for (char &ch : str) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
    }
}

void toLowerCase(string &str) {
    for (char &ch : str) {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
    }
}

int main() {
    int upper = 0;
    int lower = 0;
    
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        int int_s = int(s[i]);
        
        if (int_s >= 65 && int_s <= 90) // A to Z
            upper++;
            
        if (int_s >= 97 && int_s <= 122) // a to z
            lower++;
    }
    
    if (upper <= lower) {
        toLowerCase(s);
    } else if (upper > lower) {
        toUpperCase(s);
    }
    
    cout << s << endl;

    return 0;
}
