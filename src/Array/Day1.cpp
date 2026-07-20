#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// Problem

// Given an integer array nums, return the largest element present in the array

int largetElement (vector <int> arr, int size){
    int element = INT_MIN;
    for(int i=0 ; i<size ; i++){
        if(arr[i] > element){
            element = arr[i];
        }
    }
    return element;
}


// Question 2: Second Largest Element


int main (){
    vector <int> arr = {1,2,3,4,5,4,3,2};
    int size = arr.size();

    cout << largetElement(arr, size);
}