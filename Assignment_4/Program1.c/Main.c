//write a program which accpet number from user and display its multiplication of factor

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Accpet number from user and Display its multiplication of factor
// Autor       :  Revati Vinod Patil
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////


// INPUT : 12, 13, 10
// OUTPUT : 144, 1, 10


#include<stdio.h>
int main()

{

int iValue = 0;

int iRet = 0;

printf("Enter number:");

scanf("%d",&iValue);

iRet = MultFact(iValue);

printf("MuLTIPLICATION OF FACTORS IS:%d", iRet);

return 0;

}