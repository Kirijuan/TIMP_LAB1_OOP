#include "stdafx.h"
#include "shape_atd.h"
#include "pch.h"
#include "rectangle_atd.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	
	bool shape::Compare(shape &other) {
		return Perimeter() < other.Perimeter();
	}
} // end simple_shapes namespace