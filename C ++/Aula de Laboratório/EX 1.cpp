/* Exec�cios dados como exemplo no laborat�rio de Info. 
   Fun��es B�sicas
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main() 
{ 
       int cont=1, n, s=0, cp=0, ci=0;
       while (cont<=5) //enquanto 
       { //fa�a
             cout<<"\nDigite o "<<cont <<"o. nr: ";
             cin>>n;
             s += n;
             if (n % 2 ==0) //se o resto da divis�o por 2 for 0 
             { //ent�o
                   cp++; //cp = cp + 1
             }
             else //sen�o
             { 
                   ci++;  //ci = ci + 1
             }
             cont++;
       }    
       cout<<"\n\nA soma entre os nrs \202: "<<s;
       cout<<"\nA quantidade de PARES \202: "<<cp;
       cout<<"\nA quantidade de IMPARES \202: "<<ci;  
       getch();
}   
