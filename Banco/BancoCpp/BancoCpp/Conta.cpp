#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string cpfTitular, std::string nomeTitular):
    numero(numero),
    cpfTitular(cpfTitular),
    nomeTitular(nomeTitular),
    saldo(0)
    /*this->numero = numero;
    this->cpfTitular = cpfTitular;
    this->nomeTitular = nomeTitular;
    this->saldo = 0;*/
{
    numeroDeContas++;
}

Conta::~Conta(){
    numeroDeContas--;
}

void Conta::sacar(float valorSacar){
    if (valorSacar < 0){
        std::cout << "Ops! Saldo insuficiente!" << std::endl;
        return;
    }
    saldo -= valorSacar;
}

void Conta::depositar(float valorDepositar){
    if (valorDepositar < 0){
        std::cout << "Ops! Valor inválido!" << std::endl;
        return;
    }
    saldo += valorDepositar;
}

float Conta::getSaldo() const{
    return saldo;
}

