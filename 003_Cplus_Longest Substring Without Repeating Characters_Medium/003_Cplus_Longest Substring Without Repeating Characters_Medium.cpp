class Solution {
public:
	int lengthOfLongestSubstring(string s)
	{
		int iLen = s.length();
		int iMax_Len = 0;
		string strTempString;
		for (int i = 0; i<iLen; i++)
		{
			strTempString.clear();
			for (int j = 1; j<iLen - i; j++)
			{
				strTempString.push_back(s[i]);
				int iTemp_Len = GetLen(strTempString, s, i + j);
				if (0 == iTemp_Len)
				{
					break;
				}
				if (iTemp_Len>iMax_Len)
				{
					iMax_Len = iTemp_Len;
				}
			}

		}
		return iMax_Len;
	}

	int GetLen(string &strTempString, string &s, int iPos)
	{
		string strTemp;
		int iLen = strTempString.length();
		for (int k = 0; k<iLen; k++)
		{
			if (strTempString[k] == s[iPos])// same
			{
				strTempString.clear();
				return 0;
			}
		}
		strTempString.push_back(s[iPos]);
		iLen++;
		return iLen;
	}
};