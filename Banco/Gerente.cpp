//
// Created by EduDeveloper on 16/01/2022.
//

#include "Gerente.h"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento, std::string senha)
    :Funcionario(cpf,nome,salario, diaDoPagamento), Autenticavel(senha){

}

float Gerente::bonificacao() const{
    return recuperaSalario() * 0.5;
};

