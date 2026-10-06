class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for(int num:nums){
            counts[num]++;
        }
        
        using ElementFreq=pair<int, int>;
        priority_queue<
            ElementFreq,
            vector<ElementFreq>,
            greater<ElementFreq>
        >min_heap;

        for(const auto& [num, count]:counts){
            min_heap.push({count, num});
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }

        vector<int> result;
        result.reserve(k);
        while(!min_heap.empty()){
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;
    }
};
