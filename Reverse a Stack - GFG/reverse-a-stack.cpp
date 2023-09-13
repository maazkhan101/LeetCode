//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &St){
     
     stack<int>ans;
     stack<int>ans2;
     
     while(!St.empty())
     {
         ans.push(St.top());
         St.pop();
         
     }
     
      while(!ans.empty())
     {
         ans2.push(ans.top());
         ans.pop();
         
     }
     
     
         while(!ans2.empty())
     {
         St.push(ans2.top());
         ans2.pop();
         
     }
     
     
     
   
     
     
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends