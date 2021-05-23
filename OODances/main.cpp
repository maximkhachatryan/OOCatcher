#include "point.h"
#include "line4.h"
#include "line5.h"
#include <iostream>
#include "walker.h"
#include "catch_State.h"
#include "step1_State.h"
#include "body_director.h"
#include "simple_body_builder.h"

int main()
{
	point objectToCatch = point(100, 10);
	body_director director;
	simple_body_builder* builder = new simple_body_builder();
	director.set_builder(builder);
	director.create_full_body();
	body* walker_body = builder->get_body();
	walker* walkingPerson = new walker(walker_body, new catch_State(new step1_State()), objectToCatch);
	walkingPerson->go();


	/*point *p = new point(0, 0), *q = new point(5, 5);
	line5 seg5(*p, *q);
	line4 seg4(*p, *q);

	seg5.rotate(10);
	std::cout << seg5.get_x() << std::endl;
	std::cout << seg5.get_y() << std::endl;
	std::cout << seg5.end_x() << std::endl;
	std::cout << seg5.end_y() << std::endl;

	std::cout << &seg5 << std::endl;
	std::cout << &seg4 << std::endl;

	delete p;
	delete q;

	std::cout << seg5.length() << " " << seg5.get_x() << " " << seg5.end_y() << " " << std::endl;
	std::cout << &seg4 << std::endl;
	std::cout << seg4.length() << " " << seg4.get_x() << " " << seg4.end_y() << " " << std::endl;
	*/
	return 0;
}