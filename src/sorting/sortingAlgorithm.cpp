#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector <int> &arr){
    int size = arr.size();

    for(int i =0 ; i<size-1; i++){
        int isSwapped = false;
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwapped= true;
            }
        }
        if(!isSwapped){
            return ;
        }
    }
}

void selectionSort (vector <int> &arr){
    int size = arr.size();
    for(int i=0 ; i<size-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]< arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i] , arr[smallestIdx]);
    }
}


void insertionSort (vector<int> &arr){
    for(int i =1; i<arr.size(); i++){
        int currentvalue = arr[i];
        int previous = i-1;

        while (previous >= 0 && arr[previous] > currentvalue){
            arr[previous + 1] = arr[previous];
            previous --; 
        }
        
        arr[previous +1] = currentvalue;
    }
}
int main (){

    vector <int> arr = {5,4,6,8,9,2,3,7,1};
    insertionSort(arr);

    for(int x: arr){
        cout << x << " ";
    }
}