/* Escreva um algoritmo que leia um nr. N qualquer e a seguir, leia uma matriz
   4x3. Verifique quantas vezes o nr. N aparece na matriz.
*/ 

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int a[4][3], n, q=0;
      int i=0, j;
      cout<<"\nDigite o nr. N : ";
      cin>>n;
      system("cls");
      while(i<4) 
      {
                 j=0;
                 while(j<3)
                 {
                         cout<<"a["<<i+1<<"]["<<j+1<<"]: ";
                         cin>>a[i][j];
                         if(a[i][j] == n)
                         {
                                    q++;
                         }
                         j++;
                 }
      i++;
      }
      cout<<"\n\nO nr. N aparece "<<q<<" vezes.";
      getch();
}

