#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int i, j,num; // variable declaration
    cin>> num;  //take user input
    // for loop for print the degit  
    for(i=1;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    // for loop for print the digit pattern in revers  
    for(i=num-1;i>=1;i--)
    {
        for(j=i;j<=num;j++)
        {
            cout << j;
        }
     cout << endl;
    }
    return 0; 
}