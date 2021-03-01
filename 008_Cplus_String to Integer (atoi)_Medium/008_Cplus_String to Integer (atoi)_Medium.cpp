class Solution {
public:
	int myAtoi(string s) {
		int iRet;
		const int iMax = 2147483647;
		const int iMin = (-2147483647 - 1);
		long iTemp = atol(s.c_str());
		if (iMax >= iTemp && iTemp >= iMin)
		{
			iRet = atoi(s.c_str());
		}
		else
		{
			if (atof(s.c_str())<iMin)
			{
				iRet = iMin;
			}
			else
			{
				iRet = iMax;
			}

		}
		return iRet;
	}
};