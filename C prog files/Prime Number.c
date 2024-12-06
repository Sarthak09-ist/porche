#include<stdio.h>
void main()
{

    int n,i,j,k;

    j=0;

    printf("Enter number to check whether it is Prime or not:");
    scanf("%d",&n);

   for(i=2;i<=n;i++)
   {
       k=n%i;


       if(k==0)
       {
           j=j+1;

       }
   }
   printf("%d j is. \n",j);

   if(j==1)
   {
       printf("%d is a Prime Number.",n);
   }
   else
   {

       printf("%d is not a Prime Number.",n);
   }
}

