/* Fa�a um programa que leia um vetor de 5 elementos reais e calcule a m�dia aritm�tica entre 
eles. Digite o programa abaixo e confira a execu��o. Note que o tamanho do vetor foi definido 
atrav�s de uma constante t. */ 

#include<iostream> 
#include<conio.h> 
#define t 5  //defini��o da constante t de tamanho 5 
using namespace std; 
main(){ 
    float a[t], s=0; 
    int i=0; 
    while (i < t) 
    { 
        cout << "Digite o " << i+1 << "o. elemento "; 
        cin >> a[i]; 
        s += a[i]; // s = s +a[i]; 
        i++; 
    } 
    cout << "A media do vetor e " << s/t; 
    getch(); 
}
