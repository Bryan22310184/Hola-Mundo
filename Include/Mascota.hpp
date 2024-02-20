#pragma once
//Para que se importe una sola vez
#include <Alimento.hpp>

class Mascota
{
private:
    //implementacion oculta
    int Energia;
    int Felicidad;
public:
    //interfaz
    Mascota(){
        this->Energia=0;
        this->Felicidad=0;
    }
    ~Mascota(){}
    void Comer(Alimento alimento){
        Energia+=alimento.ExtraerEnergia();
    }
    void Jugar(){
        Energia+=1;
        Felicidad+=1;
    }
    int LeerFelicidad(){
        return this->Felicidad;
    }
    int LeerEnergia(){
        return this->Energia;
    }
};
