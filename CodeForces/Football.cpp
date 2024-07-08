#include<iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    
    int count = 1; 

    for (int i = 0; i < a.length() - 1; i++){
        if (a[i] == a[i + 1])
            count += 1;
        else
            count = 1;
            
        if (count >= 7){
            cout << "YES";
            return 0; 
        }
    }
    
    cout << "NO"; 
    return 0;
}