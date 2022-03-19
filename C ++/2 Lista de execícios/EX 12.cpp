/* Construa um algoritmo que calcule e mostre a soma dos primeiros 50 números 
PARES (inicie pelo 2): 2 + 4 + 6 + 8 + 10 + 12 + 14 + ... + 96 + 98 + 100. */ 

#include<iostream> 
#include<conio2.h>
using namespace std;
main() 
{ 
       float s=0, n=2;
       while(n<=100)
       { 
                    s=s+n;
                    n=n+2;
       }
       cout<<"\n\nA soma \202: "<<s;
       getch(); 
}  

       
