#include "body.h"

body::body() : left_leg(0, 0, 0, -10), left_arm(0, 10, -10, 10),
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

void body::CollectOnLeftFoot() const
{
}

void body::CollectOnRightFoot() const
{
}

void body::CollectOnLeftHand() const
{
}

void body::CollectOnRightHand() const
{
}

void body::CollectOnBase() const
{
}

void body::CollectOnNeck() const
{
}

void body::ShowOnScreen() const
{

}