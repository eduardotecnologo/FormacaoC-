//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_CONTAPOUPANCA_H
#define BANCO_CONTAPOUPANCA_H
#pragma once
#include "Conta.h"

class ContaPoupanca final : public Conta{
    public:
        ContaPoupanca(std::string numero, Titular titular);
        float taxaDeSaque() const override;
};
#endif //BANCO_CONTAPOUPANCA_H
