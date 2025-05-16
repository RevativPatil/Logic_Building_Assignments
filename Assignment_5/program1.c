// Write a program which accept number from user and print that number of $ & * on screen
///////////////////////////////////////////////////////////////////////////////
// File Name   :  Program1.c
// Description :  accept number from user and print that number of $ & * on screen  
// Autor       :  Revati Vinod Patil
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    INPUT : 5
    OUTPUT : $  *  $  *  $  *  $  *  $  *
    
    INPUT : 3
    OUTPUT : $  *  $  *  $  * 

    INPUT : -3
    OUTPUT : $  *  $  *  $ * 

*/
//Time Complexity = O(N)

#include<stdio.h>

void Pattern (int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" $  * ");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}