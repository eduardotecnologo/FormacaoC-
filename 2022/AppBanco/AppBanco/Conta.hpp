#pragma once
#ifndef Conta_h
#define Conta_h

#include <string>

class Conta{
private:
    std::string numero;
    std::string nomeTitular;
    std::string cpfTitular;
    float saldo;
    
public:
    Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
    
    void sacar(float valorSacar);
    void depositar(float valorDepositar);
    
    float getSaldo() const;
};

#endif /* Conta_h */
