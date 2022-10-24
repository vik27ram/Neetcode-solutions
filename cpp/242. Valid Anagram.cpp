//increment the letter count while check first string and decrement for the second
//if any letter is left with a count>0 return false
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,int> smap;
        for(int i=0;i<s.length();i++){
            smap[s[i]]++;
            smap[t[i]]--;
        }
        for(auto x:smap){
            if(x.second)
                return false;
        }
        return true;
    }
};