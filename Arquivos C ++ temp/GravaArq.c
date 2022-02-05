#include<stdio.h>
#include<string.h>
#include<conio2.h>
struct pessoa { char nome[20]; int idade; };
int main()
{
    FILE *arq;
    arq = fopen("pessoas.txt", "w");        //a=append /  w=write / r=read
    struct pessoa p;
    int i;
    for (i =0; i<5; i++)
    {
        printf("\n\tDigite um nome: ");
        fflush(stdin);  gets(p.nome);  
        fflush(stdin);
        printf("\n\tDigite a idade: ");
        scanf("%d", &p.idade);
        fwrite(&p, sizeof(struct pessoa), 1, arq);
    }
    fclose(arq);
}
