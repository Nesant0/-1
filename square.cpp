#include <stdio.h>
#include <math.h>

int main(void)
    {
    printf ("enter a,b,c (ax^2+bx+c)\n");
    double a,b,c;
    scanf ("%lg",&a);
    scanf ("%lg",&b);
    scanf ("%lg",&c);
    double discriminant = b*b - 4*a*c;
    if (a!=0)
        {
        if (discriminant >= 0)
            {
            if (discriminant==0)
                {
                printf ("only solution:%lg\n", (-b)/(2*a));
                return 0;
                }
            else
                {
                printf ("first soultion:%lg\n", (-b + sqrt(discriminant))/(2*a));
                printf ("second solution:%lg\n", (-b - sqrt(discriminant))/(2*a));
                return 0;
                }
            }
        else
            {
            printf ("no solution");
            return 0;
            }
        return 0;
        }
    else
        {
            if (b!=0)
                {
                printf ("only solution:%lg\n",-c/b);
                return 0;
                }
            else
                {
                printf ("no solution");
                return 0;
                }
        }
    }






