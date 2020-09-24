#pragma once

class Vec2 {
public:
    float x = 0.0f;
    float y = 0.0f;

    Vec2(){}
    Vec2(float x, float y) {
        this->x = x;
        (*this).y = y;
    }

    Vec2 sub(Vec2 v) {
        Vec2 xy;
        xy.x = this->x-v.x;
        xy.y = this->y - v.y;
        return xy;
    }

    Vec2 div(Vec2 v) {
        Vec2 xy;
        xy.x = this->x / v.x;
        xy.y = this->y / v.y;
        return xy;
    }


    Vec2 mul(Vec2 v) {
        Vec2 xy;
        xy.x = this->x * v.x;
        xy.y = this->y * v.y;
        return xy;
    }


   

    
};