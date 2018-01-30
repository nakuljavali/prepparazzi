#include "../lib/basic.h"

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    map<long long,int> M;
    int l=0;
    for (int r=0;r<nums.size();r++) {
        if (r-l>k && M[nums[l]]==l)
            M.erase(nums[l++]);
        auto it=M.lower_bound(nums[r]-t);
        if (it!=M.end() && abs(it->first-nums[r])<=t)
            return true;
        M[nums[r]]=r;
    }
    return false;
}
