#include <stdio.h>
 int func()
 {
     float f=5.2;
     int d= 6*(int)f;
     return 5;
 }

 void fun2(int data)
 {
     int sum= data+data;
     printf("%d",sum);
 }
  void main()
  {
      int number = 1;
      printf("%d\n",number);
      int j= func();
      printf("%d\n",j);
     // func2(j);
  }

