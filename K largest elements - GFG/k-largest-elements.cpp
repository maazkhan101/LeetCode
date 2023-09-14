//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>ans;
        /*for(int i=0;i<n;i++)
        {
            int temp;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];    
                    arr[i]=arr[j];
                    arr[j]=temp;

                }
            }
        }*/
         sort(arr, arr + n, greater<int>());
        for(int i=0;i<k;i++)
        {
        
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends