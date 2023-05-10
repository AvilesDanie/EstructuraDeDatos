#include "Fraccion.h"
#include <iostream>

using namespace std;

Fraccion::Fraccion(int num, int den) {
    numerador = num;
    denominador = den;
}

Fraccion Fraccion::suma(Fraccion sumando) {
    int nuevo_numerador = numerador * sumando.denominador + denominador * sumando.numerador;
    int nuevo_denominador = denominador * sumando.denominador;
    return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::resta(Fraccion sustraendo) {
    int nuevo_numerador = numerador * sustraendo.denominador - denominador * sustraendo.numerador;
    int nuevo_denominador = denominador * sustraendo.denominador;
    return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::multiplicacion(Fraccion multiplicador) {
    int nuevo_numerador = numerador * multiplicador.numerador;
    int nuevo_denominador = denominador * multiplicador.denominador;
    return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::division(Fraccion divisor) {
    int nuevo_numerador = numerador * divisor.denominador;
    int nuevo_denominador = denominador * divisor.numerador;
    return Fraccion(nuevo_numerador, nuevo_denominador);
}

void Fraccion::simplificar() {
    int mcd = calcular_mcd(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

void Fraccion::imprimir() {
    cout << numerador << "/" << denominador << endl;
}

int Fraccion::calcular_mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return calcular_mcd(b, a % b);
    }
}


Fraccion::Fraccion() {
    numerador = 0;
    denominador = 1;
}

int Fraccion::getNumerador() const {
    return numerador;
}

void Fraccion::setNumerador(int num) {
    numerador = num;
}

int Fraccion::getDenominador() const {
    return denominador;
}

void Fraccion::setDenominador(int den) {
    denominador = den;
}

Fraccion::~Fraccion() {
}