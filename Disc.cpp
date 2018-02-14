#include "Disc.h"

Disc::Disc(int x, int y, int r, Color c) :
		Geom2D::x(x), Geom2D::y(y), r(r), FillProperty::couleur(c) {
}

Disc::~Disc() {
}

