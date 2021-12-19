#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "letra_existe.h"
#include "imprime_cabecario.h"
#include "ler_arquivo.h"
#include "sorteio.h"
#include "naoenforcou.h"
#include "imprime_error.h"
#include "imprime_secreta.h"
#include "chuta.h"
#include "adiciona_palavra.h"
#include "naoacertou.h"

using namespace std;

string palavrasecreta;
map<char, bool> chutou; 
vector<char> chuteerror;

int main() {
    imprime_cabecario();
    ler_arquivo();
    sorteio();

    while (naoacertou() && naoenforcou()) {
        imprime_error();
        imprime_secreta();
        chuta();

        cout << "Fim deJogo! " << endl;
        cout << "A palavra secreta era: " << palavrasecreta << endl;
        if (naoacertou()) {
            cout << "Você perdeu! Tente novamente!" << endl;
        }
        else {
            cout << "Parabéns! Você acertou a palavra secreta!" << endl;
            cout << "Você deseja adicionar um nova palavra ao banco? (S/N)" << endl;
            char resposta;
            cin >> resposta;
            if (resposta == 'S') {
                adiciona_palavra();
            }
        }
        cin.get();
    }
}