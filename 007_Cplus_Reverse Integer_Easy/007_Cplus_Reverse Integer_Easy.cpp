class Solution {
public:
	int reverse(int x) {
		int iTemp = x;
		double dRet = 0;
		int iRet = 0;
		if (x<0)
		{
			if (x <= -pow(2, 31))
			{
				return 0;
			}
			iTemp = -iTemp;
		}
		else if (x >= pow(2, 31) - 1)
		{
			return 0;
		}
		while (iTemp != 0)
		{
			dRet = iTemp % 10 + dRet * 10;
			iTemp = iTemp / 10;
		}
		if (x<0)
		{
			if (dRet >= pow(2, 31))
			{
				return 0;
			}
			dRet = -dRet;
		}
		else
		{
			if (dRet >= pow(2, 31) - 1)
			{
				return 0;
			}
		}
		iRet = dRet;
		return iRet;
	}
};