//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_CAIXA_H
#define BANCO_CAIXA_H
#pragma once
#include "Funcionario.h"
#include "DiaDaSemana.h"

class Caixa final : public Funcionario{
public:
    Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDaSemana);
    float bonificacao() const;
};
#endif //BANCO_CAIXA_H
