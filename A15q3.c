//Write a function to sort an array of any size.(TSRS)
#include "stdio.h"
int fun(int[], int);
int main()
{
    int a[20], b, i;
    printf("enter size of array = ");
    scanf("%d", &b);
    a[b] = fun(a, b);
    for (i = 0; i < b; i++)
        printf("%d ", a[i]);
    return 0;
}
int fun(int b[], int n)
{
    int i, j, m;
    printf("enter elements of arrrays \n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                m = b[j + 1];
                b[j + 1] = b[j];
                b[j] = m;
            }
        }
    }
    return b[j];
}