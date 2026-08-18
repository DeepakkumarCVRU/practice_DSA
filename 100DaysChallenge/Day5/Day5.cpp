#include <iostream>
using namespace std;

bool ispowerof2(int n){
    if(n<1){
        return false;
    }else if(n==1){
        return true;
    }else{
        while(n%2==0){
            n = n/2;
        }
        
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
}


bool isPowerOfThree(int n){
    
}
int main(){
    cout << "this is power of two or not -> " << ispowerof2(15);
}