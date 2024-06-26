#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    set<char> distinct_chars;
    
    for(char c : s) {
        distinct_chars.insert(c);
    }
    
    int distinct_count = distinct_chars.size();
    
    if(distinct_count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
