/* Construa um algoritmo que leia uma matriz 3x3, do tipo inteiro e mostre os 
   elementos pertencentes à diagonal principal.
*/

#include<iostream> 
#include<conio2.h> 
#define t 3
using namespace std;
main()
{
      int a[t][t], i=0, j;
      while (i<t)
      {
            j=0;
            while(j<t)
            {
                      cout<<"a["<<i+1<<"]["<<j+1<<"]: ";
                      cin>>a[i][j];
                      j++;
            }
            i++;
      }
      j=0; 
      i=0;
      cout<<"\n\n\n";
      while(i<t)
      {
                cout<<"\n"<<a[i][j]<<" \202 elemento da Diagonal Principal!.";
                i++;
                j++;
      }
      getch();
}
            
