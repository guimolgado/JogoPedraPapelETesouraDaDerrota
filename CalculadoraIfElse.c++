#include <iostream>
#include <string>
#include <conio.h>



using namespace std;
int main (int argc, char const *argv[])
{
    string calculo;
    int numero;
    int numero1;
    float numero2;
    float numero3;

    cout << "  Ola, bem vindo a nossa calculadora, digite + caso voce queira somar, - caso queira subtrair, * caso queira multiplicar e / caso queira dividir, se nao quiser jogar porra digita qualquer merda ai entao seu otario" << endl;

    cin >> calculo;

    if ( calculo == "+")
    {
        cout << "  Digite um numero" << endl;
        cin >> numero;
        cout << "  Digite outro numero" << endl;
        cin >> numero1;

        cout << "O resultado sera  " << numero + numero1 << endl;
    }
    else 
    
    if (calculo == "-")
    {

        cout << "  Digite um numero" << endl;
        cin >> numero;
        cout << "  Digite outro numero" << endl;
        cin >> numero1; 

        cout << "O resultado sera  " << numero - numero1 << endl;

    }
    else 
     if (calculo == "*")
    {

        cout << "  Digite um numero" << endl;
        cin >> numero;
        cout << "  Digite outro numero" << endl;
        cin >> numero1; 

        cout << "O resultado sera  " << numero * numero1 << endl;

    }
    else 
    if (calculo == "/")
    {
        cout << "Digite um numero" << endl;
        cin >> numero2;
        cout << "Digite outro numero" << endl;
        cin >> numero3;

        cout << "O resultado sera  " << numero2 / numero3 << "E o resto sera " << static_cast<int>(numero2) % static_cast<int>(numero3) << endl; 
    }
    else

    cout << "entao nao joga seu palhaco" << endl;



getch();
return 0;

}
