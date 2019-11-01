//
// Created by ASUS on 01/11/2019.
//

#ifndef UNTITLED1_ORDEN_H
#define UNTITLED1_ORDEN_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>



#include "tipos.h"
#include "coordenada.h"


struct Orden
{
Coordenada posicion_final; Texto Producto;
    Orden(Coordenada p_posicion, Texto p_producto);
};


#endif //UNTITLED1_ORDEN_H
