#include<iostream>
using namespace std;

int main(){
    string a,b;
    
    cin>>a>>b;
    
    int l = 0;
    int r = a.length()-1;
    
    while(l<r){
        
        char ch = a[l];
        a[l] = a[r];
        a[r] = ch;
        l++;
        r--;
    }
    
    if(a==b)
        cout<<"YES";
    else
        cout<<"NO";
}