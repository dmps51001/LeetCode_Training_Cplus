class Solution {
public:
	int romanToInt(string s) {
		int iLen = s.length();
		int iRet = 0;
		for (int i = 0; i<iLen; i++)
		{
			switch (s[i])
			{
			case 'I':
				if ('V' == s[i + 1])
				{
					iRet += 4;
					i++;
				}
				else if ('X' == s[i + 1])
				{
					iRet += 9;
					i++;
				}
				else
					iRet += 1;
				break;
			case 'V':
				iRet += 5;
				break;
			case 'X':
				if ('L' == s[i + 1])
				{
					iRet += 40;
					i++;
				}
				else if ('C' == s[i + 1])
				{
					iRet += 90;
					i++;
				}
				else
					iRet += 10;
				break;
			case 'L':
				iRet += 50;
				break;
			case 'C':
				if ('D' == s[i + 1])
				{
					iRet += 400;
					i++;
				}
				else if ('M' == s[i + 1])
				{
					iRet += 900;
					i++;
				}
				else
					iRet += 100;
				break;
			case 'D':
				iRet += 500;
				break;
			case 'M':
				iRet += 1000;
				break;
			}
		}
		return iRet;
	}
};