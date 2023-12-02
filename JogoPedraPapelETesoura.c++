#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])

{
    int numeroDoJogador;

    while (numeroDoJogador != 4){


        cout << "ola, quer jogar pedra, papel e tesoura? eh divertido, porem vc sempre vai perder kkkkk, digite o numero da opcao que vc quer meu bem" << endl;

        cout << "1 - tesoura" << endl;
        cout << "2 - papel" << endl;
        cout << "3 - pedra" << endl;
        cout << "4 - desistir de jogar " << endl;

        cin >> numeroDoJogador;

        if(numeroDoJogador == 1 ) {
         cout << "Escolhi pedra, vc perdeu otario kkkkk" << endl;
        } else if (numeroDoJogador == 2) {
            cout << "escolhi tesoura, vc perdeu otario kkkkkkk" << endl;
        } else if (numeroDoJogador == 3) { 
           cout << "escolhi papel, vc perdeu otario kkkkkkk" << endl;
        } else {
            cout << "cansou de perder kkkkkk?" << endl;
        }

    }

    getch();
    return 0;
    }

