#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

    Poligono::Poligono(Point p[],int quant)
    {
        n=quant;
        for(int i=0;i<n-1;i++){
            vert[i].x = p[i].x;
            vert[i].y = p[i].y;
        }
    }
    Poligono::Poligono(){
    }
    Poligono::~Poligono(){
        }
        void Poligono::setV(Point p){
                vert[n].x = p.x;
                vert[n].y = p.y;
                n++;
        }
        int Poligono::getV(){
            return n;
        }
        float Poligono::area_poligono(){
            float s1=0,s2=0;

            for (int i = 1;i<n;i++){
                s1=s1+vert[i-1].x*vert[i].y;
                s2=s2+vert[i].x*vert[i-1].y;
            }

            s1=s1+vert[n-1].x*vert[0].y;
            s2=s2+vert[0].x*vert[n-1].y;

            if(s1>s2){
                return ((s1-s2)/2.0);
            }
            else if (s2>s1){
                return ((s2-s1)/2.0);
            }

        }
        void Poligono::translada(float a,float b){
            for(int i=0;i<n;i++){
                vert[i].x=vert[i].x+a;
                vert[i].y=vert[i].y+b;
            }
        }
        void Poligono::rotaciona(double angulo,Point x){
            double m[2][2];
            angulo=(angulo*3.14)/180;
            m[0][0] = cos(angulo);
            m[0][1] =-sin(angulo);
            m[1][0] = sin(angulo);
            m[1][1] = cos(angulo);

            for(int i=0;i<n;i++){
                vert[i].x=m[0][0]*(vert[i].x-x.x)+m[0][1]*(vert[i].y-x.y);
                vert[i].y=m[1][0]*(vert[i].x-x.x)+m[1][1]*(vert[i].y-x.y);
            }
            for(int i=0;i<n;i++){
                vert[i].x=vert[i].x+x.x;
                vert[i].y=vert[i].y+x.y;
            }
        }
        void Poligono::imprime_poligono(){
            for(int i=0;i<n;i++){
                cout<<"("<<vert[i].x<<","<<vert[i].y<<")->";
            }
        }
