#include "FillProperty.h"

FillProperty::~FillProperty() {
}

const Color& FillProperty::getCouleur() const {
	return couleur;
}

void FillProperty::setCouleur(const Color& couleur) {
	this->couleur = couleur;
}
