#include<iostream>
#include<queue>
using namespace std;

//writing own custom comparator
class Compare{
public:
    bool operator()(int a , int b){
        return a > b;
    }
};

int main(){

    int arr[] = {1,2,3,4,4,5};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> heap; //max heap 

    for(int x: arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;

    //greater<int> is a inbulid comparator which reversed the comparison
    priority_queue<int , vector<int> , Compare > heapp; //min heap 

    for(int x: arr){
        heapp.push(x);
    }

    while(!heapp.empty()){
        cout<<heapp.top()<<" ";
        heapp.pop();
    }

    return 0;
}