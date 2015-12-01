//
//  GrafoMatriz.cpp
//  Graph
//
//  Created by Diogo  Martins on 12/1/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#include "GrafoMatriz.hpp"

GrafoMatriz::GrafoMatriz (int vertices)
{
    this->vertices = vertices;
    matriz = new bool*[vertices];

    for (int i=0; i<vertices; i++)
    {
        matriz[i] = new bool[vertices];     // Popula com vetor de boleanos
        for (int j=0; j<vertices; j++)
            matriz[i][j] = false;           // Posição inicia sem aresta
    }
}

GrafoMatriz::~GrafoMatriz()
{
    for (int i=0; i<vertices; i++)
        delete[] matriz[i];                 // Deleta vetores
    delete [] matriz;                       // Deleta matriz
}

bool GrafoMatriz::existeAresta(int i, int j)
{
    return matriz[i][j];
}

void GrafoMatriz::adicionarAresta(int i, int j)
{
    matriz[i][j] = true;
}

void GrafoMatriz::removerAresta(int i, int j)
{
    matriz[i][j] = false;
}

void GrafoMatriz::imprimeGrafo()
{
}

void GrafoMatriz::imprimeMatriz()
{
    for (int i=0; i<vertices; i++)
        std::cout << "\t" <<  i ;
    std::cout << "\n";
}