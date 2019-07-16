#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H
#include <iostream>

class pagamentos
{
    private:
        double valorPagamento;
        std::string nomeFuncionario;
    public:
        pagamentos();
        double getValorPagamento();
        std::string getNomeFuncionario();
        void setValorPagamento(double valor);
        void setNomeFuncionario(std::string nome);

};

#endif // PAGAMENTOS_H
