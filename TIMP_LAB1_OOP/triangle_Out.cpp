#include "pch.h"
#include "stdafx.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	void triangle::Out(ofstream &ofst) {
		ofst << "It is Triangle: a = "
			<< a << ", b = " << b << ", c = " << c << ", Colour = " << colour << endl;
	}
} // end simple_shapes namespace