// Write a program which accept number from user and display its table in reverse.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  Program5.c
// Description :  accept number from user and display its table in reverse.
// Autor       :  Revati Vinod Patil
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
        INPUT : 2 
        OUTPUT : 20 18 16 14 12 10 8 6 4 2 

        INPUT : -3 
        OUTPUT: 30 27 24 21 18 15 12 9 6 3

*/
//Time Complexity = O(N)

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int table =  0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        table = (iNo * iCnt);
        printf(" %d ",table);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}