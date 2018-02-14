#ifndef COLOR_H_
#define COLOR_H_

#include <string>

class Color {
public:
	typedef enum {
		white,
		yellow,
		orange,
		turquoise,
		violet,
		pink,
		red,
		green,
		grey,
		cyan,
		blue,
		brown
	} couleur;
	Color();
	Color(couleur col);
	virtual ~Color();
	std::string toString();
	couleur getC() const;
	void setC(couleur c);

private:
	couleur c;
};

#endif /* COLOR_H_ */
