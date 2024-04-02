#ifndef JOHN_CGPA
#define JOHN_CGPA

#include "cgpa_calc_2.0.h"
#include <iostream>

class John : public Student{
    public:
    
    John(std::string n, int e1, int e2, int e3, int e4, char e41, char e42, char e43, char e44)  : Student(n, e1, e2, e3, e4, e41, e42, e43, e44) {}
    
    void display() override {
        std::cout<<"Name: "<<name<<std::endl;
        
        //
        if(EEE401 >= 70 && EEE401 <= 100){
            E41 = 'A';
        }
        else if(EEE401 >= 60 && EEE401 <= 69){
            E41 = 'B';
        }
        else if(EEE401 >= 50 && EEE401 <= 59){
            E41 = 'C';
        }
        else if(EEE401 >= 45 && EEE401 <= 49){
            E41 = 'D';
        }
        else if(EEE401 >= 40 && EEE401 <= 44){
            E41 = 'E';
        }
        else if(EEE401 >= 0 && EEE401 <= 39){
            E41 = 'F';
        }
        std::cout<<"EEE401 grade: "<<E41<<std::endl;

        //        
        if(EEE402 >= 70 && EEE402 <= 100){
            E42 = 'A';
        }
        else if(EEE402 >= 60 && EEE402 <= 69){
            E42 = 'B';
        }
        else if(EEE402 >= 50 && EEE402 <= 59){
            E42 = 'C';
        }
        else if(EEE402 >= 45 && EEE402 <= 49){
            E42 = 'D';
        }
        else if(EEE402 >= 40 && EEE402 <= 44){
            E42 = 'E';
        }
        else if(EEE402 >= 0 && EEE402 <= 39){
            E42 = 'F';
        }
        std::cout<<"EEE402 grade: "<<E42<<std::endl;

         //     
         if(EEE403 >= 70 && EEE403 <= 100){
            E43 = 'A';
        }
        else if(EEE403 >= 60 && EEE403 <= 69){
            E43 = 'B';
        }
        else if(EEE403 >= 50 && EEE403 <= 59){
            E43 = 'C';
        }
        else if(EEE403 >= 45 && EEE403 <= 49){
            E43 = 'D';
        }
        else if(EEE403 >= 40 && EEE403 <= 44){
            E43 = 'E';
        }
        else if(EEE403 >= 0 && EEE403 <= 39){
            E43 = 'F';
        }
        std::cout<<"EEE403 grade: "<<E43<<std::endl;
        
        //
        if(EEE404 >= 70 && EEE404 <= 100){
            E44 = 'A';
        }
        else if(EEE404 >= 60 && EEE404 <= 69){
            E44 = 'B';
        }
        else if(EEE404 >= 50 && EEE404 <= 59){
            E44 = 'C';
        }
        else if(EEE404 >= 45 && EEE404 <= 49){
            E44 = 'D';
        }
        else if(EEE404 >= 40 && EEE404 <= 44){
            E44 = 'E';
        }
        else if(EEE404 >= 0 && EEE404 <= 39){
            E44 = 'F';
        }
        std::cout<<"EEE404 grade: "<<E44<<std::endl;
    }
     
    ~John(){
     }
    
};

#endif