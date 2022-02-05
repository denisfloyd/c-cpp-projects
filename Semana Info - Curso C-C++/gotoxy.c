/**************************************** */
/* Program: 1                             */ 
/* Name: Denis                            */
/* Date: 23/09/2012                       */
/* Description: Use of function gotoxy    */
/**************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main ()
{
    void bringColor ();
    
    int tam = 4;
    int a[][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {64, 49, 36, 25}, { 4, 15, 16, 53} };
    
    // Print of hearder
    printf( "IMPRESSAO DE MATRIZ: ");
    int col = 20;
    int lin = 5;
    
    gotoxy( 36, 11 );
    textcolor( LIGHTRED );
    printf( "DIAGONAL PRINCIPAL");
    gotoxy( 36, 5 );
    textcolor( CYAN );
    printf( "ACIMA DA DIAGONAL PRINCIPAL");
    gotoxy( 5 , 11 );
    textcolor( YELLOW );
    printf( "ABAIXO DA DP");
    
    textcolor( LIGHTGRAY );
    int i, j; 
    for( i = 0; i < tam; i++, col = 20, lin += 2)
         for ( j = 0; j < tam; j++ )
         {
             gotoxy( col, lin );
             bringColor(i, j);
             printf( "%d", a[i][j] );     
                   
             col += 4;
         }
         
    textcolor( LIGHTGRAY );
    printf( "\n\n" );
    system( "PAUSE" );
}
             
void bringColor (int i, int j)
{
     if ( i == j )
          textcolor( LIGHTRED );  
     else if ( i < j ) 
          textcolor( CYAN ); 
     else 
          textcolor( YELLOW); 
}
