class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> vecTemp;
		double dRet;
		int iLen = nums1.size() + nums2.size();
		int iTemp;
		//vecTemp.resize(iLen);

		for (int i = 0; i<nums1.size(); i++)
		{
			vecTemp.push_back(nums1[i]);
		}
		for (int i = 0; i<nums2.size(); i++)
		{
			vecTemp.push_back(nums2[i]);
		}
		for (int i = 0; i<iLen - 1; i++)
		{
			for (int j = i + 1; j<iLen; j++)
			{
				if (vecTemp[i]<vecTemp[j])
				{
					iTemp = vecTemp[i];
					vecTemp[i] = vecTemp[j];
					vecTemp[j] = iTemp;
				}
			}
		}
		if (iLen % 2 == 0)
		{
			dRet = vecTemp[iLen / 2] + vecTemp[iLen / 2 - 1];
			dRet = dRet / 2;
		}
		else
		{
			dRet = vecTemp[iLen / 2];
		}
		return dRet;
	}
};