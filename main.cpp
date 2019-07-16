#include <iostream>
#include "pessoa.h"
#include "invoice.h"
#include "data.h"
#include "horario.h"
#include "voo.h"
#include "controlePagamento.h"

using namespace std;

int main()
{
    /*
    ==============================================================================================================================
    Questão 1)

    a)Classes é o que vai definir o que o objeto vai possuir, isto é, dita todos os atributos e metódos que o objeto irá possuir.
      Objeto é o que é criado a partir da classe (molde), vai possuir todos os atributos e metódos declarados previamente na cla-
      sse, vai ser um objeto de determinada classe.

    b)Construtor é um metodo que inicia o objeto com valores padrões para que não possua nenhum lixo de memória, por exemplo, ini-
      ciar algum valor com 0.
    c)Encapsulamento possui um grande benefício que é proteger os seus dados, de forma que um usuário não tenha acesso a informa-
      ções importantes como notas escolares, ou extratos financeiros.
    ==============================================================================================================================
    */

    //Retire o bloco de comentários do teste que deseja realizar, e compile o programa.

        //Pagamentos:
    /*
    controlePagamento *controlPag = new controlePagamento();

    controlPag->setPagamentos("Victor Gorgonho", 910);
    controlPag->setPagamentos("Victor Gorgonho", 1000);
    controlPag->setPagamentos("Victor Gorgonho", 1500);

    cout << "Total pago: " << controlPag->calculaTotalDePagamentos() << endl;

    if(controlPag->existePagamentoParaFuncionario("Victor Gorgonho"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    if(controlPag->existePagamentoParaFuncionario("Carlos Gabriel"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    delete(controlPag);
    */

        //Voo:
    /*
    Voo *v1 = new Voo();

    cout << "(construtor padrao) Numero do voo: " << v1->getNumVoo() << "\nData: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno()
         << "\nHoras: " << v1->getHorario().GetHoras() << ":" << v1->getHorario().GetMinutos() << ":" << v1->getHorario().GetSegundos() << endl;

    cout << "A proxima cadeira livre eh: " << v1->proximoLivre() + 1 << endl;

    cout << "A cadeira 9 esta ";
    if(v1->verifica(9))
        cout << "disponivel." << endl;
    else
        cout << "ocupada." << endl;

    if(v1->ocupa(7))
        cout << "Cadeira ocupada com sucesso!" << endl;
    else
        cout << "Cadeira indisponivel." << endl;

    cout << v1->vagas() << " vagas disponiveis." << endl;
    cout << "Numero do voo: " << v1->getNumVoo() << endl;
    cout << "Data: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno() << endl;
    cout << "Horas: " << v1->getHorario().GetHoras() << ":" << v1->getHorario().GetMinutos() << ":" << v1->getHorario().GetSegundos() << endl;

    delete(v1);
    */

        //Horario:
    /*
    Horario *h1 = new Horario();
    Horario *h2 = new Horario(15,51,20);

    cout << "A hora 1 (construtor padrao)eh: " << h1->GetHoras() << ":" << h1->GetMinutos() << ":" << h1->GetSegundos() << endl;

    h1->SetHoras(16);
    h1->SetMinutos(17);
    h1->SetSegundos(18);
    cout << "A hora 1 (sets) eh: " << h1->GetHoras() << ":" << h1->GetMinutos() << ":" << h1->GetSegundos() << endl;

    h1->SetHorario(12,59,59);
    cout << "A hora 1 (setHorario) eh: " << h1->GetHoras() << ":" << h1->GetMinutos() << ":" << h1->GetSegundos() << endl;

    cout << "A hora 2 (construtor parametros) eh: " << h2->GetHoras() << ":" << h2->GetMinutos() << ":" << h2->GetSegundos() << endl;

    h1->AvancaHorario();
    cout << "A hora 1 (avancaHorario) eh: " << h1->GetHoras() << ":" << h1->GetMinutos() << ":" << h1->GetSegundos() << endl;

    delete(h1);
    delete(h2);
    */

        //Data:
    /*
    Data *d1 = new Data();
    Data *d2 = new Data(15,2,2018);
    int aux;
    bool aux1;

    cout << "A data 1(construtor padrao) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;

    d1->setDia(1);
    d1->setMes(1);
    d1->setAno(2019);

    cout << "A data 1(sets) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
    cout << "A data 2 eh: " << d2->getDia() << " de " << d2->getMesExtenso() << " de " << d2->getAno() << endl;

    aux = d1->Compara(*d2);

    //data atual: 1/1/2019
    //data parametro: 15/2/2018
    if(aux == 1){
        cout << "\nA data atual eh maior que a data do parametro" << endl;
    }else if(aux == -1){
        cout << "\nA data do parametro eh maior que a data atual" << endl;
    }else{
        cout << "\nA data atual e a data do parametro sao iguais" << endl;
    }

    aux1 = d1->isBissexto();
    if(aux1)
        cout << d1->getAno() << " eh bissexto." << endl;
    else
        cout << d1->getAno() << " nao eh bissexto." << endl;

    d1->setAno(2016);
    aux1 = d1->isBissexto();
    if(aux1)
        cout << d1->getAno() << " eh bissexto." << endl;
    else
        cout << d1->getAno() << " nao eh bissexto." << endl;

    delete(d1);
    delete(d2);
    */

        //Invoice:
    /*
    invoice *f1 = new invoice(79,2,3.50,"Batatas douradas");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    cout << "Preco final: " << f1->getInvoiceAmount() << endl << endl;

    f1->setNumItem(54);
    f1->setQItem(-1);
    f1->setPrecoItem(-100);
    f1->setDescricao("d/dx qualquer coisa");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;

    delete(f1);
    */

        //Pessoa:
    /*
    Pessoa *p1 = new Pessoa("Franklin Anthony","(83) 98807-2528",20);
    Pessoa *p2 = new Pessoa("Franklin nao Anthony");

    cout << "Nome2: "<< p2->getNome() << endl << endl;

    p2->setIdade(19);
    p2->setNome("Victor Gorgonho");
    p2->setTelefone("(83) 98619-5322");

    cout << "Nome1: "<< p1->getNome() << "\nTelefone1: " << p1->getTelefone() << "\nIdade1: " << p1->getIdade()<< endl << endl;
    cout << "Nome2: "<< p2->getNome() << "\nTelefone2: " << p2->getTelefone() << "\nIdade2: " << p2->getIdade()<< endl;

    delete(p1);
    delete(p2);
    */

    return 0;
}
