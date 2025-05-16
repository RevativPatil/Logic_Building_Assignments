//write a program which accpet number from user and display its factor in decresing order

///////////////////////////////////////////////////////////////////////////////
// File Name   :  Program2.c
// Description :  Accpet number from user and Display the factor in decresing order
// Autor       :  Revati Vinod Patil
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////


// INPUT : 12
// OUTPUT : 6,4,3,2,1

// INPUT : 13
// OUTPUT :1

// INPUT : 10
// OUTPUT :5,2,1



#include<stdio.h>


int main()

{

int iValue = 0;

printf("Enter number"); scanf("%d",&iValue);

FactRev(iValue);

return 0;

}