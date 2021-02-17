class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string strRet="";
        
        int iSize=strs.size();
        
        if(0==iSize)
        {
            return strRet;
        }
        
        // Compare length
        int iShortestLength=200;
        for(int i=0;i<iSize;i++)
        {
            if(iShortestLength>strs.at(i).length())
            {
                iShortestLength=strs.at(i).length();
            }
        }
        
        //
        string strStart=strs.at(0);
        for(int i=1;i<=iShortestLength;i++)
        {
            // Compare context
            
            vector<string>::iterator it;
            it=strs.begin();
            while(it!=strs.end())
            {
                if(it->compare(0,i,strStart,0,i)!=0)
                {
                    return strRet;
                }              
                it++;
            }
            strRet=strStart.substr(0,i);
        }
        
        return strRet;
    }
};