#include<iostream>
using namespace std;
#include<array>

int main(){
    
    int loc;
    cin>>loc;
    int steps = 0;
    int arr[5] = {1,2,3,4,5};

    int max_index = 0;
    int max = arr[0]; 
    

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    while(loc > 0){
        if(loc >= max){
            loc = loc - max;
            steps+=1;
        }
        else{
            loc = loc-arr[max_index-1];
            steps+=1;
        }
    }
    
    cout<<steps<<endl;
    
    return 0;
}