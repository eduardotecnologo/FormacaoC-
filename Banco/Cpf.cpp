//
// Created by EduDeveloper on 16/01/2022.
//

#pragma hdrstop
#include "Cpf.h"
#pragma package(smart_init)

Cpf::Cpf(std::string numero):numero(numero){
    // Valida��o de CPF
}

std::string Cpf::getNumero(){
    return numero;
}

