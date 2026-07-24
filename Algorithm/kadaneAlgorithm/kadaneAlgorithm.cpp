#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int maxSubarraySum (vector<int> arr, int size){
   
    int maxSum = INT_MIN, currentSum = 0;

    for(int i=0; i<size; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum<0){
            currentSum = 0;
        }
    }

    return maxSum;
   
}


int main (){
    vector<int> arr = {1,-2,-3,4};

    cout << maxSubarraySum(arr, arr.size());    
}