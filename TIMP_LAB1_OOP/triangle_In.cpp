#include "pch.h"
#include "stdafx.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes 
{
	id triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
	}
} // end simple_shapes namespace