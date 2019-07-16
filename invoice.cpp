#include "invoice.h"
#include <iostream>

invoice::invoice(int numItem, int qItem, double precoItem, string descricao){
    setNumItem(numItem);
    setQItem(qItem);
    setPrecoItem(precoItem);
    setDescricao(descricao);
}

int invoice::getNumItem(){
    return numItem;
}

int invoice::getQItem(){
    return qItem;
}

double invoice::getPrecoItem(){
    return precoItem;
}

string invoice::getDescricao(){
    return descricao;
}

double invoice::getInvoiceAmount(){
    return qItem * precoItem;
}

void invoice::setNumItem(int numItem){
    this -> numItem = numItem;
}

void invoice::setQItem(int qItem){
    if(qItem < 1)
        this -> qItem = 0;
    else
        this -> qItem = qItem;
}

void invoice::setPrecoItem(double precoItem){
    if(precoItem < 1)
        this -> precoItem = 0;
    else
        this -> precoItem = precoItem;
}

void invoice::setDescricao(string descricao){
    this -> descricao = descricao;
}
