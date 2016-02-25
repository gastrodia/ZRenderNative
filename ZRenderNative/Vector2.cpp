#include "Vector2.h"



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

};
void Vector2::getComponent(int index) {

};
Vector2& Vector2::clone() {

};
Vector2& Vector2::copy() {

};
Vector2& Vector2::add() {

};
Vector2& Vector2::addScalar(float s) {

};
Vector2& Vector2::addVectors(Vector2 a, Vector2 b) {

};
Vector2& Vector2::addScaleVector(Vector2 v, float s) {

};