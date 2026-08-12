#include <iostream>
#include <vector>
using namespace std;

// brute force  time complexity -> O(n2)
int finMejorityElement (vector<int> arr, int size){
    for(int i=0 ; i<size; i++){
        int mejority =0;
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                mejority ++;
            }
        }
        if(mejority >= size/2){
            return arr[i];
        }
    }
}


//better aproach ->  O(nlogn)



int main(){
    vector<int> arr ={3,3,1,1,1};
    cout<< finMejorityElement(arr, arr.size());
}