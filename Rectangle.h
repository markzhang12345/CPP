#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include"Point.h"
class Rectangle :public Point {
public:
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);
		this->w = w;
		this->h = h;
	}
	float getH() const { return h; }
	float getW() const { return w; }
private:
	float w, h;
};
#endif