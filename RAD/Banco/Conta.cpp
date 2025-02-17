﻿#include "Conta.h"
#include <iostream>

int Conta::numeroDeContas = 0;

  Conta::Conta(std::string numero,Titular titular)
     :numero(numero),
	 titular(titular),
	 saldo(0) {
	 numeroDeContas++;
}

  void Conta::sacar(float valorASacar){
	    if(valorASacar < 15){
			std::cout << "Ops! Não é possível sacar valores abaixo de R$15,00" << std::endl;
			return;
		}

		float tarifaSaque = valorASacar * 0.05;
		float valorDoSaque = valorASacar + tarifaSaque;
		
		if(valorDoSaque > saldo){
			std::cout << "Ops! Você não possui saldo suficiente." << std::endl;
		}else{
			saldo -= valorDoSaque;
		}
			 	
 }

 void Conta::depositar(float valorADepositar){
	if(valorADepositar < 10){
			std::cout << "Ops! Não é possível depositar valores abaixo de R$10,00" << std::endl;
		}else{
			saldo += valorADepositar;
		}
 }

 float Conta::getSaldo() const{
			return saldo;
		}

int Conta::getNumeroDeConta(){
    return numeroDeContas;
}