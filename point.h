#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class cria um ponto
 */
class Point{
public:
    float x;
    float y;
public:
    /**
     * @brief Point define o ponto
     * @param a primeira posicao do ponto
     * @param b segunda posicao do ponto
     */
    Point(float a=0,float b=0);
    ~Point();

    /**
     * @brief setX atribui valor a X
     * @param a valor atribuido a X
     */
    void setX(float a);
    /**
     * @brief setY atribui valor a Y
     * @param b valor atribuido a Y
     */
    void setY(float b);
    /**
     * @brief setXY atribui valor a X e a Y ao mesmo tempo
     * @param a valor atribuido a X
     * @param b valor atribuido a Y
     */
    void setXY(float a,float b);
    /**
     * @brief getX busca o valor de X
     * @return o valor de x
     */
    float getX();
    /**
     * @brief getY busca o valor de Y
     * @return o valor de y
     */
    float getY();
    /**
     * @brief add soma dos pontos
     * @param p1 ponto fornecido ao usuario
     * @return devolve p + p1
     */
    Point add(Point p1);
    /**
     * @brief sub subtracao dos pontos
     * @param p1 ponto fornecido ao usuario
     * @return p - p1
     */
    Point sub(Point p1);
    /**
     * @brief norma calcula a distancia
     * @return devolve a distancia
     */
    float norma();
    /**
     * @brief translada a posicao dos pontos sao transladadas em a e b
     * @param a valor fornecido pelo usuario
     * @param b valor fornecido pelo usuario
     */
    void translada(float a, float b);
    /**
     * @brief imprime
     */
    void imprime();
};

#endif // POINT_H
