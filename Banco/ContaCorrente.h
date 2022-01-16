//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_CONTACORRENTE_H
#define BANCO_CONTACORRENTE_H
#pragma once
#include "Conta.h"

class ContaCorrente final:public Conta{
public:
    ContaCorrente(std::string numero, Titular titular);
    float taxaDeSaque() const override;
    void transferePara(Conta& conta, float valor);
};


#endif //BANCO_CONTACORRENTE_H
