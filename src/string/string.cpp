#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void character (){
    char str[] = "deepak";

    // cout << str[0];

    // input or output for character array

    char str1[100];
    // cin>> str1;
    //if you trying to get input with cin then after space all word are deleted only consider first word like deepak kumar only deepak. kumar will deleted;
    
    // so awoid it take input with cin.geline(str , length , delimiter) 
                    // str -> name of character array (str , str1)
                    // length -> no of character 
                    // delimiter ->  which character is stop for your word that word or sing deside when after we have to deleted after the word or sign 

        cin.getline(str1, 100);
        
    
    cout << str1;
}

bool isAlfaNumeric (char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}

bool isStringpalindrome(string s){
    int start =0 , end = s.length()-1;

    while(start <= end){
        if(!isAlfaNumeric(s[start])){
            start++; 
            continue;
        }
        if(!isAlfaNumeric(s[end])) {
            end --;
            continue;
        }

        if(tolower(s[start]) !=tolower(s[end])){
            return false;
        }

        start ++;
        end --;
    }
    return true;
}


string removeOccurrences(string s , string part){

    
}






int main (){

    string str ="racecar";
    cout << isStringpalindrome(str);
    
}