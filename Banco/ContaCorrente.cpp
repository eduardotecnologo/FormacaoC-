//
// Created by EduDeveloper on 16/01/2022.
//

#include "ContaCorrente.h"
#include <iostream>
#include <locale>

ContaCorrente::ContaCorrente(std::string numero, Titular titular): Conta(numero, titular){

}

float ContaCorrente::taxaDeSaque() const{
    setlocale(LC_ALL, "portuguese");
    std::cout << "Chamando método Sacar de conta corrente" << std::endl;
    return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor){
    sacar(valor);
    destino.depositar(valor);
}

