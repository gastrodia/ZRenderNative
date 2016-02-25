#include <Windows.h>

#include "MainGame.h"
#include "Vector2.h"
#include <iostream>

int main(int argc,char** argv) {
	MainGame mainGame;
	//mainGame.run();
	Vector2 vec2;
	vec2.set(100, 100).set(200,200);
	std::cout << vec2.getHeight() << " " << vec2.getWidth() << std::endl;
	int a;
	std::cin >> a;
	return 0;
}