//
// Created by EduDeveloper on 16/01/2022.
//

#include "ContaCorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular): Conta(numero, titular){

}

float ContaCorrente::taxaDeSaque() const{
    std::cout << "Chamando m�todo Sacar de conta corrente" << std::endl;
    return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor){
    sacar(valor);
    destino.depositar(valor);
}

