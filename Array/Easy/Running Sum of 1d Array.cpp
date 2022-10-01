class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            ans[i] = ans[i-1] + nums[i];
        return ans;
    }
};

// TC= O(N)   SC= O(N)
//We will create a duplicate array which contains the running sum of the elements 0 to i 
//of our original array (nums) for each index i of our prefix sum array (ans)

//Duplicate Array name = ans

//we should start our iteration at i = 1 and copy over the first element from nums to ans. 
//Then we just iterate through nums and add each element (nums[i]) to the previous running total (ans[i-1]) to create the new running total (ans[i]).
//i.e    ans[i] = ans[i-1]+nums[i]
