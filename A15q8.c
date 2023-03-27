 // Write a function in C to print all unique elements in an array.
 #include"stdio.h"
 void unique(int a[], int );
 int main()
 {
    int a[5000];
    int n,i,j;
    printf("Enter size of an arrays ");
    scanf("%d",&n);
    printf("Enter %d elements =",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a, n);
 }
   void unique(int a[] ,int n)
   {
    int i,j,count;
     for(i=0;i<n;i++)
    {
        int count=0;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]  == a[j])
            {
                count++;
            }    
        }
       if(count == 0)
            {
                 printf(" %d",a[i]);
            }  
    }

 }
   