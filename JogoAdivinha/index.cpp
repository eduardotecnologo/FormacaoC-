#include <iostream>
using namespace std;

int main(){
    
    cout <<"*****************************************" << endl;
    cout <<"**   Bem vindo ao Jogo da Adivinhação  **" << endl;
    cout <<"*****************************************" << endl;   

    int numericsecret = 42;

    int chute;
    cout << "Qual o seu chute? " << endl;

    cin >> chute;

    cout << "O valor do seu chute é: " << chute << endl;

    if(chute == numericsecret){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    }else if(chute > numericsecret){
        cout << "Ops! Seu chute foi maior que o número secreto" << endl;
    }else{
        cout << "Ops! Seu chute foi menor que o número secreto" << endl;
    }
}