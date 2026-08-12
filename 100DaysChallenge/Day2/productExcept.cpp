#include <iostream>
#include <vector>
using namespace std;

//ultra brute force
vector<int> productorArrayExceptSelf(vector<int> arr, int size){
        int product = 1;
        vector<int> nums;

        for(int i=0; i<size; i++){
            product = product * arr[i];
        }

        for(int j=0; j<size; j++){
            int number = product/arr[j];
            nums.push_back(number);
        }

        return nums;


}

// brute force time complexity -> O(n2)

vector <int> productorArrayExceptSelf1(vector<int> arr, int size){
    vector<int> nums;

    for(int i=0; i<size; i++){
        int product =1;
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }
            product *= arr[j];
        }
        nums.push_back(product);
        // product= 1;
    }
    return nums;
}


int peakElement (vector <int> arr, int size ){
    int start =0 , end = size-1;

    while(start<=end){
        int mid = start + (end -start)/2;

        if(arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1]){
            return mid ;
        }

        if(arr[mid]<arr[mid+1]){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }

}


bool isPelindrome (int x){
    if(x<0){
        return false;
    }

    int n =x;
    int reverserNo =0;
    while(n>0){
        int rem = n%10;
        reverserNo = reverserNo * 10 + rem;
        n=n/10;
    }
    if(reverserNo == x){
        return true;
    }else{
        return false;
    }






}


int main(){

    cout << isPelindrome(1121);
}
