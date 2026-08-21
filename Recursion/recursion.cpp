#include <iostream>
using namespace std;

void printNumber (int n){
    if(n==1){
        cout << 1;
        return;
    }
    cout << n << " ";
    printNumber(n-1); 
}



int factorial(int n ){
   int fact =1;
   if(n==0) {
    return 1;
   }
    return fact = n * factorial(n-1);
}

int sum (int n){
    int totalsum = 0;
    if(n==1){
        return 1 ;
    }

    return totalsum = n + sum(n-1);
}




int main(){
    int x = sum(5);
    cout << x << " ";
    return 0 ;
}