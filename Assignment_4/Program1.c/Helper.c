
#include<stdio.h>
#define ERR_INVALID -1;


#include<stdio.h>
#define ERR_INVALID -1;

int MultFact(int iNo)

{
  int iCnt=0;
  int iMul=1;

  if(iNo < 0)
  {
    return ERR_INVALID;
  }
  for(iCnt = 1;iCnt < iNo ;iCnt++)
  {
   
     if(iNo % iCnt <= 0)
     {
      
      iMul = iMul * iCnt;
     }
  }
  return iMul;
}

