class Solution {
public:
    string intToRoman(int num) {
        int iThousand=0;
        int iHundred=0;
        int iTen=0;
        
        string strRet;
        int iCal=0;
        
        iCal=num/1000;
        if(iCal>0)
        {
            iThousand=iCal;
            num-=(iCal*1000);
            
            strRet+=ProcessThousand(iThousand);
        }
        
        iCal=num/100;
        if(iCal>0)
        {
            iHundred=iCal;
            num-=(iCal*100);
            strRet+=Processhundred(iHundred);
        }
        
        iCal=num/10;
        if(iCal>0)
        {
            iTen=iCal;
            num-=(iCal*10);
            strRet+=ProcessTen(iTen);
        }
        
        if(num>0)
        {
            strRet+=ProcessDigit(num);
        }
        
        return strRet;
    }
private:
    string ProcessThousand(int iThousand)
    {
        string strRet;
        switch(iThousand)
        {
            case 1:
                strRet= "M";
                break;
            case 2:
                strRet= "MM";
                break;
            case 3:
                strRet= "MMM";
                break;
        }
        return strRet;
    };
    
    string Processhundred(int iHundred)
    {
        string strRet;
        switch(iHundred)
        {
            case 1:
                strRet= "C";
                break;
            case 2:
                strRet= "CC";
                break;
            case 3:
                strRet= "CCC";
                break;
            case 4:
                strRet= "CD";
                break;
            case 5:
                strRet= "D";
                break;
            case 6:
                strRet= "DC";
                break;
            case 7:
                strRet= "DCC";
                break;
            case 8:
                strRet= "DCCC";
                break;
            case 9:
                strRet= "CM";
                break;
        }
        return strRet;
    };
    
    string ProcessTen(int iTen)
    {
        string strRet;
        switch(iTen)
        {
            case 1:
                strRet= "X";
                break;
            case 2:
                strRet= "XX";
                break;
            case 3:
                strRet= "XXX";
                break;
            case 4:
                strRet= "XL";
                break;
            case 5:
                strRet= "L";
                break;
            case 6:
                strRet= "LX";
                break;
            case 7:
                strRet= "LXX";
                break;
            case 8:
                strRet= "LXXX";
                break;
            case 9:
                strRet= "XC";
                break;
        }
        return strRet;
    };
    
    string ProcessDigit(int iDigit)
    {
        string strRet;
        switch(iDigit)
        {
            case 1:
                strRet= "I";
                break;
            case 2:
                strRet= "II";
                break;
            case 3:
                strRet= "III";
                break;
            case 4:
                strRet= "IV";
                break;
            case 5:
                strRet= "V";
                break;
            case 6:
                strRet= "VI";
                break;
            case 7:
                strRet= "VII";
                break;
            case 8:
                strRet= "VIII";
                break;
            case 9:
                strRet= "IX";
                break;
        }
        return strRet;
    };
};