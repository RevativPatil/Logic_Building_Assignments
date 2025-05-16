#include<stdio.h>
#define ERR_INVALID -1;

int FactRev(int iNo) 
{
int iCnt=0;

if(iNo<0)
{
  return ERR_INVALID;
}
  for(iCnt = iNo - 1;iCnt >=1;iCnt--)
{
   if(iNo % iCnt == 0)
{
     printf("%d",iCnt);
     
}

    
}
  return iCnt;
 }


