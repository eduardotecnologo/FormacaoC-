//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_GERENTE_H
#define BANCO_GERENTE_H
#pragma once
#include "Funcionario.h"
#include "Autenticavel.h"
#include "DiaDaSemana.h"

class Gerente final : public Funcionario, public Autenticavel{
    public:
        Gerente(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento, std::string senha);
        float bonificacao() const;
};


#endif //BANCO_GERENTE_H
