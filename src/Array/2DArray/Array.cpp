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


int main(){
    int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9} , {10,11,12}};
    int row =4, col = 3;

    cout<<  "this is -> " << leanerSearch(arr , row , col);

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<col; j++){
    //         cin >> arr[i][j];
    //     }
        
    // }

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<col; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    
}