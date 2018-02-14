/*
 * Surface.h
 *
 *  Created on: 14 févr. 2018
 *      Author: postaron
 */

#ifndef SURFACE_H_
#define SURFACE_H_

#include "FillProperty.h"
#include "Geom2D.h"

class Surface: public FillProperty, public Geom2D {
public:
	virtual ~Surface();
	virtual float aire() = 0;
	virtual void info() = 0;
};

#endif /* SURFACE_H_ */
