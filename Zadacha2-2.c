#include<stdio.h>

int main()
{
    int  K= 0, a = 0, b = 0, c = 0, d = 0, R = 100;
    for (a; a <= 2; a=a+1) 
    {
        for (b = 0; b <= 5; b=b+1) 
        {
            for (c = 0; c <= 20; c++) 
            {
                for (d = 0; d <= 50; d++) 
                {
                    if (R == (a * 50 + b * 20 + c * 5 + d * 2))
                    {
                        K=K+1;
                    }
                    
                }
            }
        }
    }
    printf("Methods of recruitment - %d", K);
    return 0;
}