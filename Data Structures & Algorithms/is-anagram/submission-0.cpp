class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size())return 0;
        int a=s.size();
        for(int i=0;i<a;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<a;i++)
        {
            mp[t[i]]--;
        }
        for(auto p : mp) {
            if(p.second != 0) return 0;
        }
        return 1;
    }
};