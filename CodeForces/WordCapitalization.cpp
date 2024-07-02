#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int index = 0; 

    if (index >= 0 && index < str.length()) {
        str[index] = toupper(str[index]);
    }

    cout << str << endl;

    return 0;
}
