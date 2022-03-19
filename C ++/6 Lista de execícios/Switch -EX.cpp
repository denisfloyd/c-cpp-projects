#include<conio.h> 
//#include<conio2.h> 
#include<iostream> 
#include<math.h> 
using namespace std; 
main(){ 
     char opcao; 
    int sair=1; 
    system("cls"); //clrscr(); 
    //textbackground(WHITE); 
    //clrscr(); 
    //textcolor(RED); 
    while(sair!=0){ 
        cout << "\n=-=-=-=-=-=-=-=-= FEMA IMESA 1o ADS =-=-=-=-=-=-=-=-=";    
        cout << "\n\n>>>              Selecione uma Opcao            <<<<\n\n"; 
        cout << "0 - Sair\n\n"; 
        cout << "1 - Somar 2 numeros\n\n"; 
        cout << "2 - Muliplicar 2 numeros\n\n"; 
        cout << "3 - Raiz Quadrada\n\n"; 
        cout << "Opcao:  "; 
        opcao = getche(); 
        system("cls"); //clrscr(); 
        switch(opcao) 
        {        
          case '0': { sair=0; break;} 
          case '1': { 
                      int a, b; 
                      cout << "Digite o 1o valor: "; 
                      cin >> a; 
                      cout << "Digite o 2o valor: "; 
                      cin >> b; 
                      cout << "\nA soma dos valores: " << a + b; 
                      break; 
                    } 
          case '2': { 
                      int a, b; 
                      cout << "Digite o 1o valor: "; 
                      cin >> a; 
                      cout << "Digite o 2o valor: "; 
                      cin >> b; 
                      cout << "\nA multiplicacao dos valores: " << a * b; 
                      break; 
                    } 
          case '3': { 
                      float a; 
                      cout << "Raiz Quadrada" << endl; 
                      cout << "==== ========"; 
                      cout << "\n\nDigite um valor: "; 
                      cin >> a; 
                      cout << "\nA raiz \202: " << sqrt(a); 
                      break; 
                    } 
        } //Este é o fim do switch 
        getch(); 
        system("cls"); //clrscr(); 
    } //Este é o fim do While 
} 
