/* Number Pattern 1.  { kabadi wali hu mai ayushi adya }
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
Code Pair
C++ (g++ 5.4)
1 */ 
#include<iostream>
using namespace std;


int main(){
int n;
cin >> n;
    
int i=1;
    
while(i<=n){
    int j=1;
    int k=i;
while(j<=i){
    cout << k;
    k++;
    j++;
    }
    cout << endl;
    i++;
 }
  
}




