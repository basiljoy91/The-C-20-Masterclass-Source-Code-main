#ifndef class_h
#define class_h

#include "const.h"

class Cylinder{
    private:
        double prim_radius = 1;
        double prim_height = 1;
    
    public:
        Cylinder() = default;
        Cylinder(double radius, double height){
            prim_height = height;
            prim_radius = radius;

        }

        double volume(){
            return PI * prim_radius * prim_radius * prim_height;
        }

        double get_prim_radius(){
            return prim_radius;
        }

        double get_prim_height(){
            return prim_height;
        }

        void set_prim_height(double set_height){
            prim_height = set_height;
        }

        void set_prim_radius(double set_radius){
            prim_radius = set_radius;
        }

};

#endif