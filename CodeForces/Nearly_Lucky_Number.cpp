#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string n;
    cin>>n;

    int count = 0;

    for (char digit : n){
        if (digit == '4' || digit == '7')
            count++;
    }

    string countStr = to_string(count);
    bool isCountLucky = true;

    for (char digit : countStr) {
        if (digit != '4' && digit != '7'){
            isCountLucky = false;
            break;
        }
    }

    if (isCountLucky){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
