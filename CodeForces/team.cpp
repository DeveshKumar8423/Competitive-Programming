#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 0;

    for(int i=1 ; i<=n ; i++){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b+c >= 2)
            count++;

    }

    cout<<count;

    return 0;
}