#ifndef SURFACE_H_
#define SURFACE_H_

#include "FillProperty.h"
#include "Geom2D.h"

class Surface: public FillProperty, public Geom2D {
public:
	virtual ~Surface();
	virtual double aire() = 0;
	virtual void info() = 0;
};

#endif /* SURFACE_H_ */
