#include<stdio.h>


int main()
{
    double A,B,C;
    int ar[3]={6,2,3};
    //scanf("%lf%lf%lf",&A,&B,&C);
    int temp,i,j;


    for(i=0; i<3-1; i++)
    {
        for(j=0 ; j<3-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
        for(i=0; i<3; i++)
       {
            printf("%.1lf\n",ar[i]);
       }

    return 0;
}
