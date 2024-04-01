#ifndef FLASH_H
#define FLASH_H

#include <iostream>
#include <string>

class Speed{
    private:
      std::string name;
      int age;
      std::string gender;
      int velocity;
      
    public:
      Speed(std::string n, int a, std::string g, int v) : name(n), age(a), gender(g), velocity(v) {}
      
      void display(){
          std::cout<<"Your name is "<<name<<".\nYou are "<<age<<" year old "<<gender<<".\nYou're the flash and your top speed is "<<velocity<<"m/s."<<std::endl;
      }
      
};

#endif