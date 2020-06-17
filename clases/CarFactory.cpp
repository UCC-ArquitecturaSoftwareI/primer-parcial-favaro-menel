#include "CarFactory.h"

/**
 * It instances differents types of cars.
 * @param ld -> it has all the data of the cars.
 * @param key -> It is the Tiled's name of the car.
 * @return
 */
Car *CarFactory::createcar(LoadData &ld, const std::string& key) {
    if (key == "Player")
        return new Player(ld,"resources/Cars/car_black_small_4.png",key,1.5,0.1);
    if (key == "Enemy1")
        return new Enemies(ld,"resources/Cars/car_blue_small.png",key,1,0.1);
    if (key == "Enemy2")
        return new Enemies(ld,"resources/Cars/car_green_small_3.png",key,1.2,0.05);
    if (key == "Enemy3")
        return new Enemies(ld,"resources/Cars/car_red_small_4.png",key,1.1,0.05);
    else
        return new Enemies(ld,"resources/Cars/car_yellow_small_1.png",key,0.9,1.1);
}

