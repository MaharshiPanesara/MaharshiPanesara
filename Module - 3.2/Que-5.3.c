#include<stdio.h>
void main()
{
    int i,a;

    printf("Print even numbers : ");
    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
