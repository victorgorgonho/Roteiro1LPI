#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa{
    private:
        string nome;
        string telefone;
        int idade;

    public:
        Pessoa(string nome);
        Pessoa(string nome, string telefone, int idade);
        string getNome();
        string getTelefone();
        int getIdade();
        void setNome(string nome);
        void setTelefone(string telefone);
        void setIdade(int idade);
};

#endif // PESSOA_H
