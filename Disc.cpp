#include "Disc.h"

#include <iostream>
#include <cmath>

#include "Color.h"

Disc::Disc(int x, int y, int r, Color c) {
	Geom2D::x = x;
	Geom2D::y = y;
	this->r = r;
	FillProperty::couleur = c;
}

Disc::~Disc() {
}

inline constexpr double get_PI() {
	return std::acos(-1);
}

double Disc::aire() {
	return r * r * get_PI();
}

void Disc::info() {
	std::cout << "Rayon : " << r << "\nPosition : x : " << Geom2D::x << ", y : "
			<< Geom2D::y << std::endl;
}

void Disc::Translate(int x, int y) {
}

void Disc::Rotate(int angle) {
}

void Disc::Scale(float x, float y) {
}
