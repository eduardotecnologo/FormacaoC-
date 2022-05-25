#include "Conta.hpp"

#include <iostream>

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular){
    this->numero = numero;
    this->nomeTitular = nomeTitular;
    this->cpfTitular = cpfTitular;
    this->saldo = 0;
}

void Conta::sacar(float valorSacar){
    if(valorSacar < 0 ){
        std::cout << "Ops! Você não possui saldo suficiente para saque." << std::endl;
        return;
    }
    if(valorSacar > saldo){
        std::cout << "Ops! Valor a sacar maior que o saldo disponível." << std::endl;
        return;
    }
    saldo-= valorSacar;
}

void Conta::depositar(float valorDepositar){
    if(valorDepositar < 5){
        std::cout << "Ops!Você precisa digitar uma valor superior a R$5,00 para depósito" << std::endl;
        return;
    }
    saldo += valorDepositar;
}

float Conta::getSaldo() const{
    return saldo;
}
