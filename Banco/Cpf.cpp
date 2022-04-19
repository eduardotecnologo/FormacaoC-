//
// Created by EduDeveloper on 16/01/2022.
//

#pragma hdrstop
#include "Cpf.h"
#pragma package(smart_init)

Cpf::Cpf(std::string numero):numero(numero){
    // Validação de CPF
}

std::string Cpf::recuperaNumero(){
    return numero;
}

