#ifndef DISC_H_
#define DISC_H_

#include "Surface.h"

class Disc: public Surface {
public:
	Disc(int x, int y, int r, Color c);
	virtual ~Disc();
	double aire() final;
	void info() final;
	void Translate(int x, int y) final;
	void Rotate(int angle) final;
	void Scale(float x, float y) final;

private:
	int r;
};

#endif /* DISC_H_ */
