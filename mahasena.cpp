#include <iostream>
using namespace std;

int main() {
	// your code goes here
int n;
	    cin>>n;
	    int count=0;
	    int arr[100];
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        {
	            count=count+1;
	            arr[i]=i;
	        }
	    }
	    cout<<count<<endl;
	    
	     for(int i=0;i<n;i++)
	    {
	        	    cout<<arr[i];

	    }
	return 0;
}
