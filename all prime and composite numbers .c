#include<stdio.h>
void main()
{
    int i,j,n,a[20],c=0,p=0,cp=0;
    printf ("Enter n value ");
    scanf("%d",&n);
    printf ("Enter numbers ");
    for(i=0;i<n;i++)
    {
    scanf ("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    for (j=1;j<=n;i++)
    {
        if(a[i]%j==0)
        c=c+1;
    }
    if (c==2)
    p++;
   
    else
    cp++;
    }
    
    printf("prime count is =%d",p);
    printf("composite count is =%d",cp);
    
}
