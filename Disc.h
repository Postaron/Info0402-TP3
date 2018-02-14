#ifndef DISC_H_
#define DISC_H_

#include "Surface.h"

class Disc: public Surface {
public:
	Disc(int x, int y, int r, Color c);
	virtual ~Disc();

private:
	int r;
};

#endif /* DISC_H_ */
