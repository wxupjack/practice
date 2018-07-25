class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
	    vector<int> res;
	    map<int, int> table;
        vector<int>::iterator iter;
	    for (iter=nums.begin();iter!=nums.end();iter++) {
		    table[*iter]++;
	    }

	    for (int i = 0; i < k; i++) {
		    int maxCount = 0, maxIndex = 0;
		    map<int, int>::iterator it;
		    for (it = table.begin(); it != table.end(); it++) {
			    if (it->second > maxCount) {
				    maxCount = it->second;
				    maxIndex = it->first;
			    }
	    	}
		    res.push_back(maxIndex);
		    table.erase(maxIndex);
	    }
	    return res;
    }
};
