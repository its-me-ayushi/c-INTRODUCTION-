 /* Check Case
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
Input format :Single Character
Output format :
1 or 0 or -1
Input can be any character / Sample Input 1 : / Sample Output 1 : / Sample Input 2 : / Sample Output 2 : / Sample Input 3 : 0  /  Sample Output 3 : -1 */ 


-----------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<cctype>

using namespace std;
int main(){
    char a ;
    cin>>a ;
    if(isupper(a)) {
        cout<<"1" ;
    }
    else if (islower(a) ) {
        cout<<"0" ;
    }
    else {
        cout<<"-1" ;
    }
}
