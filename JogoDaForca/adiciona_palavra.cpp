#include <iostream>
#include <vector>
#include <string>
#include "ler_arquivo.hpp"
#include "salvar_arquivo.hpp"

void adiciona_palavra(){
    std::cout << "Digite a nova palavra com letras maiusculas." << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;
    
    std::vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);
    salvar_arquivo(lista_palavras);
}