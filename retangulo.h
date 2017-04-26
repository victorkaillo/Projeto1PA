#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"

class Retangulo: public Poligono
{
private:
    float x;
    float y;
    float l;
    float h;

public:

    Retangulo(float a,float b, float larg,float altura);

    Retangulo();
    ~Retangulo();
    /**
     * @brief setX atribui valor a X
     * @param ax
     */
    void setX(float ax);
    /**
     * @brief setY atribui valor a Y
     * @param ay
     */
    void setY(float ay);
    /**
     * @brief setL atribui valor a L
     * @param al
     */
    void setL(float al);
    /**
     * @brief setH atribui valor a H
     * @param ah
     */
    void setH(float ah);
    /**
     * @brief getX busca o valor de X
     * @return
     */
    float getX();
    /**
     * @brief getY busca o valor de Y
     * @return
     */
    float getY();
    /**
     * @brief getL busca o valor de L
     * @return
     */
    float getL();
    /**
     * @brief getH busca o valor de H
     * @return
     */
    float getH();
};

#endif // RETANGULO_H
