//
// Created by EduDeveloper on 16/01/2022.
//

#include "Conta.h"
#include <iostream>
#include <locale>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero,Titular titular)
        :numero(numero),
        titular(titular),
        saldo(0) {
    numeroDeContas++;
}

Conta::~Conta(){
    std::cout << "Destrutor da Conta!" << std::endl;
    numeroDeContas--;
}

void Conta::sacar(float valorASacar){
    if(valorASacar < 15){
        setlocale(LC_ALL, "portuguese");
        std::cout << "Ops! Não é possível sacar valores abaixo de R$15,00" << std::endl;
        return;
    }

    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if(valorDoSaque > saldo){
        setlocale(LC_ALL, "portuguese");
        std::cout << "Ops! Você não possui saldo suficiente." << std::endl;
    }else{
        saldo -= valorDoSaque;
    }

}

void Conta::depositar(float valorADepositar){
    if(valorADepositar < 10){
        setlocale(LC_ALL, "portuguese");
        std::cout << "Ops! Não é possível depositar valores abaixo de R$10,00" << std::endl;
    }else{
        saldo += valorADepositar;
    }
}
void Conta::operator+=(float valorADepositar){
    depositar(valorADepositar);
}

float Conta::recuperaSaldo() const{
    return saldo;
}

int Conta::recuperaNumeroDeContas(){
    return numeroDeContas;
}
