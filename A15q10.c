//Write a function in c to count the frequancy of each elemnets of an arrays. 
#include"stdio.h"
void input(int[], int);
void frequency(int[], int[], int);
void output(int[], int[], int n);
int i;
int main()
{
    int n, a[400], b[400];
    printf("enter the size of array = ");
    scanf("%d", &n);
    input(a, n);
    frequency(a, b, n);
    output(a, b, n);
    return 0;
}
void input(int a[], int n)
{
    printf("enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void frequency(int a[], int b[], int n)
{
    int j;
    for (i = 0; i < n; i++)
    {
        int c = 1;
        if (a[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    a[j] = -1;
                }
            }
            b[i] = c;
        }
    }
}
void output(int a[], int b[], int n)
{
    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            printf("Number %d  is = %d\n", a[i], b[i]);
        }
    }
}