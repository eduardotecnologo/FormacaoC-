#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
using namespace std;

const string PALAVRASECRETA = "secreta";
map<char, bool> chutou;
vector<char> chuteerror;

bool letra_existe(char chute){
    for(char letra : PALAVRASECRETA){
        if(chute == letra) {
            return true;
        }
    }
    return false;
}

bool naoacertou(){
    for(char letra : PALAVRASECRETA){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool naoenforcou(){
    return chuteerror.size() < 5;
}

void imprime_cabecario(){
    cout <<"*******************************************" << endl;
    cout <<"**      Bem vindo ao Jogo da Forca       **" << endl;
    cout <<"**   Escolha o seu nível de dificuldade  **" << endl;
    cout <<"**  Fácil (F), Médio (M) ou Difícil (D)  **" << endl;
    cout <<"*******************************************" << endl;
    cout << endl;
}
void imprime_error(){
    cout << "Chutes errados: ";
    for(char letra: chuteerror){
        cout << letra << " ";
    }
    cout << endl;
}
void imprime_secreta(){
    for(char letra : PALAVRASECRETA){
        if(chutou[letra]){
            cout << letra << " ";
        }else{
            cout << "_ ";
        }
    }
    cout << endl;
}
void chuta(){
    cout << "Seu chute: ";
    char chute;
    cin >> chute;
    chutou[chute] = true;

    if(letra_existe(chute)){
        cout << "Você acertou! " << endl;
    }else{
        cout << "Você errou! Seu chute não está na palavra!" << endl;
        chuteerror.push_back(chute);
    }
    cout << endl;
}

int main(){
    imprime_cabecario();

        while(naoacertou() && naoenforcou()){
            imprime_error();
            imprime_secreta();
            chuta();
            
        cout << "Fim deJogo! " << endl;
        cout << "A palavra secreta era: " << PALAVRASECRETA << endl;
        if(naoacertou()){
            cout << "Você perdeu! Tente novamente!" << endl;
        }else{
            cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        }
    }
}