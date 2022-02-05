#include <iostream>
#include <conio2.h>
#include <windows.h>
using namespace std;
#define T 5
int M[T][T];
int i,j; //linha e coluna da matriz
int L,C; //linha e coluna de tela
void pinta(){
    textbackground(CYAN);
    for(i=0;i<T;i++){
       L=i*2+3;
       for(j=0;j<T;j++){
          C=j*5+4;
          gotoxy(C,L);
          cout << "    ";  //4 ESPAÇOS              
       } //FIM FOR J             
    } //FIM FOR I
 }  //FIM PINTA()
void somaLinhas(){
   int s[T]={0,0,0,0,0}; //PREENCHE COM ZEROS
   gotoxy(33,1);
   cout<<"Soma";
   for(i=0;i<T;i++){
      L=i*2+3; C=T*5+10;
      for(j=0;j<T;j++){
         s[i]=s[i] + M[i][j];
         gotoxy(C,L);
         cout<<s[i];
         Sleep(500); //1,5 segundos
         //getch();     //CHAMAR A FUNÇÃO DENTRO         
      } //FOR J       //DO MAIN()
   }  //FOR I
 } //FIM SOMALINHAS()

void lerMatriz(){
    gotoxy(10,1);
    cout<<"Leitura da Matriz";
    pinta();
    L=3;
    for(i=0;i<T;i++){
       //L=i*2+3;
       for(j=0;j<T;j++){
          C=j*5+5;
          gotoxy(C,L);
          cin >> M[i][j];              
       }
       L=L+2;
    }    
 }
void somaColunas(){
    int s[T]={0,0,0,0,0};
    for(j=0;j<T;j++){
       C=j*5+5;
       L=T*2+6;
       for(i=0;i<T;i++){
          s[j]=s[j]+M[i][j];
          gotoxy(C,L);
          cout << s[j];
          Sleep(500);
       }                 
    }     
}
void diagonalPrincipal(){
   textcolor(RED);
   for(i=0;i<T;i++){
      L=i*2+3;
      C=i*5+5;
      gotoxy(C,L);
      cout << M[i][i];              
   }
}
main(){ lerMatriz();
        somaLinhas();
        somaColunas();
        diagonalPrincipal();
        gotoxy(10,20);
        system("pause");
}   



