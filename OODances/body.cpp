#include "body.h"

body::body() : left_leg(0, 0, 0, -10), left_arm(0, 10, -10, 10),
							right_leg(left_leg, left_arm), right_arm(left_arm, left_leg),
							torso(left_leg, left_arm)
{
	right_arm.rotate(acos(0));
	right_leg.rotate(-acos(-1));
}

point body::left_foot()
{
	return point(this->left_leg.int_end_x(), this->left_leg.int_end_y());
}

point body::right_foot()
{
	return point(this->right_leg.int_end_x(), this->right_leg.int_end_y());
}

point body::left_hand()
{
	return point(this->left_arm.int_end_x(), this->left_arm.int_end_y());
}

point body::right_hand()
{
	return point(this->right_arm.int_end_x(), this->right_arm.int_end_y());
}

point body::base()
{
	return point(this->torso.int_end_x(), this->left_leg.int_end_y());
}

point body::neck()
{
	return point(this->torso.int_x(), this->left_leg.int_y());
}

double body::arm_size()
{
	return this->left_arm.length();
}

void body::RotateLeftLeg(double ang) const
{
}

void body::RotateRightLeg(double ang) const
{
}

void body::RotateLeftArm(double ang) const
{
}

void body::RotateRightArm(double ang) const
{
}

void body::RotateTorso(double ang) const
{
}

void body::CollectOnLeftFoot(point p) const
{
}

void body::CollectOnRightFoot(point p) const
{
}

void body::CollectOnLeftHand(point p) const
{
}

void body::CollectOnRightHand(point p) const
{
}

void body::CollectOnBase(point p) const
{
}

void body::CollectOnNeck(point p) const
{
}

void body::ShowOnScreen() const
{

}