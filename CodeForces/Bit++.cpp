#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0; 

    for (int i = 0; i < n; ++i){
        string statement;
        cin >> statement;

        if (statement[1] == '+') 
            ++x;
        else if (statement[1] == '-')
            --x;
    }

    cout << x << endl;

    return 0;
}
