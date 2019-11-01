//
// Created by ASUS on 01/11/2019.
//

#ifndef UNTITLED1_COORDENADA_H
#define UNTITLED1_COORDENADA_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include "tipos.h"
#include "coordenada.h"
#include "orden.h"

using namespace std;



struct Coordenada
{
    Entero x; Entero y;
    Coordenada(int p_x, int p_y);
};


#endif //UNTITLED1_COORDENADA_H
