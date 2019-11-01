#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include "tipos.h"

using namespace std;





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