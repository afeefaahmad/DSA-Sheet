class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int front=0 , rear=0;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                nums[rear]=nums[i];
                rear++;
            }
        }
        while(rear<nums.size()) {
            nums[rear]=0;
            rear++;
        }
                    
    }
};
