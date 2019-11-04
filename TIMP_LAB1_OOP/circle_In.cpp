#include "pch.h"
#include "stdafx.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров 
	void circle::InData(ifstream &ifst) {
		ifst >> x >> y >> R >> colour;
	}
} // end simple_shapes namespace