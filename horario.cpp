#include "horario.h"
#include <iostream>

Horario::Horario(){
    hora = minuto = segundo = 0;
}

Horario::Horario(int hora, int minuto, int segundo){
    SetHoras(hora);
    SetMinutos(minuto);
    SetSegundos(segundo);
}

void Horario::SetHorario(int hora, int minuto, int segundo){
    SetHoras(hora);
    SetMinutos(minuto);
    SetSegundos(segundo);
}

void Horario::SetHoras(int hora){
    if(hora < 1 || hora > 23){
        this -> hora = 0;
    }else{
        this -> hora = hora;
    }
}

void Horario::SetMinutos(int minuto){
    if(minuto < 1 || minuto > 59){
        this -> minuto = 0;
    }else{
        this -> minuto = minuto;
    }
}

void Horario::SetSegundos(int segundo){
    if(segundo < 1 || segundo > 59){
        this -> segundo = 0;
    }else{
        this -> segundo = segundo;
    }
}

void Horario::AvancaHorario(){
    if(segundo >= 59){
        segundo = 0;
        minuto++;
    }
    if(minuto >= 59){
        minuto = 0;
        hora++;
    }
    if(hora >= 23){
        hora = 0;
    }else{
        segundo++;
    }

}

int Horario::GetHoras(){
    return hora;
}

int Horario::GetMinutos(){
    return minuto;
}

int Horario::GetSegundos(){
    return segundo;
}
