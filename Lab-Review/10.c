#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    printf("Enter the co-ordinate of Pokhara :\n");
    scanf("%lf %lf",&x1,&y1);
    printf("\nEnter the co-ordinate of Kathmandu :\n");
    scanf("%lf %lf",&x2,&y2);

    double distance;
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("The distance between Pokhara and Kathmandu is %lf",distance);
}
