#include "CarFactory.h"

/**
 *
 * @param ld
 * @param file
 * @return
 */
Car *CarFactory::createcar(LoadData &ld, const std::string& key) {
    if (key == "Player")
        return new Player(ld,"resources/Cars/car_black_small_4.png",key,1,{0.1,0.1});
    if (key == "Enemy1")
        return new Enemies(ld,"resources/Cars/car_blue_2.png",key,1,{0.1,0.1});
    if (key == "Enemy2")
        return new Enemies(ld,"resources/Cars/car_green_3.png",key,1.2,{0.05,0.5});
    if (key == "Enemy3")
        return new Enemies(ld,"resources/Cars/car_red_3.png",key,1.1,{0.09,0.09});
    else
        return new Enemies(ld,"resources/Cars/car_yellow_1.png",key,0.9,{1.1,1.1});
}

