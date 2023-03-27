// Write a function in C to read n number of values in an array and display it in reverse order.
#include"stdio.h"
int rev(int j[],int );
int main()
{
    int a[5000];
    int b,s;
    printf("Enter size of array ");
    scanf("%d",&b);
    s=rev(a,b);
    printf(" %d",s);
    return 0;
}
int rev(int b[],int n)
{
    int i;
    printf("Enter elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
        for(i=n-1;i>0;i--)
        {
       printf(" %d",b[i]);
        }
    
    return b[i];
}
