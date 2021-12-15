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
    /*for(int i = 0; i < PALAVRASECRETA.size(); i++){
        if(chute == PALAVRASECRETA[i]){
            return true;
        }
    }*/
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

int main(){
    cout <<"*******************************************" << endl;
    cout <<"**      Bem vindo ao Jogo da Forca       **" << endl;
    cout <<"**   Escolha o seu nível de dificuldade  **" << endl;
    cout <<"**  Fácil (F), Médio (M) ou Difícil (D)  **" << endl;
    cout <<"*******************************************" << endl;
    cout << endl;

    while(naoacertou() && naoenforcou()){
        cout << "Chutes errados: ";
        for(char letra: chuteerror){
            cout << letra << " ";
        }
        cout << endl;
        
        for(char letra : PALAVRASECRETA){
            if(chutou[letra]){
                cout << letra << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Seu chute: " ;

        char chute;
        cin >> chute;
        chutou[chute] = true;

        if(letra_existe(chute)){
            cout << "Você acertou! " << endl;
        }else{
            cout << "Você errou! " << endl;
            chuteerror.push_back(chute);
        }

        cout << endl;
    }
}