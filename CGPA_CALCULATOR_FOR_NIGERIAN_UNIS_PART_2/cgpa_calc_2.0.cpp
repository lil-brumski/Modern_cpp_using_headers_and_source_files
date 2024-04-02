#include "cgpa_calc_2.0.h"
#include "john_cpga_calc_2.0.h"
#include <iostream>
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
          std::cerr<<"Invalid input, try again."<<std::endl;
      }
      return value;
  }
  
template <>
  std::string getInput<std::string>(const std::string& prompt){
      std::string value;
      std::cout<<prompt;
      getline(std::cin,value);
      return value;
  }
   
int main(){
    
    int EE401 = getInput<int>("Enter the grade for EEE401: ");
    while(EE401 < 0 || EE401 > 100){
         std::cout<<"Invalid input, try again."<<std::endl;
         EE401 = getInput<int>("Enter the grade for EEE401: ");
    }
    
    
    int EE402 = getInput<int>("Enter the grade for EEE402: ");
    while(EE402 < 0 || EE402 > 100){
         std::cout<<"Invalid input, try again."<<std::endl;
         EE402 = getInput<int>("Enter the grade for EEE401: ");
    }
    
    
    int EE403 = getInput<int>("Enter the grade for EEE403: ");
    while(EE403 < 0 || EE403 > 100){
         std::cout<<"Invalid input, try again."<<std::endl;
         EE403 = getInput<int>("Enter the grade for EEE401: ");
    }
    
    
    int EE404 = getInput<int>("Enter the grade for EEE404: ");
    while(EE404 < 0 || EE404 > 100){
         std::cout<<"Invalid input, try again."<<std::endl;
         EE404 = getInput<int>("Enter the grade for EEE401: ");
    }
    

    std::unique_ptr<John> student = std::make_unique<John>("John", EE401, EE402, EE403, EE404, ' ', ' ', ' ', ' ');
    
    // Call the display method to print student information and grades
    student->display();            
       
}