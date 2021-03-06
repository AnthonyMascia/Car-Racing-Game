#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class Vehicle : public Sprite{

private:
	int health, maxSpeed, controlFactor;
	bool active;

	Vehicle(){} // Private default constructor

public:
	Vehicle(int sIndex, int maxSpeed, int controlFactor);
	void setMaxSpeed(int maxSpeed);
	void setControlFactor(int controlFactor);
	void setActive(bool active);
	void setColor(string color);
	void setHealth(int health);
	int getHealth();
	bool isActive();
	int getMaxSpeed();
	int getControlFactor();
};

#endif