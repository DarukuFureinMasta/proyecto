#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include "tipos.h"

using namespace std;

struct Coordenada
{
    Entero x; Entero y;
    Coordenada(int p_x, int p_y);
};

struct Orden
{
    Coordenada posicion_final; Texto Producto;
    Orden(Coordenada p_posicion, Texto p_producto);
};

class Robot {
private:
    Coordenada m_Posicion;
    vector<Orden> m_Cola;
    Texto m_Producto;
    Entero m_TiempoEspera;
public:
    Robot();
    Robot(int x, int y);
    Robot(Coordenada origen);

    void setProducto(Texto producto);       Texto getProducto();
    void setPosicion(Coordenada posicion);  Coordenada getPosicion();
    void setCola(vector<Orden> cola);       vector<Orden> getCola();

    void addCola(Orden nuevaOrden);
    void ir_a(Coordenada pFinal);
    void ejecutar(Orden orden);
    void recoger(Coordenada posicion, string producto);
};

int main()
{
    Texto Ruta_Entrada="C:\\Users\\Intel\\Desktop\\f.txt";
    Texto outPath="C:\\Users\\Intel\\Desktop\\chad.txt";

    ifstream infile;
    ofstream outfile;

    infile.open(Ruta_Entrada);
    outfile.open(outPath);
    if(! infile) exit(-1);

    unsigned int nRobots = 3;
    vector<vector<Texto>> Lineas(nRobots);
    unsigned int Robot = 0;
    for (Texto line; getline(infile, line); Robot++)
    {
        stringstream ss(line);
        Texto parsed;
        for (; getline(ss, parsed, ' ');)
            Lineas[Robot].push_back(parsed);
    }
    for (const auto & linea : Lineas) {
        for (const auto &item : linea)
            std::cout << item << ' ';
        std::cout << std::endl;
    }
    return 0;
}