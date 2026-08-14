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


int main (){

    string str ="deepak kumar";
    cout << str;
}