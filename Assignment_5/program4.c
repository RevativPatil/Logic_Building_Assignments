//Write a program which accepts N from user and print all odd numbers up to N
///////////////////////////////////////////////////////////////////////////////
// File Name   :  Program4.c
// Description :  accepts N from user and print all odd numbers up to N  
// Autor       :  Revati Vinod Patil
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    INPUT :18
    OUTPUT : 1 3 5 7 9 11 13 15 17
*/
//Time Complexity = O(N)

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf(" %d ",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}