#include <vector>
#include <string>
#include <ler_arquivo.hpp>

std::string palavrasecreta;

void sorteio(){
    std::vector<string> palavras = le_arquivo();
    
    srand(time(NULL));
    
    int indice_sorteado = rand() % palavras.size();
    palavrasecreta = palavras[indice_sorteado];
}