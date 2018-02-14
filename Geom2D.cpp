#include "Geom2D.h"

Geom2D::~Geom2D() {
}

int Geom2D::getX() const {
	return x;
}

void Geom2D::setX(int x) {
	this->x = x;
}

int Geom2D::getY() const {
	return y;
}

void Geom2D::setY(int y) {
	this->y = y;
}
