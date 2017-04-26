#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

        Point::Point(float a,float b){
            x = a;
            y = b;
        }
        Point::~Point(){

        }

        void Point::setX(float a){
            x = a;

        }

        void Point::setY(float b){
            y = b;
        }

        void Point::setXY(float a,float b){
            x = a;
            y = b;
        }

        float Point::getX(){
            return x;
        }

        float Point::getY(){
            return y;
        }

        Point Point::add(Point p1){
            Point p2;
            p2.x = x + p1.x;
            p2.y = y + p1.y;
            return p2;
        }

        Point Point::sub(Point p1){
            Point p2;
            p2.x = x - p1.x;
            p2.y = y - p1.y;
            return p2;
        }

        float Point::norma(){
            return sqrt(x*x+y*y);
        }

        void Point::translada(float a, float b){
            x = x + a;
            y = y + b;
        }

        //Point translada(float a, float b);
        void Point::imprime(){
            cout<< " ("<< x << " , "<<y <<")"<<endl;
        }



