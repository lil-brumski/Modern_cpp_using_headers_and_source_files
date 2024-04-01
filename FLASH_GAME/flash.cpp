#include "flash.h"
#include <memory>

int main(){
    std::unique_ptr<Speed> speed(new Speed("David Tamaratare Oghenebrume", 17, "male", 300000000));
    speed->display();
}
