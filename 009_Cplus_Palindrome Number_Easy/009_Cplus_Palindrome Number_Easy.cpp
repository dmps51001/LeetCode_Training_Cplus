class Solution {
public:
	bool isPalindrome(int x) {
		int iTemp = x;
		vector<int> vecTemp;
		if (x<0)
		{
			return false;
		}
		while (iTemp != 0)
		{
			vecTemp.push_back(iTemp % 10);
			iTemp = iTemp / 10;
		}
		int iTotal = vecTemp.size();
		for (int i = 0; i<iTotal; i++)
		{
			if (i == iTotal - i - 1)
			{
				break;
			}
			if (vecTemp[i] != vecTemp[iTotal - i - 1])
			{
				return false;
			}
		}
		return true;
	}
};