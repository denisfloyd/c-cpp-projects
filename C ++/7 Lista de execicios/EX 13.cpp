/* Construa um algoritmo que leia dois vetores de 5 elementos cada um. A seguir gere um 
terceiro vetor a partir da intercalação dos dois vetores lidos. Mostre o vetor gerado. 
*/ 

#include<iostream> 
#include<conio2.h> 
#define t 5
#define y 10
using namespace std;
main()
{
      float a[t],b[t],c[y];
      int i=0, e=0;
      textbackground(4);
      clrscr();
      textcolor(WHITE);
      while (i<t)
      { 
            cout<<"\nDigite o "<<i+1<<"o. elemento A: ";
            cin>>a[i];
            i++;
      }
      clrscr();
      for (i=0;i<t;i++)
      {
                       cout<<"\nDigite o "<<i+1<<"o. elemento B: ";
                       cin>>b[i];
      } 
      cout<<"\n\n\n\n\n";
      textbackground(7);
      clrscr();
      textcolor(BLACK);
      i=0; e=0;
      cout<<"######   O VETOR C  ######\n\n";
      while (e<y)
      { 
            cout<<a[i]<<"\t";
            e++;
            cout<<b[i]<<"\t";
            e++;
            i++;
      }
      getch();
} 
      
      
       


            

            
