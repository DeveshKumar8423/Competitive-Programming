#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int a = 123456789;
    long long b = a*a;
      cout << b << "\n"; //-1757895751

    /*
    Even though the variable b is of type long long, both numbers in 
    the expression a*a are of type int, and the result is also of type int.
    Because of this, the variable b will have a wrong result.
    the problem can be solved by changing the type of a to long
    long by changing the expression to(long long)a*a.
    */

   long long c = (long long)a*a;
   cout<<c;

   return 0;

}