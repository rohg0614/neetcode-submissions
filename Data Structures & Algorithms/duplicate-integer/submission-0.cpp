class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique; 
        int n=nums.size();
        for(int i=0; i<n; i++){
            int target=nums[i];
            auto [it, inserted] = unique.insert(target);
            if(!inserted){
                return true;
            }
        }
        return false;
    }
};