#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <cstdlib>

#include "naoacertou.cpp"
#include "letra_existe.cpp"

using namespace std;

string palavrasecreta;
map<char, bool> chutou;
vector<char> chuteerror;


   vector<string> le_arquivo() {
    ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;
        arquivo >> quantidade_palavras;

        vector<string> palavras_do_arquivo;

        for(int i = 0; i < quantidade_palavras; i++){
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }else{
        cout << "Não foi possível acessar o banco de palavras!" << endl;
        exit(0);
    }
}

void sorteio(){
    vector<string> palavras = le_arquivo();
    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();
    palavrasecreta = palavras[indice_sorteado];
}
void salvar_arquivo(vector<string> nova_lista){
    ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() << endl;
        for(string palavras : nova_lista){
            arquivo << palavras << endl;
        }
        arquivo.close();
    }else{
         cout << "Não foi possível acessar o banco de palavras!" << endl;
         exit(0);
    }
}

void adiciona_palavra(){
    cout << "Digite a nova palavra com letras maiusculas." << endl;
    string nova_palavra;
    cin >> nova_palavra;
    vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);
    salvar_arquivo(lista_palavras);
}

int main(){
    imprime_cabecario();
    le_arquivo();
    sorteio();

        while(naoacertou() && naoenforcou()){
            imprime_error();
            imprime_secreta();
            chuta();
            
        cout << "Fim deJogo! " << endl;
        cout << "A palavra secreta era: " << palavrasecreta << endl;
        if(naoacertou()){
            cout << "Você perdeu! Tente novamente!" << endl;
        }else{
            cout << "Parabéns! Você acertou a palavra secreta!" << endl;
            cout << "Você deseja adicionar um nova palavra ao banco? (S/N)" << endl;
            char resposta;
            cin >> resposta;
            if(resposta == 'S'){
                adiciona_palavra();
            }
        }
    }
}