/* Faça um algoritmo que leia um vetor de 10 elementos e mostre
•  A raiz quadrada de cada elemento: sqrt (número); 
•  O cubo de cada elemento: pow (base, expoente).
*/ 

#define t 10 
#include<iostream> 
#include<conio2.h>
#include<math.h>  
using namespace std;
main()
{ 
      float vet[t];
      int i=0;
      clrscr();
      textbackground(4);
      system("cls");
      textcolor(WHITE);
      while (i<t)
      {     
            cout<<"\n\nDigite um elemento: ";
            cin>>vet[i];
            cout<<"\nA raiz quadrada do mesmo \202: "<<sqrt(vet[i]);
            cout<<"\nO elemento ao cubo \202: "<<pow(vet[i],3);
            i++;
      }
      getch();
}
