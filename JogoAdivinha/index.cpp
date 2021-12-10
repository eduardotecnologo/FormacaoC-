#include <iostream>
using namespace std;

int main(){
    
    cout <<"*****************************************" << endl;
    cout <<"**   Bem vindo ao Jogo da Adivinhação  **" << endl;
    cout <<"**     Você tem 1000 pontos manolo     **" << endl;
    cout <<"*****************************************" << endl; 

    const int NUMERICSECRET = 42;
    bool error = true;
    int tentativas = 0;
    double pontos = 1000.0;

    while( error){
        tentativas++;

        int chute;
        cout << "Tentativa " << tentativas << endl;

        cout << "Qual o seu chute? " << endl;

        cin >> chute;

        double pontosperdidos = abs(chute - NUMERICSECRET) / 2.0;
        pontos = pontos - pontosperdidos;

        cout << "O valor do seu chute é: " << chute << endl;
        bool acertou = chute == NUMERICSECRET;
        bool maior = chute > NUMERICSECRET;

        if(acertou){
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            error = false;
        }else if(maior){
            cout << "Ops! Seu chute foi maior que o número secreto" << endl;
        }else{
            cout << "Ops! Seu chute foi menor que o número secreto" << endl;
        }
    }
    cout << "Fim de Jogo" << endl;    
    cout << "Você acertou em "<< tentativas << " tentaivas!" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação foi de " << pontos << " pontos!" << endl;
}