#include<stdio.h>
void f(void);

int main()
{
    int i;
    for(i=0;i<10;i++);
    return 0;
}

void f(void)
{
    int j = 10;
    printf("%d",j);
    j++;
}
int is_in(char *s, char c)
{
while(*s)
if(*s==c) return 1;
else s++;
return 0;
}
