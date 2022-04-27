#ifndef Conta_hpp
#define Conta_hpp

#pragma once
#include <string>

class Conta{
    
public:
    static int numeroDeContas;
    
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    
    float saldo;
    
public:
    Conta(std::string numero, std::string cpfTitular, std::string nomeTitular);
    ~Conta();
    void sacar(float valorSacar);
    void depositar(float valorDepositar);
    float getSaldo() const;
    void setNomeTitular(std::string nome);
};

#endif /* Conta_hpp */
