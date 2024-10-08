#include<iostream>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){

    int n;
    cin>>n;

    //to check even and odd
    if(n & 1) cout<<"n is odd";
    else cout<<"n is even";
    cout<<'\n';

    //multiply or divide number with 2

    //left shift for multiply
    int c = n<<1;
    cout<<c<<'\n';  

    //right shift for divide
    int d = n>>1;
    cout<<d<<'\n';

    //used to swap c and d faster
    c^=d;
    cout<< c << d <<'\n';

    int f[5] = {0};
    char e[3] = {0};

    // iota  is used to fill range with sequentially increasing values
    // changes a to {10, 11, 12, 13, 14}
    iota(f, f+5, 10); 
    iota(e, e+3, 'a'); // {'a', 'b', 'c'}





    return 0;
}