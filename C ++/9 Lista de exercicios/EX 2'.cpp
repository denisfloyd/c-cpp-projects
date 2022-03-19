/* Sem gotoxy  */

#include<iostream> 
#include<conio2.h>
#define t 3
#include<math.h>
using namespace std;
main()
{
      float a[t][t], b[t][t], r[t][t]; 
      int i, j;
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++) 
               {
                        cout<<"\nDigite o elemento de A: ";
                        cin>>a[i][j];
               }
      }
      clrscr();
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++) 
               {
                        cout<<"\nDigite o elemento de b: ";
                        cin>>b[i][j];
               }
      }
      clrscr();
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++) 
               {
                        r[i][j] = pow(a[i][j],2) + pow(b[i][j],2);
                        cout<<"\nA matriz R: "<<r[i][j];
               }
      }
      getch();
}
