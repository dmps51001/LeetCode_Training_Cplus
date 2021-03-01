class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> vecTemp;
		double dRet;

		vecTemp = nums1;
		//vecTemp+=nums2;

		vecTemp.insert(vecTemp.end(), nums2.begin(), nums2.end());


		sort(vecTemp.begin(), vecTemp.end());

		int iSize = vecTemp.size();

		if (1 == iSize % 2)
		{
			dRet = vecTemp.at(iSize / 2);
		}
		else
		{
			int iTemp1 = iSize / 2;
			int iTemp2 = (iSize / 2) - 1;
			dRet = ((double)(vecTemp.at(iTemp1) + (double)vecTemp.at(iTemp2)) / 2);
		}
		return dRet;
	}
};