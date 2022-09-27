#include<stdio.h>
int main()
{
    int year_1, year_2, i;

    printf("\nEnter Year Range: \n");
    scanf("%d %d", &year_1,&year_2);

    printf("\nLeap Years Are: \n");
    for(i=year_1; i<=year_2; i++)
    {
        if(i%4 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}