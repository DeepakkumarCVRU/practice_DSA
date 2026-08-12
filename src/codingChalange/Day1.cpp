#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Find whether a number is Even or Odd.
// Example: 27 → Odd

string oddorEven (int number){
    int n = number %2; 

    if(number%2 == 0){
        return "even no";
    }else{
        return "odd no";
    }
}


// Find whether a number is Prime or Not Prime.
// Example: 17 → Prime

bool isPrime (int number){
    if(number < 1) return false;

    // if(number %2 == 0 || )
}


// Find the largest of two numbers.
// Example: 15, 9 → 15

int findLarget(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

// Find the largest of three numbers.
// Example: 15, 9 ,1 → 15

int findLarget3(int a, int b, int c){
    if(a >= b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}


// Find whether a number is Positive, Negative, or Zero.
// Example: -5 → Negative

string isPositive(int n){
    if(n==0){
        return "this number is Zero";
    }else if(n>0){
        return "this is positive number";
    }else{
        return "this is negative number";
    }
}


// Find the sum of digits of a number.
// Example: 1234 → 10

int sumOfdigits(int n){
    int totalSum  =0;
    int x =n;
    while(x>0){
        int lastno = x%10;
        totalSum = totalSum + lastno;
        x= x/10;
    }
    return totalSum;
}


// Find the reverse of a number.
// Example: 1234 → 4321

int reverseNo (int n){
    int x = n;
    int reverse = 0;

    while(x>0){
        int No = x%10;
        reverse = reverse *10 + No;
        x = x/10;
    }
    return reverse;

}

// Check whether a number is a Palindrome.
// Example: 121 → Palindrome

bool isPalindrome(int n){
    int x =n;
    int reverseNO=0;
    if(x<0){
        return false;
    }

    while (x>0){
        int lastno = x%10;
        reverseNO = reverseNO *10 + lastno;
        x  = x/10;
    }
    if(reverseNO == n){
        return true;
    }else{
        return false;
    }
    
}

// Find the factorial of a number.
// Example: 5 → 120

int findfactorial (int n){
    int factorial = 1;
    
    for(int i=n; i>0; i--){
        factorial = i* factorial;
    }
    return factorial;
}

// Find the count of digits in a number
// Example: 12345 → 5

int coutdigit (int n){
    int x =n;
    int totaldigit =0;

    while(x>0){
        totaldigit++;
        x= x/10;
    }
    return totaldigit;
}


// Find the largest digit in a number
// Example: 58321 → 8

int largetdigit(int n){
    int x = n;
    int largetdigit =INT_MIN;

    while(x>0){
        int no = x%10;

        largetdigit = max (largetdigit , no);
        x=x/10;
    }

    return largetdigit;
}

// Find the smallest digit in a number
// Example: 58321 → 1

int smallestdigit(int n){
    int x = n;
    int largetdigit =INT_MAX;

    while(x>0){
        int no = x%10;

        largetdigit = min(largetdigit , no);
        x=x/10;
    }

    return largetdigit;
}


// Count the number of even digits
// Example: 123456 → 3

int coutnevenno(int n){
    int x = n;
    int totalevenNo = 0;

    while(x>0){
        int no = x%10;
        if(no%2){
            totalevenNo++;
        }
        x = x/10;
    }

    return totalevenNo;

}


// Count the number of odd digits
// Example: 123456 → 3

int countoddno(int n){
    int x = n;
    int totaloddNo = 0;

    while(x>0){
        int no = x%10;
        if(no%2 !=0){
            totaloddNo++;
        }
        x = x/10;
    }

    return totaloddNo;

}


// Find the sum of even digits
// Example: 123456 → 12
// (2 + 4 + 6 = 12)

int sumofevenno (int n){
    int x =n;
    int totalsum = 0;

    while(x>0){
        int no = x%10;
        if(no%2==0){
            totalsum += no;
        }
        x= x/10;
    }
    return totalsum;
}

// Find the sum of odd digits
// Example: 123456 → 9
// (1 + 3 + 5 = 9)

int sumododd (int n){
    int x =n;
    int totalsum = 0;

    while(x>0){
        int no = x%10;
        if(no%2!=0){
            totalsum += no;
        }
        x= x/10;
    }
    return totalsum;
}


int main (){
    cout << sumododd(1234);
}