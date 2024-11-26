// Find Nth Prime number

#include<stdio.h>
int main()
{
    int inputNum = 0;
    int count = 0;
    int flag = 1;
    int prime = 1;
    printf("\n Enter the Number to find Nth Prime No: ");
    scanf("%d", &inputNum);
    while(inputNum != count)
    {
        flag=0;
        prime++;
        for(int i = 2; i <= (prime/2); i++)
        {
            if(prime % i == 0)
                flag = 1;
        }
        if(flag == 0)
        {
            count++;
        }
    }
    printf("%dth Prime Number is: %d", inputNum, prime);
    return 0;
}