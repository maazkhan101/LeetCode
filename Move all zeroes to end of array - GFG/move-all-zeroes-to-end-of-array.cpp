//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int>nz;
	    vector<int>z;
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==0)
	        {
	            z.push_back(arr[i]);
	        }
	        else if(arr[i]!=0)
	        {
	            nz.push_back(arr[i]);
	        }
	    }
	    for(int i=0;i<nz.size();i++)
	    {
	        
	        ans.push_back(nz[i]);
	    }
	    
	    
	    for(int i=0;i<z.size();i++)
	    {
	        ans.push_back(z[i]);
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        arr[j]=ans[j];
	    }
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends