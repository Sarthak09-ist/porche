#include <stdio.h>
void main()
{
 int x,y,z,n;
 printf("Please enter value for n: ");
 scanf("%d",&n);
 for(x=1;x<=n;x++)
 {
     for(y=1;y<=n-x;y++)
     {
         printf(" ");
     }
     for(z=1;z<=x;z++)
     {
         printf(" *");
     }
     printf("\n");
 }
}
