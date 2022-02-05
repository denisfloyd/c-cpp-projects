#include <conio2.h>
#include <iostream>
using namespace std; 
#define UP    72 
#define DOWN  80 
#define LEFT  75
#define RIGHT 77
#define ENTER 13 
#define Tmenu 15
#define SAIR -1
struct item { int opcao,col,lin;
              char texto[30];
              char mensagem[50];};
item opcoes[Tmenu];
int qOp=0;          

void addOpcao(int op, int col, int lin, char txt[30], char msg[50]){
   if (qOp < Tmenu) {
      opcoes[qOp].opcao = op;
      opcoes[qOp].col = col;
      opcoes[qOp].lin = lin;
      strcpy(opcoes[qOp].texto, txt);
      strcpy(opcoes[qOp].mensagem, msg);
      qOp++;        
   }     
}

int menu()
{
   int lin,col,opcao;
   unsigned op;
   textbackground(CYAN);
   clrscr();
   textcolor (BLUE);
   gotoxy(20,2); cout<<"Menu de Opcoes";
   lin=4;col=15;
   for (int i=0; i<qOp; i++){
      gotoxy(opcoes[i].col,opcoes[i].lin); cout << opcoes[i].texto;      
   }
   opcao=0; lin=4;
   textcolor(YELLOW);
   gotoxy(opcoes[0].col,opcoes[0].lin); cout << opcoes[0].texto;
   gotoxy(col,23); cout << opcoes[0].mensagem;
   while (op != ENTER){       
       op=getch();
       textcolor(BLUE);
       gotoxy(opcoes[opcao].col,opcoes[opcao].lin); cout << opcoes[opcao].texto;
       switch (op){                    
           case UP : if (opcao>0) opcao--;  break;
           case DOWN : if (opcao<qOp-1) opcao++ ;  break;
       }//fim switch
       textcolor(YELLOW);
       gotoxy(opcoes[opcao].col,opcoes[opcao].lin); cout << opcoes[opcao].texto;
       gotoxy(col,23); cout << opcoes[opcao].mensagem;
   }//fim while
   return opcoes[opcao].opcao;
}//fim menu

int main(){
 int op=0;    
    addOpcao(1,10,5,"Opcao 1", "Seleciona a primeira opcao");
    addOpcao(2,12,7,"Opcao 2", "Seleciona a segunda opcao ");
    addOpcao(3,14,9,"Opcao 3", "Seleciona a terceira opcao");
    addOpcao(4,16,11,"Opcao 4","Seleciona a quarta opcao  ");
    addOpcao(SAIR,18,13,"Sair","Sair do Programa          ");
    while (op != SAIR) {
       op = menu();
       switch (op) {
         case 1: cout << "Opcao Selecionada = " << op; break;
         case 2: cout << "Opcao Selecionada = " << op; break;
         case 3: cout << "Opcao Selecionada = " << op; break;
         case 4: cout << "Opcao Selecionada = " << op; break;
         case SAIR: cout << "Saindo..."; break;
       }//fim switch
       getch();    
    } //fim while
}
