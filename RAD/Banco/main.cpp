﻿#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrente.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"

using namespace std;

void exibeSaldo(const Conta& conta){
    cout << "O saldo da conta é: " << conta.getSaldo() << endl;
}

void RealizaSaque(Conta& conta){
    conta.sacar(200);
}

int main(){
	Titular titular(Cpf("123.456.789-10"),"Eduardo");

	ContaPoupanca umaConta("123456", titular);
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	exibeSaldo(umaConta);

	Titular outro(Cpf("987.654,321-10"),"Alexandre");
	ContaCorrente outraContaCorrente("654321", titular);
	outraConta.depositar(300);

	ContaCorrente outraContaCorrente("546312", titular);

	outraConta.transferePara(umaConta, 250);

	ExibeSaldo(outraConta);
	ExibeSaldo(outraContaCorrente);

	cout << "Número de contas: " << Conta::GetNumeroDeConta()<< endl;

	Funcionario funcionario(Cpf("123.456.789-10"), "Aexandre Eduardo", 1000);

	cout << "Nome do Funcionário: " << funcionario.getNome() << endl;

	system("PAUSE");
}
