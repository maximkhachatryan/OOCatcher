#include "body.h"

body::body()
{
	right_arm->rotate(acos(0));
	right_leg->rotate(-acos(-1));
}

body::body(const body& that)
{
	this->left_arm = that.left_arm;
	this->left_leg = that.left_leg;
	this->right_arm = that.right_arm;
	this->right_leg = that.right_leg;
	this->torso = that.torso;
}

body::~body()
{
	delete left_arm;
	delete left_leg;
	delete right_arm;
	delete right_leg;
	delete torso;
}

void body::set_left_leg(abstractLine *line)
{
	this->left_leg = line;
}

void body::set_left_arm(abstractLine* line)
{
	this->left_arm = line;
}

void body::set_right_leg(abstractLine* line)
{
	this->right_leg = line;
}

void body::set_right_arm(abstractLine* line)
{
	this->right_arm = line;
}

void body::set_torso(abstractLine* line)
{
	this->torso = line;
}

point body::left_foot()
{
	return point(this->left_leg->int_end_x(), this->left_leg->int_end_y());
}

point body::right_foot()
{
	return point(this->right_leg->int_end_x(), this->right_leg->int_end_y());
}

point body::left_hand()
{
	return point(this->left_arm->int_end_x(), this->left_arm->int_end_y());
}

point body::right_hand()
{
	return point(this->right_arm->int_end_x(), this->right_arm->int_end_y());
}

point body::base()
{
	return point(this->torso->int_end_x(), this->left_leg->int_end_y());
}

point body::neck()
{
	return point(this->torso->int_x(), this->left_leg->int_y());
}

double body::arm_size()
{
	return this->left_arm->length();
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