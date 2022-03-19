/* Escreva um algoritmo que leia uma lista de vários números (podem ser positivos ou 
negativos), terminada com o número 0. O algoritmo deve fornecer, como saída: 
            a.  A soma dos números positivos;  
            b.  A soma dos números negativos; 
            c.  A soma das duas somas parciais. 
*/

#include<iostream>
#include<conio.h>
using namespace std;
main() 
{
       float n, s=0, sp=0, sn=0;
       cout<<"\nDigite um nr: ";
       cin>>n;
       while (n!=0)
       { 
             s += n;  
             if (n>0)
             { 
                     sp +=n;
             }
             else
             {
                 sn += n;
             }
             cout<<"\n\nDigite um nr: ";
             cin>>n;
       }
       cout<<"\n\n\nA soma dos positivos \202: "<<sp;
       cout<<"\nA soma dos negativos \202: " <<sn;
       cout<<"\nA soma das duas parciais \202: "<<s;
       getch ();
}
