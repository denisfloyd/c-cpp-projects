#include <iostream>
#include <conio2.h>
#include <windows.h>
#include <dos.h>
#define ESC 27
#define MAIS 43
#define MENOS 45
using namespace std;
main(){
      int x,col,lin,cor,fundo;
      int letra, tempo=5;
      unsigned esc;
      srand(time(0)); //inicia o gerador
      while (true) { //for (x=0; x<5000; x++) {
          col=1 + rand()%80; // de 1 a 80
          lin=1 + rand()%24; // de 1 a 24
          cor=1 + rand()%15; // de 1 a 15
          fundo=1 + rand()%15;
          gotoxy (col,lin);
          textbackground(fundo);
          textcolor(cor);
          letra=rand()%10;
          cout<<letra;
          Sleep(tempo);
          if (kbhit()) {
             esc=getch();            
             if (esc == ESC) {
                return 0; 
                 } 
             if (esc == MAIS){
                tempo++;    
             }    
             if (esc == MENOS && tempo>0) {
                tempo--;  
                     }
          } 
      }      
 }
