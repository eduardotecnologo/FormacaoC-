//
// Created by EduDeveloper on 16/01/2022.
//

#include "ContaPoupanca.h"
#include <iostream>
#include <locale>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):Conta(numero, titular){

}

float ContaPoupanca::taxaDeSaque() const {
    setlocale(LC_ALL, "portuguese");
    std::cout << "Chamando método sacar da conta poupança: " << std::endl;
    return 0.03;
}

