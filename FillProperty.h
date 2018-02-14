#ifndef FILLPROPERTY_H_
#define FILLPROPERTY_H_

#include "Color.h"

class FillProperty {
public:
	virtual ~FillProperty();
	const Color& getCouleur() const;
	void setCouleur(const Color& couleur);

protected:
	Color couleur;
};

#endif /* FILLPROPERTY_H_ */
