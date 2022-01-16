//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_FUNCIONARIO_H
#define BANCO_FUNCIONARIO_H
#pragma once
#include "DiaDaSemana.h"
#include "Pessoa.h"
#include "Cpf.h"
#include <string>

class Funcionario:public Pessoa{
private:
    float salario;
    DiaDaSemana diaDoPagamento;

public:
    Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
    std::string recuperaNome()const;
    float recuperaSalario()const;
    virtual float bonificacao() const = 0;
};


#endif //BANCO_FUNCIONARIO_H
