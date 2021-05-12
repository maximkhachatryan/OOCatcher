#pragma once
#include "line0.h"
#include "line4.h"
#include "line6.h"
#include <cmath>

class body
{
public:
	body(double length);

	point left_foot();
	point right_foot();
	point left_hand();
	point right_hand();
	point base();
	point neck();

	double get_line_size();
	void rand_rotate();
	void shift(double dx, double dy);

private:
	line0 left_leg, left_arm;
	line6 right_leg, right_arm;
	line4 torso;
};