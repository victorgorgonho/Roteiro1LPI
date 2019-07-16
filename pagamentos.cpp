#include "pagamentos.h"

pagamentos::pagamentos()
{
    valorPagamento = 0;
    nomeFuncionario = " ";
}
double pagamentos::getValorPagamento(){
    return valorPagamento;
}

std::string pagamentos::getNomeFuncionario(){
    return nomeFuncionario;
}

void pagamentos::setValorPagamento(double valor){
    if(valor > 0)
        valorPagamento = valor;
    else
        valorPagamento = 0;
}

void pagamentos::setNomeFuncionario(std::string nome){
    nomeFuncionario = nome;
}
