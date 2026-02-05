#ifndef class_h
#define class_h

#include "constand.h"

class Cylinder{
    private:
        double pri_radius{1};
        double pri_height{2};

    public:
        Cylinder() =default;
        Cylinder(double radius, double height){
            pri_height = height;
            pri_radius = radius;
        }

        double volume(){
            return pri_height * PI * pri_radius * pri_radius;
        }

        double get_pri_radius(){
            return pri_radius;
        }

        double get_pri_height(){
            return pri_height;
        }

        void set_pri_radius(double parm_radius){
            pri_radius = parm_radius;
        }

        void set_pri_height(double parm_height){
            pri_height = parm_height;
        }

};

#endif