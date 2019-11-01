//
// Created by ASUS on 01/11/2019.
//

#ifndef UNTITLED1_ROBOT_H
#define UNTITLED1_ROBOT_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include "tipos.h"
#include "coordenada.h"

using namespace std;



class Robot {
private:
    Coordenada m_Posicion;
    vector<Orden> m_Cola;
    Texto m_Producto;
    Entero m_TiempoEspera;
public:
    Robot();
    Robot(Entero x, Entero y);
    Robot(Coordenada origen);

    void setProducto(Texto producto);       Texto getProducto();
    void setPosicion(Coordenada posicion);  Coordenada getPosicion();
    void setCola(vector<Orden> cola);       vector<Orden> getCola();

    void addCola(Orden nuevaOrden);
    void ir_a(Coordenada pFinal);
    void ejecutar(Orden orden);
    void recoger(Coordenada posicion, string producto);
};


#endif //UNTITLED1_ROBOT_H
