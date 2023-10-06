#include<stdio.h>
int main()
{
    int x,y,c;
    printf("Enter your current age: ");
    scanf("%d",&x);

    y=--x;
    printf("One year ago, your age : %d\n",y);

    z=++x;
    z=++x;
    printf("One year after, your age : %d\n",z);

    return 0;
}
