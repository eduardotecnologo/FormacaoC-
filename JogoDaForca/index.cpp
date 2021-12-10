#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const string PALAVRASECRETA = "secreta";

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

int main(){
    cout << PALAVRASECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if(letra_existe(chute)){
            cout << "Você acertou! " << endl;
        }else{
            cout << "Você errou! " << endl;
        }
    }
}