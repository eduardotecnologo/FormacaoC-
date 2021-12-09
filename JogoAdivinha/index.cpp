#include <iostream>
using namespace std;

int main(){
    
    cout <<"*****************************************" << endl;
    cout <<"**   Bem vindo ao Jogo da Adivinhação  **" << endl;
    cout <<"*****************************************" << endl;   

    const int NUMERICSECRET = 42;

    int chute;
    cout << "Qual o seu chute? " << endl;

    cin >> chute;

    cout << "O valor do seu chute é: " << chute << endl;

    bool acertou = chute == NUMERICSECRET;
    bool maior = chute > NUMERICSECRET;

    if(acertou){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    }else if(maior){
        cout << "Ops! Seu chute foi maior que o número secreto" << endl;
    }else{
        cout << "Ops! Seu chute foi menor que o número secreto" << endl;
    }
}