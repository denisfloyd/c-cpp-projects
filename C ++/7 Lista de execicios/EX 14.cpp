/* Dado um vetor B com 30 valores reais, fazer um algoritmo que calcule o seguinte somatório: 
S = ( b0 – b29 )**3 +  (b1 – b28 )**3 +  (b2 – b27)**3 + ... + (b14 – b15)**3
*/ 

#include<iostream>
#include<conio2.h>
#include<math.h>
#define t 30
using namespace std;
main()
{
      int i,e=29;
      float b[t], s=0;
      for (i=0;i<t;i++)
      {
          cout<<"\nDigite o "<<i+1<<"o. elemento: " ;
          cin>>b[i];
      }
      for(i=0;i<15;i++)
      {
                       s += pow(b[i]-b[e],3);
                       e--;
      }
      textbackground(WHITE);
      system("cls");
      textcolor(RED); 
      cout<<"\n\nO somat\242rio \202: "<<s;
      getch();
}
                       
                       
