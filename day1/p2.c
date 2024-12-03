#include <stdio.h>

int main()
{
    int num = 0;
    int big = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        
        if(num > big)
        {
            big = num;
        }
    }
    printf("Biggest Number is: %d", big);

    return 0;
}