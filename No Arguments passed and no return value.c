#include <stdio.h>
void checkPrimenumber();

int main()
{
    checkPrimenumber();
    return 0;
}
 void checkPrimenumber()
 {
     int n,i,flag =0;
     printf("Enter a positive integer no: ");
     scanf("%d",&n);

     for(i=2; i<=n/2;++i)
     {
         if(n%i == 0)
         {
             flag=1;
         }
     }
     if(flag==1)
        printf("%d is not a prime no." , n);
     else
     {
         printf("%d is a prime no.", n);
     }
 }
