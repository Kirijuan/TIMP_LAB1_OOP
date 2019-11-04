#pragma once
#ifndef __triangle_atd__
#define __triangle_atd__
#include "shape_atd.h"
namespace simple_shapes {
	class triangle : public shape {
		int a, b, c;
		char colour[10];
	public:
		void InData(ifstream &ifst); // ââîä
		void Out(ofstream &ofst); // âûâîä
		triangle() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
	};
} // end simple_shapes namespace
#endif