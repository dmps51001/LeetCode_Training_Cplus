class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int iSize=nums.size();
        int iTemp;
        vector<int> vReturn;
        for(int i=0;i<iSize;i++)
        {
            for(int j=i+1;j<iSize;j++)
            {
                iTemp=nums[i]+nums[j];
                if(iTemp==target)
                {
                    vReturn.push_back(i);
                    vReturn.push_back(j);
                    return vReturn;
                }
            }
        }
        return vReturn;
    }
};