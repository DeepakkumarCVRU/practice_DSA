#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int leanerSearch (int arr[][3] , int row , int col ){

    int maxrow = INT_MAX;

    for(int i=0;i<row; i++){
        int initialsum=0;
        for(int j=0; j<col; j++){
            initialsum += arr[i][j];
        }
        maxrow = min(initialsum, maxrow);
    }
    
    return maxrow;
}


bool searchMatrix(vector <vector<int>> arr , int target){
    int row = arr.size() , col = arr[0].size();

    int start =0, end = row-1;

    while(start <= end){
        int midrow = start + (end -start)/2;

        if(arr[midrow][0] <= target && target <= arr[midrow][col-1]){
            //write binary search

            int st =0 , en = col-1;

            while(st <= en){
                int mid = st +(en-st)/2;

                if(arr[midrow][mid] == target){
                    return true;
                }else if(arr[midrow][mid] >= target){
                    en = mid -1;
                }else{
                    st = mid +1;
                }
            }

            return false;

        }else if(arr[midrow][0] > target ){
            end = midrow -1;
        }else{
            start = midrow +1;
        }
    }
    return false;
}

int main(){
    vector <vector <int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    
cout << searchMatrix (matrix , 34);
}