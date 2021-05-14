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
	void RotateRightLeg(double ang) const;
	void RotateLeftArm(double ang) const;
	void RotateRightArm(double ang) const;
	void RotateTorso(double ang) const;

	//Collect body connecting disconnected line endpoints
	void CollectOnLeftFoot() const;
	void CollectOnRightFoot() const;
	void CollectOnLeftHand() const;
	void CollectOnRightHand() const;
	void CollectOnBase() const;
	void CollectOnNeck() const;

	void ShowOnConsole() const;

private:
	line0 left_leg, left_arm;
	line6 right_leg, right_arm;
	line4 torso;
};