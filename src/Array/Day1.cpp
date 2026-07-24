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


// Question 3: Check if Array is Sorted
// Given an array nums, determine whether it is sorted in non-decreasing order.

bool isArraySorted (vector <int> arr, int size ){
    int num = INT_MIN; 

    for(int i=0 ; i<size ; i++){
        if(arr[i] > num){
            num = arr[i];
        }else{
            return false;
        }
    }
    return true;
}


// Problem

// Move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

// Todo
vector <int> moveZero (vector <int> arr, int size){
            // 0, 1, 0, 3, 12
            int start =0, end = size-1;


            while(start<end){
                if(arr[start] ==0){
                    
                }
            }

}


// Problem

// Given an array nums and an integer target, return the indices of the two numbers whose sum equals the target.
vector<int> TwoSum (vector <int> arr, int size, int target){
    // time complexity -> O(n2)
    vector <int> num;
    for(int i=0 ; i<size ;i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == target){
                num.push_back(i);
                num.push_back(j);
                return num;
            }
        }
    }
}   

// todo
int maxSumarraySum (vector<int> arr, int size ){
    int currentsum = INT_MIN, maxsum =INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] + currentsum){

        }
    }
}

//reverse a interger array , Two pointer aproach
void reverseArray (vector<int> &arr, int size ){
    int start =0 , end = size-1;

    while (start<end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
    
}
int main (){
    vector <int> arr = {1,2,3,4,5};
    int size = arr.size();

    reverseArray(arr, size );
    
    for(int x:arr){
        cout << x << " ";
    }
}