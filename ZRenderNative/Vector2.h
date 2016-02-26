#pragma once
class Vector2
{
private:
	float x;
	float y;

public:
	Vector2(float x=0,float y=0);
	~Vector2();
	float getWidth();
	void setWidth(float val);
	float getHeight();
	void setHeight(float val);
	Vector2& set(float x, float y);

	Vector2& setX(float x);
	Vector2& setY(float y);

	void setComponent(int index, float val);
	float getComponent(int index);
	Vector2& clone();
	Vector2& copy(Vector2 v);
	Vector2& add(Vector2 v);
	Vector2& addScalar(float s);
	Vector2& addVectors(Vector2 a, Vector2 b);
	Vector2& addScaledVector(Vector2 v, float s);
	Vector2& sub(Vector2 v);

};

