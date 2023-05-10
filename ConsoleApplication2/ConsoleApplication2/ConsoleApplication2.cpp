

#include <iostream>
#include "Rectangulo.h"

int main()
{
    int a=32;
    float b = 34.32;
    std::cout << "Hello World!\n";
    std::cout << "aaaaaaaaaaaa " << a << " "<<b << std::endl;

    Rectangulo r2(0,0,"");
    std::string nombre;
    float largo, ancho,perimetro,area;
    std::cout << "Ingrese el largo: ";
    std::cin >> largo;
    std::cout << "Ingrese el ancho: ";
    std::cin >> ancho;
    std::cout << "Ingrese el nombre del rectangulo: ";
    std::cin >> nombre;

    r2.setLargo(largo);
    r2.setAncho(ancho);
    r2.setNombre(nombre);
    std::cout << largo << " es el largo." << std::endl;
    std::cout << ancho << " es el ancho." << std::endl;
    std::cout << largo<<", " << ancho <<" y "<< nombre << " es el largo, ancho y nombre respectivamente." << std::endl;
    std::cout << "El perimetro es: " << r2.perimetro() << std::endl;
    std::cout << "El area es: " << r2.area() << std::endl;
    perimetro = r2.perimetro();
    area = r2.area();
    std::cout << area << " y " << perimetro << " son el area y el perimetro respectivamente." << std::endl;
    std::string str;
    str = r2.toString();
    std::cout << str << std::endl;


}


