class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int result = 0;
        for(int i =0; i<size(nums); i++)
        {
            if(nums[i] == 1)
            {
                count = count+1;
                if(result < count)
                {
                    result = count;
                }
            }
            /*else if(nums[i] == 1 && nums[i+1] != 1)
            {
                count = 0;
            }*/
            else
            {
                count = 0;
            }

        }
        if(result>count)
        {
            return result;
        }
        else
        {
            return count;
        }
    }
};