#include <stdio.h>
#include <math.h>

int main()
{
  double m, a, t, v, s, w;
  scanf("%lf\n%lf\n%lf", &m, &a, &t);
  v = (a * t) * 3.6;
  s = (a * pow(t, 2)) / 2;
  w = ((m * pow(v, 2)) / 2) * 77.16049382716049;

  printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", v, s, w);
}