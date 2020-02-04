#include<Stdio.h>

int sum(int initial)
{
    int sum_value=0;

    for(int i=initial;i<=300;i++)
    {
        if(i%7==0 && i%63!=0)
        {
            sum_value=sum_value+i;
        }
    }
    return sum_value;
}
int main()
{
    int initial=9;
    int result=sum(initial);
    printf("%d",result);
}
