class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] != nums[i+1]) 
            {
                nums[j] = nums[i+1];
                j++;
            }
        }
        return j;
    }
};

//we will check num with it's next num
//Start from 2nd num
//we'll check if   next_num != current_num  add next number 
//then increment index
