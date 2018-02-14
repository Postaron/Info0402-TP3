#include <cstdlib>
#include <iostream>

#include "Color.h"
#include "Disc.h"
#include "SVGstream.h"

class Disc;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Erreur : nombre d'argument incorrect ! " << std::endl;
		exit(EXIT_FAILURE);
	}
	SVGstream svg(argv[1]);
	svg << "<circle cx=\"100\" cy=\"100\" r=\"75\" fill=\"red\"/>";
	Disc d(0, 0, 10, Color::red);
	return EXIT_SUCCESS;
}
