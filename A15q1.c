//Write a funtion to find the greatest number from the given array of any size(TSRS).
#include"stdio.h"
int greatest(int [],int);
int main()
{
   int  a[20],b;
   printf("Enter size of array ");
   scanf("%d",&b);
   printf("greatest number of given number is %d ",greatest(a,b));
   return 0;

}
int greatest(int b[],int n)
{
    int i;
   printf("Enter elements of array = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[0]<b[i])
        b[0]=b[i];
    }
    return b[0];
}