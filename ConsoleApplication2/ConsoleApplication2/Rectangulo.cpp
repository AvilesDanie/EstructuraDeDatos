#include "Rectangulo.h"
#include<iostream>

Rectangulo::Rectangulo(float largo, float ancho,std::string nombre) {
	largo_ = largo;
	ancho_ = ancho;
	nombre_ = nombre;
}

void Rectangulo::setLargo(float largo) {
	largo_ = largo;
}

void Rectangulo::setAncho(float ancho) {
	ancho_ = ancho;
}

void Rectangulo::setNombre(std::string nombre) {
	nombre_ = nombre;
}

float Rectangulo::getLargo() {
	return(largo_);
}

float Rectangulo::getAncho() {
	return(ancho_);
}

std::string Rectangulo::getNombre() {
	return(nombre_);
}

float Rectangulo::perimetro() {
	float perimetro;
	perimetro = largo_ * 2 + ancho_ * 2;
	return(perimetro);
}
float Rectangulo::area() {
	float area;
	area = largo_ * ancho_;
	return(area);
}

std::string Rectangulo::toString() {
	std::string str;
	str = "Largo: " + std::to_string(static_cast<int>(largo_)) + ", Ancho: " + std::to_string(static_cast<int>(ancho_)) + ", Nombre: " + nombre_;
	return(str);
}