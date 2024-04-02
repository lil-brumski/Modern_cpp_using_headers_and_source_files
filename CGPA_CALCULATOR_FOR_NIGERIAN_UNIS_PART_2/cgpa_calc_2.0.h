#ifndef CGPA_2
#define CGPA_2

#include <iostream>

class Student{
    protected:
      std::string name;
      int EEE401;
      int EEE402;
      int EEE403;
      int EEE404;
      char E41;
      char E42;
      char E43;
      char E44;
      
     public:       
       Student(std::string n, int e1, int e2, int e3, int e4, char e41, char e42, char e43, char e44) : name(n), EEE401(e1), EEE402(e2), EEE403(e3), EEE404(e4), E41(e41), E42(e42), E43(e43), E44(e44) {}
       
       virtual void display(){
       }
       
       virtual ~Student(){
       }
    
};

#endif