class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0,j=0;
        int ans=1;
        set<char> st;
        if(s.empty())
        {
            return 0;
        }
        while(j<n)
        {
            if(st.find(s[j]) != st.end())
            {
                st.erase(s[i]);
                i++;
            }
            else{
                st.insert(s[j]);
                ans=max(ans,j-i+1);
                j++;

            }
        }
        return ans;
    }
};