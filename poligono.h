#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{

private:
    Point vert[100];
    int n=0;
public:
    /**
     * @brief Poligono conjunto de pontos
     * @param p vetor
     * @param quant quantidade de termos
     */
    Poligono(Point p[100],int quant);
    /**
     * @brief Poligono
     */
    Poligono();

    ~Poligono();
    /**
     * @brief setV adiciona um vertice
     * @param p vertice fornecido pelo usuario
     */
    void setV(Point p);
    /**
     * @brief getV retorna a quantidade de vertice
     * @return
     */
    int getV();
    /**
     * @brief area_poligono calcula a area do poligono
     * @return fornece a area
     */
    float area_poligono();
    /**
     * @brief translada todos os pontos do poligono
     * @param a parametro passado pelo usuario
     * @param b parametro passado pelo usuario
     */
    void translada(float a,float b);
    /**
     * @brief rotaciona o poligono em relacao a um ponto
     * @param teta angulo de rotacao
     * @param x
     */
    void rotaciona(double teta,Point x);

    void imprime_poligono();

};

#endif // POLIGONO_H
