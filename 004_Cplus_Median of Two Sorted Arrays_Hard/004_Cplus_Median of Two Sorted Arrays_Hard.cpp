class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		double dRet;

		nums1.insert(nums1.end(), nums2.begin(), nums2.end());

		sort(nums1.begin(), nums1.end());

		int iSize = nums1.size();

		int iTemp1 = iSize / 2;
		if (1 == iSize % 2)
		{
			dRet = nums1.at(iTemp1);
		}
		else
		{
			int iTemp2 = iTemp1 - 1;
			dRet = ((double)(nums1.at(iTemp1) + (double)nums1.at(iTemp2)) / 2);
		}
		return dRet;
	}
};