
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = -1;

    while(num < 0)
    {

        printf("Enter a positive integer :\n");
        scanf("%d", &num);
    }

    int a = num, digits[100], no_of_digits = 0, sum = 0,x;


    while (a != 0)
        {
            digits[no_of_digits] = a % 10;
            no_of_digits++;
            a /= 10;
        }


        for ( x = 0; x < no_of_digits; x++)
        {
            sum += pow(digits[x],no_of_digits);
        }

    if (sum == num)
        printf("%d is an Armstrong number.\n\n", num);
    else
        printf("%d is not an Armstrong number.\n\n", num);

    return 0;
}


