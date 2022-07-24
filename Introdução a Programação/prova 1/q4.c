#include <stdio.h>

int main()
{
  int i;
  double A, B, C, aux;

  scanf("%lf %lf %lf", &A, &B, &C);
  if (B < C)
  {
    aux = B;
    B = C;
    C = aux;
  }
  if (A < B)
  {
    aux = A;
    A = B;
    B = aux;
  }

  if (A >= B + C)
  {
    printf("NAO FORMA TRIANGULO\n");
  }
  else
  {
    if (A * A < B * B + C * C)
    {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B || B == C || A == C)
    {
      if (A == B && B == C)
      {
        printf("TRIANGULO EQUILATERO\n");
      }
      else
      {
        printf("TRIANGULO ISOSCELES\n");
      }
    }
    if (A * A > B * B + C * C)
    {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (A * A == B * B + C * C)
    {
      printf("TRIANGULO RETANGULO\n");
    }
  }
}