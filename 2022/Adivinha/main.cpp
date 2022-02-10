#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    std::cout <<  "*****************************************" << std::endl;
    std::cout <<  "****Bem vindo ao jogo de Adivinhação!****" << std::endl;
    std::cout <<  "*****************************************" << std::endl;
    return 0;
}
