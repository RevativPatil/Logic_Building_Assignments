//Write a program which accept number from user and display below pattern.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  Program1.c
// Description :  accept number from user and display below pattern.
// Autor       :  Revati Vinod Patil
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 5
    Output :*****#####
    
    Input : 6
    Output :******####
     
    Input : -5
    Output :  *****#####
   
    Input :2
    Output :**##
*/
//Time Complexity = O(N)
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#");
    }
    

}
int main()
{

int iValue = 0;

printf("Enter number :");
scanf("%d",&iValue);

Display(iValue);

return 0;
}