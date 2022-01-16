//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_CONTA_H
#define BANCO_CONTA_H
#pragma once
#include <string>
#include "Titular.h"

class Conta{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    Conta(std::string numero,Titular titular);
    virtual ~Conta();
    void sacar(float valorSacar);
    void depositar(float valorADepositar);
    float recuperaSaldo() const;
    virtual float taxaDeSaque() const = 0;
};
#endif //BANCO_CONTA_H
