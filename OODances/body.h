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

	//Rotate body segments
	void RotateLeftLeg(double ang) const;
	void RotateLeftFoot(double ang) const;
	void RotateRightFoot(double ang) const;
	void RotateLeftHand(double ang) const;
	void RotateRightHand(double ang) const;
	void RotateBase(double ang) const;
	void RotateNeck(double ang) const;

	//Collect body connecting disconnected line endpoints 
	void CollectByLeftFoot() const;
	void CollectByRightFoot() const;
	void CollectByLeftHand() const;
	void CollectByRightHand() const;
	void CollectByBase() const;
	void CollectByNeck() const;

private:
	line0 left_leg, left_arm;
	line6 right_leg, right_arm;
	line4 torso;
};