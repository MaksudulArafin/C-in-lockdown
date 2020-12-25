#include<stdio.h>
double A,B,C;

int main()
{
    scanf("%lf%lf%lf",&A,&B,&C);

    if(A>=B+C)
    {

        if((A==B)&&(B==C)&&(C==A))
        {
            printf("NAO FORMA TRIANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((A==B)||(B==C)||(C==A))
        {
            printf("NAO FORMA TRIANGULO\n");
            printf("TRIANGULO ISOSCELES\n");

        }
        else
        {
            printf("NAO FORMA TRIANGULO\n");
        }
    }
    else if((A*A)==((B*B)+(C*C)))
    {

        if((A==B)&&(B==C)&&(C==A))
        {
            printf("TRIANGULO RETANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((A==B)||(B==C)||(C==A))
        {
            printf("TRIANGULO RETANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO RETANGULO\n");
        }
    }
    else if((A*A)>((B*B)+(C*C)))
    {
        if((A==B)&&(B==C)&&(C==A))
        {
            printf("TRIANGULO OBTUSANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((A==B)||(B==C)||(C==A))
        {
            printf("TRIANGULO OBTUSANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
    }
    else if((A*A)<((B*B)+(C*C)))
    {
        if((A==B)&&(B==C)&&(C==A))
        {
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((A==B)||(B==C)||(C==A))
        {
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }
    return 0;
}
