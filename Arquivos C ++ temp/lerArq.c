#include<stdio.h>
#include<string.h>
#include<conio2.h>
struct pessoa { char nome[20]; int idade; };
int main()
{
    FILE *arq;
    arq = fopen("pessoas.txt", "r");
    struct pessoa p[200];
    int i=0, x;
    while(fread(&p[i], sizeof(struct pessoa), 1, arq) != 0)   
    {  i++;  }
    for (x=0; x<i; x++)
    {
       printf ("\nNOME: %s  -  IDADE: %d\n", p[x].nome, p[x].idade);
    } 
    fclose(arq);
    getch();
}  
