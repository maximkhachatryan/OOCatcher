#include "point.h"
#include "line4.h"
#include "line5.h"
#include <iostream>

int main()
{
	point *p = new point(0, 0), *q = new point(1, 1);
	line5 seg5(*p, *q);
	line4 seg4(*p, *q);

	std::cout << &seg5 << std::endl;
	std::cout << &seg4 << std::endl;

	delete p;
	delete q;

	std::cout << seg5.length() << " " << seg5.get_x() << " " << seg5.end_y() << " " << std::endl;
	std::cout << &seg4 << std::endl;
	std::cout << seg4.length() << " " << seg4.get_x() << " " << seg4.end_y() << " " << std::endl;

	return 0;
}