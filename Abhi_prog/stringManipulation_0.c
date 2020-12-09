/*
Conditions:
1. Do not use any inbuilt function
2. operation is case insensitive

test 1:
input *MainString = YOGESH
inout *SearchStr = gesh
replace = Abhi
o/p = YOABHI

test 2:
ip = ABHI shailendra Abhi OzaAbhi yoAbhi
search = Abhi
Replace = gawali
o/p = gawali shailendra gawali ozagawalu yogawali
*/

#include<stdio.h>

//#define INP1
#define INP2

int strLength(char*);
int strCmp(char*, char*, int);


int main()
{
    #ifdef INP1
    char str[] = "YOGESH";
    char srStr[] = "gesh";
    char rpStr[] = "Abhi";
    #endif // INP1
    #ifdef INP2
    char str[] = "ABHI shailendra Abhi OzaAbhi yoAbhi";
    char srStr[] = "Abhi";
    char rpStr[] = "gawali";
    #endif // INP1
    int lenStr = strLength(str);
    int lenSrStr = strLength(srStr);
    int msi=0, ssi=0, rsi=0, i;

    char *orgStr = (char*)malloc((lenStr+1)*sizeof(char));
    memcpy(orgStr, str, lenStr+1);

    printf("==============================================\n");
    printf("Reference string: %s\n", str);
    printf("Search string   : %s\n", srStr);
    printf("Replace string  : %s\n", rpStr);
    printf("==============================================\n");
    while(str[msi]!='\0')
    {
        ssi=rsi=0;
        if((str[msi] == srStr[ssi]) | (str[msi] == (srStr[ssi]^0x20)))
        {
            if(strCmp((str+msi), (srStr+ssi), lenSrStr))
            {
                //printf("Match found at: %d\nstr[%d] = %c\tsrStr[%d] = %c\n", msi, msi, str[msi], ssi, srStr[ssi]);
                while(rpStr[rsi]!='\0')
                {
                    str[msi]=rpStr[rsi];
                    rsi++;
                    msi++;
                }
            }
            else
                msi++;
        }
        else
            msi++;
    }
    printf("==============================================\n");
    printf("Input string: %s\n", orgStr);
    printf("Final string: %s\n", str);
    printf("==============================================\n");

    return 0;
}

int strCmp(char* str, char *srStr, int lenSrStr)
{
	int i=0, count=0;
	for(i=0; i<lenSrStr; i++)
	{
 		if((str[i] == srStr[i]) | (str[i] == (srStr[i]^0x20)))
		{
		    //printf("(%c-%c)\n",str[i], srStr[i]);
		    count++;
		}
        else
            break;
	}
	if(lenSrStr==count)
		return 1;
	else
		return 0;
}

int strLength(char *str)
{
    int l=0;
	while(str[l] != '\0')
		l++;
	return l;
}

/*
==============================================
Reference string: YOGESH
Search string   : gesh
Replace string  : Abhi
==============================================
First letter match found at: 2
str[2] = G      srStr[0] = g
==============================================
Final string: YOAbhi
==============================================



*/
