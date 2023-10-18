//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int r,con=0;
    	for(int i=0;i<n;i++)
    	{
    	    con=0;
    	    int sum=a[i];
    	     int z=sum;
    	    while(sum>0)
    	    {
    	        r=sum%10;
    	        con=(con*10)+r;
    	        sum=sum/10;
    	        
    	    }
    	    if(con!=z)
    	       return 0;
    	   
    	   
    	}
    	return 1;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
