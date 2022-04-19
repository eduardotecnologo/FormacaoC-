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

    //Conta::ResultadoSaque resultado = sacar(valor);
    auto resultado = sacar(valor).first;
    if(resultado == Sucesso){
        destino.depositar(valor);
    }
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
    contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo() / 2);
}

