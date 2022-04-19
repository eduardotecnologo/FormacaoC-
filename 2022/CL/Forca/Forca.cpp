// Forca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <map>
#include <string>
#include <vector>


#include "letra_existe.h"
#include "imprime_cabecalho.h"
#include "imprime_palavra.h"
#include "imprime_erros.h"
#include "adicionar_palavra.h"
#include "sorteia_palavra.h"
#include "le_arquivo.h"
#include "letra_existe.h"
#include "nao_enforcou.h"
#include "nao_acertou.h"
#include "chuta.h"

std::string palavra_secreta;
std::map<char, bool> chutou;
std::vector<char> chutes_errado;

int main()
{
    imprime_cabecalho();

    le_arquivo();
    sorteia_palavra();

    while (nao_acertou() && nao_enforcou) {
        imprime_erros();
        imprime_palavra();
        chuta();
    }

    std::cout << "Fim de Jogo!" << std::endl;
    std::cout << "A palavra secreta era: " << palavra_secreta << std::endl;
    if (nao_acertou()) {
        std::cout << "Você perdeu! Tente novamente!" << std::endl;
    }
    else {
        std::cout << "Voc� deseja adicionar uma nova palavra secreta ao banco? (S/N)! " << std::endl;
        char resposta;
        std::cin >> resposta;
        if (resposta == 'S') {
            adiciona_palavra();
        }
    }
    std::cin.get();
}