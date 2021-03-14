class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vecTemp;
        int iTotal=s.length();
        int iRound=2*numRows-2;
        int iRow=0;
        
        if(numRows>1)
        {
            for(int i=0;i<numRows;i++)
            {
                string strTemp;
                vecTemp.push_back(std::move(strTemp));
            }        
            for(int i=0;i<iTotal;i++)
            {            
                if(i%iRound<numRows)
                {
                    iRow=i%iRound;
                }
                else
                {
                    iRow=iRound-i%iRound;
                }
                vecTemp.at(iRow)+=s.at(i);
            }
        }
        else
        {
            return s;
        }
        
        string strRet;
        for(int i=0;i<numRows;i++)
        {
            strRet+=vecTemp.at(i);
        }
        return strRet;
    }    
};