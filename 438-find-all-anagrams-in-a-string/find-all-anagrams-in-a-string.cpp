class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char,int> m;

        for(char c : p) {
            m[c]++;
        }

        int count = m.size();           // number of distinct chars to match
        int k = p.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (j < s.size()) {
            
            if (m.find(s[j]) != m.end()) {
                m[s[j]]--;
                if (m[s[j]] == 0) {
                    count--; 
                }
            }

         
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
        
                if (count == 0) {
                    ans.push_back(i);
                }


                if (m.find(s[i]) != m.end()) {
                    if (m[s[i]] == 0) count++;  
                    m[s[i]]++;
                }
                
                i++;
                j++;
            }
        }
        return ans;
    }
};
