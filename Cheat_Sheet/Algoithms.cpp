#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a;

    a.push_back(1);
    a.push_back(4);
    a.push_back(2);
    a.push_back(9);

    sort(a.begin() , a.end()); //for sorting
    auto min = min_element(a.begin() , a.end()); //for minimum element
    auto minmax = minmax_element(a.begin() , a.end());

    
    int mini = *min;
    cout<<mini<<'\n';

    int miniii = *minmax.first;
    cout<<miniii<<'\n';

    int maxiii = *minmax.second;
    cout<<maxiii<<'\n';


    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " "; 
    }
    cout << endl; 


    return 0;
}