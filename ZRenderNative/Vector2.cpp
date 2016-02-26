#include "Vector2.h"
#include <iostream>


Vector2::Vector2(float x,float y)
{
}


Vector2::~Vector2()
{
}




float Vector2::getWidth() {
	return this->x;
};

void Vector2::setWidth(float val) {
	this->x = val;
};

float Vector2::getHeight() {
	return this->y;
};

void Vector2::setHeight(float val) {
	this->y = val;
};

Vector2& Vector2::set(float x, float y) {
	this->x = x;
	this->y = y;
	return *this;
}

Vector2& Vector2::setX(float x) {
	this->x = x;
	return *this;
}

Vector2& Vector2::setY(float y) {
	this->y = y;
	return *this;
}

void Vector2::setComponent(int index, float val) {
	switch (index) {
		case 0: this->x = val; break;
		case 1: this->y = val; break;
		default: std::cout << "index is out of range: " << index << std::endl;
	}
};
float Vector2::getComponent(int index) {
	float returnVal = 0;
	switch (index) {
	case 0: returnVal = this->x; break;
	case 1: returnVal = this->y; break;
	default: std::cout << "index is out of range: " << index << std::endl;
	}
	return returnVal;
};
Vector2& Vector2::clone() {
	return Vector2(this->x, this->y);
};
Vector2& Vector2::copy(Vector2 v) {
	this->x = v.x;
	this->y = v.y;
	return *this;
};
Vector2& Vector2::add(Vector2 v) {
	this->x = v.x;
	this->y = v.y;
	return *this;
};
Vector2& Vector2::addScalar(float s) {
	this->x += s;
	this->y += s;
	return *this;
};
Vector2& Vector2::addVectors(Vector2 a, Vector2 b) {
	this->x = a.x + b.x;
	this->y = a.y + b.y;
	return *this;
};
Vector2& Vector2::addScaledVector(Vector2 v, float s) {
	this->x += v.x * s;
	this->y += v.y * s;
	return *this;
};

