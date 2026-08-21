
#include <iostream>
#include <vector>
using namespace std ;


int FirstOccurrence(vector<int> arr , int target){
    int start =0 , end = arr.size()-1;

    while(start <= end){
        int mid = start + (end -start) /2;

        if(arr[mid] == target){
            if(arr[mid] != arr[mid-1]){
                return mid;
            }else{
                end = mid -1;
            }
        }else if(arr[mid] <= target){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}


int lastOccurrence (vector <int> arr , int target){
    int start =0 , end = arr.size()-1;

    while(start <= end){
        int mid = start + (end - start) /2;

        if(arr[mid]==target){
            if(arr[mid]!=arr[mid+1]){
                return mid;
            }
            start = mid +1;
        }else if(arr[mid] <= target){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}

vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();  
        int start = 0 , end = size-1;
        vector <int> ans(2,-1);

        while(start <= end){
            int mid = start + (end -start)/2;

            if(nums[mid] == target){
                if(nums[mid] != nums[mid-1]){
                    ans[0] = mid;
                }
                end = mid -1;
            }else if(nums[mid] <= target){
                start = mid +1;
            }else{
                end = mid -1;
            }
        } 
        start = 0 , end = nums.size()-1;

        while(start <= end){
            int mid = start + (end -start)/2;

            if(nums[mid] == target){
                if(nums[mid] != nums[mid+1]){
                    ans[1] = mid;
                }
                start = mid +1;
            }else if(nums[mid] <= target){
                start = mid +1;
            }else{
                end = mid -1;
            }
        }
        return ans;
    }

int main (){
    vector <int> arr = {1, 1, 2, 2, 2, 4, 5, 5};
    vector<int> x =  searchRange(arr, 2);
    cout << x[0] << " " << x[1];
}