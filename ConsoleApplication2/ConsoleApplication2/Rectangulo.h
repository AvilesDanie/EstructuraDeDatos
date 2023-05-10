#pragma once
#include <string>

class Rectangulo
{
private:
	float largo_, ancho_;
	std::string nombre_;

public:
	Rectangulo(float largo, float ancho, std::string nombre);
	void setLargo(float largo);
	void setAncho(float ancho);
	void setNombre(std::string nombre);
	float getLargo();
	float getAncho();
	std::string getNombre();
	float perimetro();
	float area();
	std::string toString();
};

