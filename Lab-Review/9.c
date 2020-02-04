#include<stdio.h>
int main()
{
    int num,terminate1,terminate2,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);

    terminate1=num;

        while(terminate1!=0)
    {
        terminate2=terminate1%10;
        sum=sum+terminate2;
        terminate1=terminate1/10;
    }
    printf("The sum of each digits of %d is %d",num,sum);
}
