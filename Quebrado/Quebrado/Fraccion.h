#pragma once

#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion();

    Fraccion(int num, int den);
    ~Fraccion();

    Fraccion suma(Fraccion otra);
    Fraccion resta(Fraccion otra);
    Fraccion multiplicacion(Fraccion otra);
    Fraccion division(Fraccion otra);
    void simplificar();
    void imprimir();

    int getNumerador() const;
    void setNumerador(int num);
    int getDenominador() const;
    void setDenominador(int den);


private:
    int calcular_mcd(int a, int b);
};

#endif

