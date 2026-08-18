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


vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size(), 1);
        for(int i=0; i<nums.size(); i++){
            int product =1;
            for(int j=0; j<nums.size(); j++){
                if(i==j){
                    continue;
                }
                    product = product* nums[j];
            }
            arr[i] = product;
        }
        return arr;
    }

// time complexity - o(n) , space complexity - o(n)
void productacceptself(vector <int> arr){
    int size = arr.size();

    vector <int> prefix (arr.size() , 1);
    vector <int> suffix (arr.size() , 1);
    vector <int> answer (arr.size() , 1);

    for(int i=1; i<size; i++){
        prefix[i] = prefix[i-1] * arr[i-1];
    }


    for(int j=size-2 ; j>=0; j--){
        suffix[j] = suffix[j+1] * arr[j+1];
    }

    for(int k=0; k<size; k++){
        answer[k] = prefix[k] * suffix[k];
    }

    for(int x: prefix){
        cout << x << " ";
    }
    cout << "\n";

      for(int x: suffix){
        cout << x << " ";
    }

      cout << "\n";

      for(int x: answer){
        cout << x << " ";
    }


}

// time complexity - o(n) , space complexity - o(1)
vector <int>   productacceptself1(vector<int> arr){
    int size = arr.size();
    vector <int> ans (size , 1);

    // prefixx
    int prefix =1;
    for(int i =1; i<size; i++){
        prefix = prefix * arr[i-1];
        ans[i] = prefix; 
    }


    //suffix
    int suffix = 1; 
    for(int i = size -2; i>= 0 ; i--){
        suffix = suffix * arr[i+1];
        ans [i] = ans[i] * suffix;   
    }

     for(int x : ans){
        cout << x << " ";
    }

    return ans;

}





int main(){
    vector <int> arr = {1,2,3,4};
    vector <int> arr1=  productacceptself1(arr);

    // for(int x : arr1){
    //     cout << x << " ";
    // }
   
}