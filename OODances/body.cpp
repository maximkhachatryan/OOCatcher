#include "body.h"

body::body(double length) : left_leg(0, 0, 0, -length), left_arm(0, length, -length, length),
							right_leg(left_leg, left_arm), right_arm(left_arm, left_leg),
							torso(left_leg, left_arm)
{
	right_arm.rotate(acos(0));
	right_leg.rotate(-acos(-1));
}

void body::shift(double dx, double dy)
{
	torso.shift(dx, dy);
}

void body::rand_rotate()	// -0.1 to 0.1
{
	left_arm.rotate(2. * rand() / 327680. - 0.1);
	right_arm.rotate(2. * rand() / 327680. - 0.1);
	left_leg.rotate(2. * rand() / 327680. - 0.1);
	right_leg.rotate(2. * rand() / 327680. - 0.1);
	torso.rotate(2. * rand() / 327680. - 0.1);
}