#include <iostream>
#include <string>
using namespace std;

int main(){
    int total_words;
    cin >> total_words;

    for (int i = 0; i < total_words; i++){
        string s;
        cin >> s;

        int n = s.length();
        char first, last;
        
        if (n <= 10)
            cout << s << endl;
        else{
            first = s[0];
            last = s[n - 1];
            int count = n - 2;

            cout << first << count << last << endl;
        }
    }

    return 0;
}
