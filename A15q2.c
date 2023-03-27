//Write a function to find the smallest number from the given array of any size.(TSRS)
#include"stdio.h"
int smallest(int [] , int n);
int main()
{
    int a[50000];
    int b;
    printf("Enter size of arrays ");
    scanf("%d",&b);
    printf("smallest number of given number is = %d",smallest(a,b));
    return 0;
}
int smallest( int b[] , int n )
{
    int i;
    printf("Enter elements of arrays ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i] <  b[0] )
        b[0]=b[i];
    }
    return b[0];
}