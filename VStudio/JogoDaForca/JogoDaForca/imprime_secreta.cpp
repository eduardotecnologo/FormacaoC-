#include <iostream>
#include "imprime_secreta.h"

//extern std::string palavrasecreta;
//extern std::map<char, bool> chutou;

void imprime_secreta(std::string palavrasecreta, std::map<char, bool> chutou) {
    for (char letra : palavrasecreta) {
        if (chutou[letra]) {
            std::cout << letra << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}