#include "../lib/basic.h"

bool containsDuplicate(vector<int>& nums, int k) {
    unordered_map<int, vector<int>> m;
    bool ret = false;
    for(int i=0; i<nums.size(); i++){
        m[nums[i]].push_back(i);
        if(m[nums[i]].size() > 1){
            vector<int> arr = m[nums[i]];
            for(int j=0; j<arr.size()-1;j++){
                for(int l=j+1; l<arr.size(); l++){
                    if(abs(arr[j]-arr[l]) <= k)
                        return true;
                }
            }
        }
    }
    return ret;
}
/* another solution
   https://leetcode.com/problems/contains-duplicate-ii/discuss/61390
 */

/*
bool containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_map<int,int> nmap;
    for (int i = 0; i <nums.size();i++)
    {
        if (nmap.count(nums[i]) == 0)
            nmap[nums[i]] = i;
        else if (i - nmap[nums[i]] <=k)
            return true;
        else
            nmap[nums[i]] = i;
    }
    return false;
}

*/
