//
//  GrafoMatriz.hpp
//  Graph
//
//  Created by Diogo  Martins on 12/1/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#ifndef GrafoMatriz_hpp
#define GrafoMatriz_hpp

#include <stdio.h>
#include <iostream>

class GrafoMatriz
{
private:
    bool** matriz;
    int vertices;

public:
    GrafoMatriz(int vertices);
    void adicionarAresta(int i, int j);
    void removerAresta(int i, int j);
    bool existeAresta(int i, int j);
    void imprimeGrafo();
    void imprimeMatriz();
    ~GrafoMatriz();
};

#endif /* GrafoMatriz_hpp */
