#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    float a,b;
    a = 1.000000089;
    b = 1.000000879;

    if(abs(a-b) > 1e-9){
        // a and b are equal
        cout<<"A and B are equal"<<'\n';
    }

    return 0;
}