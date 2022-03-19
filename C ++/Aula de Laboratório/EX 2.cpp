/* Execícios dados como exemplo no laboratório de Info. 
   Funções Básicas 
*/

#include<iostream>
#include<conio.h>
using namespace std;
main() 
{
       int idade, cont=1;
       while (cont<=4) 
       { 
             cout<<"\nDigite a "<<cont<<"a. idade: ";
             cin>>idade;
             if (idade>=10 && idade<=17) // && = e      || = ou
             { 
                cout<<"\nVoce \202 MENOR\n";
             }  
             else
             { 
                 if (idade>=18 && idade<=30)
                 {
                    cout<<"\nVoce \202 JOVEM\n";
                 }
                 else
                 {
                     cout<<"\nDurma cedo\n";
                 }  
             }
             cont++;
       }
       getch();
}
