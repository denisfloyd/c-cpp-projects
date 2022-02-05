#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <math.h>

int main ()
{
    int codigo;
    float valor;
    char nome[20];
    char op;
    
    printf( "CODIGO: ");
    scanf( "%d", &codigo);
    
    printf( "VALOR: " );
    scanf( "%f", &valor );
    
    printf( "NOME: ");
    fflush(stdin);
    scanf( "%s", &nome);
    
    fflush(stdin);
    printf( "OPCAO: ");
    scanf( "%c", &op );
    
    printf( "\nCODIGO: %d", codigo);
    printf( "\nVALOR: %.2f", valor);
    printf( "\nNOME: %s\n", nome);
   
    int x = 4, y = 3;
    int h;
    h = hypot( x,y );
    printf( "\nh^2 = %d^2 + %d^2 : h = %d", x, y, h );
 
    int raiz = 27;
    raiz = cbrt(raiz); 
    printf( "\n\nRaiz Cubica de %d = %d ", (int)pow(raiz, 3), raiz);
    
    x = 64;
    raiz = sqrt ( x );
    printf( "\n\nRaiz quadrada de %d = %d", (int)pow(raiz, 2), raiz);
    
    x = 10; 
    y = 4;
    printf( "\n\nResto de %d/%d = %d", x, y, (int)fmod(x, y));
    
    printf("\n\n");
    system("PAUSE");
    
    // for ( int i = 0; i < tam, i++ ) // não pode
    // struct pes[10]
}

    
     
