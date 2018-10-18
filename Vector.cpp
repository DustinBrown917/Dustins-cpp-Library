#include <math.h>
#include <stdio.h>
#include <string>
#include "Vector.h"


//Vec3 Class Definitions

//Create a Vec3 with all member variables initialized to zero.
Vec3::Vec3() {
	x = y = z = 0.0f;
}

//Sets all member properties to val.
Vec3::Vec3(float val) {
	x = y = z = val;
}

//Specifically set all member variables.
Vec3::Vec3(float x_, float y_, float z_) {
	x = x_;
	y = y_;
	z = z_;
}

//Deconstructor
Vec3::~Vec3() {

}

//Return the Vec3 as readable string.
string Vec3::ToString() {
	std::string vecString = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return vecString;
}

