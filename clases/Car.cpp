#include "Car.h"

Car::Car(LoadData &ld) {
    car_pos = ld.LoadPlayer();
    text2D = ld.getTexMan().search("enemy");
    camera = {0};
    camera.target = {car_pos};
    camera.offset = {car_pos};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
}

Vector2 Car::getpos() {
    return car_pos;
}

void Car::movement() {
    if (IsKeyDown(KEY_UP)) {
        car_pos.y += 2;
    }
    if (IsKeyDown(KEY_RIGHT)) {
        camera.rotation++;
    }
    if (IsKeyDown(KEY_LEFT)) {
        camera.rotation--;
    }

    if (IsKeyDown(KEY_DOWN)) {
        car_pos.y -= 2;
    }

}

Camera2D &Car::getCamera() {
    return camera;
}



