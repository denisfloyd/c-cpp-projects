#include<stdio.h>
#include<stdlib.h>
void calcData (int *, int *, int *, int);

int main()
{
    printf("Programa calcula datas: ");
    int dia = 15, mes = 10, ano=2010;
    int qtdDias;
    printf("\nInforme a quantidade de dias: ");
    scanf ("%d", &qtdDias);
    calcData (&dia, &mes, &ano, qtdDias);
    printf("\n\tA nova Data: "); 
      gotoxy(10, 6); printf("%d", dia);
      gotoxy(15, 6); printf("/  %d", mes);
      gotoxy(20, 6); printf("  /  %d", ano);
    getch();
}

void calcData (int *d, int *m, int *a, int dias)
{
     int sd, sm, sa;
     sa = dias / 365;
     sm = (dias % 365)/30;
     sd = (dias % 365) % 30;
     *d += sd;
     *m += sm;
     *a += sa;
     if (*d > 30)
     {
        *d -= 30;
        (*m)++;
     }
     if (*m > 12)
     {
            *m = *m - 12;
            (*a)++;
     }
}
