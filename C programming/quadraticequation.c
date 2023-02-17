#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and unequal\n");
        printf("Roots are %f and %f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots are real and equal\n");
        printf("Roots are %f and %f",r1,r2);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
    return 0;
}