/*
 * Geom2D.h
 *
 *  Created on: 14 févr. 2018
 *      Author: postaron
 */

#ifndef GEOM2D_H_
#define GEOM2D_H_

#include "Transform.h"

class Geom2D: public virtual Transform {
public:
	virtual ~Geom2D();
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);

protected:
	int x;
	int y;
};

#endif /* GEOM2D_H_ */
