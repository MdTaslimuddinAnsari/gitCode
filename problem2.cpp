#include <iostream> 
using namespace std;

// function for the index of the string 
int printIndex(string str, string s) 
{ 
    string sub = " ";
   sub=s;
    bool flag = false;
    int arr[100],k;
	for (int i = 0; i < str.length(); i++)
	{
	     
	    if (str.substr(i,s.length()) == s)
		{ 
		    
		    int ind=0;
		    cout<<"substring "<<sub<<" persent at index "<<i<<endl;
		    
		}
	
	} 
} 

//function to find  all perumtaion of the give string
int permute(string a,int l,int r,string first_str)  
{  
    string sub_str = " ";
    if (l == r)     
    {    
        sub_str=a;  
        int index=printIndex(first_str,sub_str);
    }
    else
    {  
        for (int i = l; i <= r; i++)  
        {  
  
            swap(a[l], a[i]);  
  
            permute(a,l+1,r,first_str);  
  
            swap(a[l], a[i]);  
        }  
    }  
}  

// main function
int main() 
{ 
    string str1; 
    string str2;
	cin >> str1;
	cin >>str2;
	int n = str2.size(); // find the length of string
    permute(str2,0, n-1,str1);
	return 0;
}