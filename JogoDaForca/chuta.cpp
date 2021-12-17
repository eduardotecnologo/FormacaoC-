#include <iostream>
#include <map>
#include <vector>

#include <letra_existe.hpp>

std::map<char, bool> chutou;
std::vector<char> chuteerror;

void chuta(){
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;
    chutou[chute] = true;

    if(letra_existe(chute)){
        std::cout << "Você acertou! " << std::endl;
    }else{
        std::cout << "Você errou! Seu chute não está na palavra!" << std::endl;
        chuteerror.push_back(chute);
    }
    std::cout << std::endl;
}
