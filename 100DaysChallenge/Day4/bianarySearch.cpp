#include <iostream>
#include <vector>

using namespace std;

// 81. Search in Rotated Sorted Array II

bool RotatedArray2 (vector <int> arr, int size, int target){
    int start = 0 , end = size-1;

    while (start <=end){
        if(arr[start] == arr[end] ){
            start ++;
            end --;
            continue;
        }
        int mid = start +(end-start)/2;

        if(arr[start] == target) return true;
        if(arr[end] == target) return true;

        if(arr[mid] == target){
            return true;
        }
        if(arr[mid]>target){
            end = mid -1;
        }else{
            start = mid +1;
        }

    }
    return false;
    
}


int main (){

    vector<int> arr = {1};
    cout << RotatedArray2(arr, arr.size(), 1);
}