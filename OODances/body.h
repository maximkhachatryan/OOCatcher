#pragma once
#include "line0.h"
#include "line4.h"
#include "line6.h"
#include <cmath>

class body
{
public:
	body();


	point left_foot();
	point right_foot();
	point left_hand();
	point right_hand();
	point base();
	point neck();

	double arm_size();

	//Rotate body segments
	void RotateLeftLeg(double ang) const;
	void RotateRightLeg(double ang) const;
	void RotateLeftArm(double ang) const;
	void RotateRightArm(double ang) const;
	void RotateTorso(double ang) const;

	//Collect body connecting disconnected line endpoints
	void CollectOnLeftFoot(point p) const;
	void CollectOnRightFoot(point p) const;
	void CollectOnLeftHand(point p) const;
	void CollectOnRightHand(point p) const;
	void CollectOnBase(point p) const;
	void CollectOnNeck(point p) const;

	void ShowOnScreen() const;

private:
	line0 left_leg, left_arm;
	line6 right_leg, right_arm;
	line4 torso;
};