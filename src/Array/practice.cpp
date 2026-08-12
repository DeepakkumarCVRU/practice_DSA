#include <iostream>
#include <vector>
using namespace std;

// brute froce tc -> O(n)
int singleElement(vector <int> arr){
    if(arr[0] != arr[1]){
        return arr[0];
    }
    if(arr[arr.size()-1] != arr[arr.size()-2]){
        return arr[arr.size()-1];
    }

    for(int i =1; i<arr.size()-1; i++){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
            return arr[i];
        }
    }
}


int singleElement1(vector <int> arr){
    int start =0 , end =arr.size();
    if(arr.size() == 1) return arr[0];

    while(start <= end){
        int mid = start + (end -start) /2;
        if(arr[0] != arr[1]) return arr[0];
        if(arr[end-1] != arr[end-2]) return arr[end-1];


        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        if(mid %2 ==0){ // even case
            if(arr[mid] == arr[mid -1]){
                start = mid +1;
            }else {
                end = mid -1;
            }
        }else{
            if(arr[mid] == arr[mid-1]){
                end = mid -1;
            }else{
                start = mid +1;
            }
        }   
    }
}


int main(){
    vector <int> arr = {1,1,2,2,3,4,4,5,5};
    cout << singleElement1(arr);
}