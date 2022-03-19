/* Escreva um algoritmo que leia um vetor de 8 elementos, real, calcule e mostre: 
 a)A soma entre os elementos maiores que 20 e menores que 30; 
 b)A quantidade de números negativos; 
 c)A soma do cubo de cada elemento menor que 10.
*/

#include<iostream> 
#include<conio2.h> 
#include<math.h> 
#define t 8
using namespace std;
main()
{
      float s=0,sc=0;
      int i=0,v[t], q=0;
      while (i<t) 
      { 
            cout<<"\nDigite o "<<i+1<<"o. elemento: ";
            cin>>v[i];
            i++;
      }
      i=0;
      while (i<t)
      { 
            if (v[i]<30 && v[i]>20)
            { 
                        s += v[i];
            }
            if(v[i] < 0) 
            { 
                          q++;
            }
            if(v[i]<10)
            { 
                             sc += pow(v[i],3);
            }  
            i++;
      }
      cout<<"\n\n\n\n";
      cout<<"A soma dos elementos maiores que 20 e menores que 30 \202: "<<s;
      cout<<"\nA quantidade de elementos negativos \202: "<<q;
      cout<<"\nA soma do cubo dos elementos menores que 10 \202: "<<sc;
      getch();
} 
