//check in unordered_set, if element exists, return true else add the element
//return false after the loop ends
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                return true;
            }
            else
                s.insert(nums[i]);
        }
        return false;
    }
};