class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>result;
        sort(arr.begin(),arr.end());

        int diff=INT_MAX;
        unordered_map<int,int>m;

        for(int i=0;i<arr.size();i++)
        {
            diff=abs(arr[i]-x);
            m[i]=diff;
        }

        vector<pair<int,int>>v(begin(m),end(m));

        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second || (a.second == b.second && a.first < b.first);
        });

        for(int i=0;i<k;i++)
        {
            result.push_back(arr[v[i].first]);
        }

         sort(result.begin(), result.end());

        return result;

    }
};