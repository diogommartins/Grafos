//
//  main.cpp
//  Graph
//
//  Created by Diogo  Martins on 12/1/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#include <iostream>
//#include "GrafoLista.h"
#include "GrafoMatriz.hpp"


int main(int argc, const char * argv[]) {
//    GrafoLista grafoAdj = new GrafoLista(3);
    GrafoMatriz *matriz = new GrafoMatriz(5);

    matriz->adicionarAresta(3, 2);
    matriz->imprimeMatriz();
    return 0;
}
