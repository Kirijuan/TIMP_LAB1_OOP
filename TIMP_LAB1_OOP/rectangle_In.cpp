#include "pch.h"
#include "stdafx.h"
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ��������������
	void rectangle::InData(ifstream &ifst) 
	{
		ifst >> x >> y >> colour;
	}
} // end simple_shapes namespace