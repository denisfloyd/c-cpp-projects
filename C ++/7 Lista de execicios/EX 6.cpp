/* Construa um programa que leia um vetor de 5 elementos reais e encontre 
o maior e  o menor elemento. Digite o programa abaixo e confira a execução.  */

#include<iostream> 
#include<conio.h> 
#define t 5 
using namespace std; 
main()
{ 
    float a[t], maior, menor; 
    int i=0; 
    while (i < t) 
    { 
        cout << "Digite o " << i+1 << "o. elemento "; 
        cin >> a[i]; 
        i++; 
    } 
    i=0; 
    maior = a[i]; menor = a[i]; i = 1; 
    while (i < t) 
    { 
        if (a[i] > maior) 
       { 
            maior = a[i]; 
       } 
        else  
       { 
            if (a[i] < menor) 
              menor = a[i]; 
       } 
        i++; 
    } 
    cout << "\n\nO maior elemento do vetor e " << maior; 
    cout << "\n\nO menor elemento do vetor e " << menor; 
    getch(); 
}
