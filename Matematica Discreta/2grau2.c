#include<stdio.h>
#include <math.h>
//✓ Concavidade da parábola ;
//✓ Raízes da função quadrática;
//✓ Os vértices da parábola e se são pontos de Maximo ou Mínimo.

int main()
{
float a,A,b,B,c,C,x1,x2,delta,opcao;

      printf("Digite o valor de a: \n");
      scanf("%f",&a);
      printf("\n\nDigite o valor de b: \n");
      scanf("%f",&b);
      printf("\n\nDigite o valor de c: \n");
      scanf("%f",&c);

if (a != 0){
if(a>0){
printf("\nconcavidade da parabola eh voltada para cima.\n");}
else{
printf("\nconcavidade da parabola eh voltada para baixo.\n");}


delta=(b*b)-4*a*c;
printf("Delta =%.1f",delta);

        if(delta == 0){
            x1 = (-b + sqrt(delta))/(2*a);
            printf("Delta igual a 0 \n");
            printf(" x1 e x2 = %.1f",x1);}
        if(delta >0){
                x1 = ((-b) + sqrt(delta))/(2*(a));
                x2 = ((-b) - sqrt(delta))/(2*(a));
                printf("\nDelta Maior que 0\n");
                printf("x1 = %.1f\n",x1);
                printf("x2 = %.1f\n",x2);}
                 else {
                    printf("\nDelta menor que 0\n\n");
                    printf("Nao existe raiz Real!");}}
        else {
            printf("\nNao eh uma equacao do segundo grau\n\n");
            printf("a tem de ser diferente de 0");}

    system("pause");


    return 0;}

