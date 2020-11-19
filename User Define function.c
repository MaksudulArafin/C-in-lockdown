#include <stdio.h>
 int addnumbers(int a , int b);

 void main()
 {
     int n1,n2 , sum;

     printf("Enter two numbers: ");
     scanf("%d %d", &n1,&n2);

     sum= addnumbers(n1,n2);
     printf("sum = %d",sum);

     getch();
 }

 int addnumbers(int a, int b)
 {int result;
     return (result=a+b);
 }
