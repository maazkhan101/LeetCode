//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        vector<int>a;
        stack<int>ans;
        while(!s.empty())
        {
            a.push_back(s.top());
            s.pop();
            
        }
        int size=a.size();
        if(size%2!=0)
        {
            int n=(size+1)/2;
            a.erase(a.begin()+n-1);
        }
        else if(size%2==0)
        {
            int m=(size)/2;
            a.erase(a.begin()+m);
        }
        
        for(int i=0;i<a.size();i++)
        {
            ans.push(a[i]);
        }
        
        
        while(!ans.empty())
        {
            s.push(ans.top());
            ans.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends