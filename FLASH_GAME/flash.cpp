//#include "/storage/emulated/0/Documents/Cxxdroid/flash/flash.h"
#include "flash.h"
#include <string>
#include <limits>
#include <memory>

template <typename T>
  T getInput(const std::string& prompt){
      T value;
      std::cout<<prompt;
      while(!(std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Wrong data type, try again."<<std::endl;
      }
      return value;
  }
   
template <>
  std::string getInput<std::string>(const std::string& prompt){
      std::string value;
      std::cout<<prompt;
      std::getline(std::cin,value);
      return value;
  }
  
int main(){
    
    std::string name_x = getInput<std::string>("Enter your name: ");
    
    int age_x = getInput<int>("Enter your age: ");
   
   std::string gen_x;
   bool gender_x = getInput<bool>("Enter your gender('1' for male and '0' for female): ");
   if(gender_x == true){
       gen_x = "male";
   }
   else{
       gen_x = "female";
   }
    
    int speed_x = getInput<int>("Enter your top speed: ");
    
    std::cout<<std::endl;
    
    std::unique_ptr<Speed> speed(new Speed(name_x, age_x, gen_x, speed_x));
    speed->display();
}