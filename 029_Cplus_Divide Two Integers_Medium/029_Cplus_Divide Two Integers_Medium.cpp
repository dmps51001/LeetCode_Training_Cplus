class Solution {
public:
	int divide(int dividend, int divisor) {
		int iRet = 0;
		int iNegative = 1;

		if (dividend<0)
		{
			iNegative = -iNegative;
		}


		if (divisor<0)
		{
			iNegative = -iNegative;
		}

		if (iNegative>0)
		{
			if (dividend<0 && dividend <= -pow(2, 31))
			{
				dividend++;
			}

			if (divisor<0 && divisor == -pow(2, 31))
			{
				divisor++;
			}
		}

		iRet = dividend / divisor;

		return iRet;
	}
};