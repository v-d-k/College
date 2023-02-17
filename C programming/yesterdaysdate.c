#include <stdio.h>
int main()
{
    int dd, mm, yy;
    printf("Enter the date in dd/mm/yy format : ");
    scanf("%d/%d/%d", &dd, &mm, &yy);
    if (dd == 1 && mm == 1)
    {
        dd = 31;
        mm = 12;
        yy = yy - 1;
    }
    else if (dd == 1 && (mm == 2 || mm == 4 || mm == 6 || mm == 8 || mm == 9 || mm == 11))
    {
        dd = 31;
        mm = mm - 1;
    }
    else if (dd == 1 && (mm == 5 || mm == 7 || mm == 10 || mm == 12))
    {
        dd = 30;
        mm = mm - 1;
    }
    else if (dd == 1 && mm == 3)
    {
        dd = 28;
        mm = mm - 1;
    }
    else
    {
        dd = dd - 1;
    }
    printf("The date of yesterday is %d/%d/%d", dd, mm, yy);
    return 0;
}