cmake_minimum_required(VERSION 3.21)
project(Banco)

set(CMAKE_CXX_STANDARD 14)

add_executable(Banco main.cpp Caixa.cpp Caixa.h Conta.cpp Conta.h ContaCorrente.cpp ContaCorrente.h ContaPoupanca.cpp ContaPoupanca.h Cpf.cpp Cpf.h Funcionario.cpp Funcionario.h Gerente.cpp Gerente.h Pessoa.cpp Pessoa.h Titular.cpp Titular.h Autenticavel.cpp Autenticavel.h DiaDaSemana.h)
