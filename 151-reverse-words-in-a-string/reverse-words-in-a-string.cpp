class Solution {
public:
    void print(int i,string &s,int n,string str,vector<string> &ans){
         if(i==n){
           if(!str.empty()) ans.push_back(str);
            return;
        }
        if(s[i]==' '){
            if(!str.empty()) ans.push_back(str);
            print(i+1,s,n,"",ans);
            return;
        }
        str+=s[i];
        print(i+1,s,n,str,ans);
    }
    string reverseWords(string s) {
        vector<string> ans;
        int n=s.length();
        
        print(0,s,n,"",ans);
        reverse(ans.begin(),ans.end());
        string op;
        for(int i=0;i<ans.size();i++){
            op+=ans[i];
            if(i!=ans.size()-1){
             op+=' ';
            }
        }
        return op;
    }
};