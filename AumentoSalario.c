#include <stdio.h>

int
main ()
{
  float salario, reajuste;
  printf ("Digite seu salario atual:");
  scanf ("%f", &salario);

  if (salario > 0.00 && salario <= 400.00)
    {
      reajuste = (15 * salario) / 100;
      printf ("Salario atual:%.2f\n", salario + reajuste);
      printf ("Reajuste ganho:%.2f\n", reajuste);
      printf ("Percentual do reajuste:15%%");
    }
  if (salario >= 400.01 && salario <= 800.00)
    {
      reajuste = (12 * salario) / 100;
      printf ("Salario atual:%.2f\n", salario + reajuste);
      printf ("Reajuste ganho:%.2f\n", reajuste);
      printf ("Percentual do reajuste:12%%");
    }
  if (salario >= 800.01 && salario <= 1200.00)
    {
      reajuste = (10 * salario) / 100;
      printf ("Salario atual:%.2f\n", salario + reajuste);
      printf ("Reajuste ganho:%.2f\n", reajuste);
      printf ("Percentual do reajuste:10%%");
    }
  if (salario >= 1200.01 && salario <= 2000.00)
    {
      reajuste = (7 * salario) / 100;
      printf ("Salario atual:%.2f\n", salario + reajuste);
      printf ("Reajuste ganho:%.2f\n", reajuste);
      printf ("Percentual do reajuste:7%%");
    }
  if (salario > 2000.00)
    {
      reajuste = (4 * salario) / 100;
      printf ("Salario atual:%.2f\n", salario + reajuste);
      printf ("Reajuste ganho:%.2f\n", reajuste);
      printf ("Percentual do reajuste:4%%");
    }
  else
    {
    }

  return 0;
}
