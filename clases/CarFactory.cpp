

#include "CarFactory.h"
/**
 *
 * @param ld
 * @param file
 * @return
 */
Car *CarFactory::createcar(LoadData &ld, const std::string& file) {
    if (file.find("/car_black_small_4.png") != std::string::npos)
        return new Player(ld,file,"Player");
    if (file.find("/car_blue_2.png") != std::string::npos)
        return new Enemies(ld,file,"Enemy1");
    if (file.find("/car_green_3.png") != std::string::npos)
        return new Enemies(ld,file,"Enemy2");
    if (file.find("/car_red_3.png") != std::string::npos)
        return new Enemies(ld,file,"Enemy3");
    else
        return new Enemies(ld,file,"Enemy4");
}

