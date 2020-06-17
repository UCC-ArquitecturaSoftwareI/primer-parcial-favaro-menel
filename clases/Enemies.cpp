#include "Enemies.h"
/**
 *  Constructor of the class Enemy.
 *  The rotation attribute starts in zero.
 * @param ld -> It has all the data of the car.
 * @param name -> It is the directon of the texture.
 * @param key -> It is the Tiled's name of the car.
 * @param sp_max -> The maximum speed of the car.
 * @param acel -> The aceleration of the car.
 */
Enemies::Enemies(LoadData &ld, const std::string &name, const std::string &key, float sp_max, float acel) {
    ld.LoadCars(name, key);
    car_pos = ld.Posenemy(key);
    text2D = ld.getTexMan().search(key);
    speed = 1;
    height = text2D.height;
    width = text2D.width;
    speed_max = sp_max;
    aceleration = acel;
    rotation = 0;
}
/**
 * @return -> Texture2D.
 */
Texture2D &Enemies::getText2D() {
    return text2D;
}
/**
 * @return -> The car's position.
 */
Vector2 &Enemies::getCarPos() {
    return car_pos;
}
/**
 * @return -> The car's speed.
 */
float Enemies::getSpeed() {
    return speed;
}
/**
 * Sets the position of the car.
 * @param carPos -> new position
 */
void Enemies::setCarPos(const Vector2 &carPos) {
    car_pos = carPos;
}
/**
 * @return -> The height of the car's texture.
 */
float Enemies::getHeight() {
    return height;
}
/**
 * @return -> The width of the car's texture.
 */
float Enemies::getWidth() {
    return width;
}
/**
 * @return -> The car's aceleration.
 */
float Enemies::getAceleration() {
    return aceleration;
}

