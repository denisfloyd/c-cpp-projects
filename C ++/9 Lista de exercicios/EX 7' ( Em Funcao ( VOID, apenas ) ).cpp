/* Com função, apenas do tipo VOID  */ 

#include<iostream>
#include<conio2.h>
#include<math.h> 
#define t 4
using namespace std;
void calcula();
main()
{
      calcula();
      getch();
}
void calcula()
{
     int i, j;
     float a[t][t];
     for(i=0; i<t; i++)
     {
              for(j=0; j<t; j++)
              {
                       cout<<"\n["<<i+1<<"]["<<j+1<<"]: ";
                       cin>>a[i][j];
                       if(i+j == t-1)
                       {
                              cout<<"\n\nA raiz quadrado do elem. da D.S \202: "<<sqrt(a[i][j]);
                              cout<<"\n\n";
                       }
              }
     }
}

      
