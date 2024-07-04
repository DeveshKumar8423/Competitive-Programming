#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main(){
    string string1, string2;
    cin >> string1 >> string2;

    for (char &c : string1) {
        c = tolower(c);
    }
    for (char &c : string2) {
        c = tolower(c);
    }

    if (string1 < string2)
        cout << "-1" << endl;
    else if (string1 > string2)
        cout << "1" << endl;
    else 
        cout << "0" << endl;
    
    return 0;
}
