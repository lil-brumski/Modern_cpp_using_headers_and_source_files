#ifndef JOHN_H
#define JOHN_H

#include <iostream>
#include <iomanip>

void John(char e1, char e2, char e3, char e4, double c1, double c2, double c3, double c4){
    double cu_points = 550;
    double t_course_units = 120;
    std::cout<<"Name: J. John\n"
    <<"MAT. NO.: DE.2021/2946\n"
    <<"EEE401 grade: "<<e1
    <<"\nEEE402 grade: "<<e2
    <<"\nEEE403 grade: "<<e3
    <<"\nEEE404 grade: "<<e4<<std::endl;
     double g_p_a = (c1+c2+c3+c4)/12;
     double c_g_p_a = (cu_points+c1+c2+c3+c4)/(t_course_units+12);
     std::cout<<"This semester GPA: "<<g_p_a
     <<"\nCGPA: "<<std::setprecision(3)<<c_g_p_a
     <<"\nCurrent year and semester: 3Yr 1Se"<<std::endl;
}

#endif