#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool ispoweroftwo (int x){

    if(x<1){
        return false;
    }else if(x==1){
        return true;
    }else{

    }
}


int productoftwoelement (vector <int> arr, int size){
    int maxproduct = INT_MIN;

    for(int i=0; i<size; i++){       //[3,4,5,2]
        int product = 1;
        for(int j=i+1; j<size; j++){
            product = (arr[i]-1) * (arr[j]-1);
            maxproduct = max(product , maxproduct);
        }
    }
    return maxproduct;
}

int main (){
    vector<int> arr = {1,5,4,5};
    cout << productoftwoelement(arr, arr.size());
}