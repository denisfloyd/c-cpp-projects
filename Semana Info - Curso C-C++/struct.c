#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
void impPessoa();
void lerPessoa();

struct Pessoa
{
       int cod;
       char nome[20];
} pes[5];

int main () 
{
    void tela();
    int sair = 1;
    char op;
    
    while( sair != 0 )
    {
           tela();
           gotoxy( 10, 5);
           printf( "1 - LER PESSOA: " );
           gotoxy( 10, 6);
           printf( "2 - IMPRIMIR PESSOA: ");
           gotoxy( 10, 7);
           printf( "0 - SAIR: ");
           gotoxy( 10, 8);
           printf( "OPCAO: ");
           op = getche();
           system( "CLS" );
           switch( op )
           {
                case'1': lerPessoa(); break;
                case'2': impPessoa(); break;
                case'0': sair = 0;    break;
           }
           getch();
           system( "CLS" );
    }
           
    printf ("\n\n");
    system( "PAUSE" );
}

void impPessoa ()
{
     int posicao = 0;
     
     while( posicao < 5 )
     {
            if ( pes[posicao].cod != 0 )
            {
                printf ("\n\nPOSICAO: %d", posicao);
                printf ("\nCODIGO: %d", pes[posicao].cod );
                printf ("\nNOME: %s", pes[posicao].nome );
            }
            posicao++;
     }
}

void lerPessoa ()
{
    int posicao = -1;
    
    while( posicao < 0 || posicao > 4 )
    {
           printf( "ENTRE COM A POSICAO (0 - 4): ");
           scanf( "%d", &posicao); 
    }
    printf ("\n(%d) DIGITE O CODIGO: ", pes[posicao].cod );
    scanf ("%d", &pes[posicao].cod );
    printf ("(%s) DIGITE O NOME: ", pes[posicao].nome );
    fflush(stdin); 
    scanf ( "%s", &pes[posicao].nome );
}

void tela ()
{
    int col, lin;
    textcolor (YELLOW);
    system("CLS");
    for (col = 1; col<80; col++){
         gotoxy (col, 1); printf("\xCD");
         gotoxy (col,24); printf("\xCD");
    }

    for (lin = 1; lin < 24; lin++){
         gotoxy (1, lin); printf("\xBA");
         gotoxy (80,lin); printf("\xBA");
    }
    gotoxy (1,1); printf("\xC9");
    gotoxy (1,24); printf("\xC8");
    gotoxy (80,1); printf("\xBB");
    gotoxy (80,24); printf("\xBC");
    textcolor(LIGHTGRAY);
}
