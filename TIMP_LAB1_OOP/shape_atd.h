#pragma once
#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {

	class shape {
		int angle;
	public:
		static shape* In(ifstream &ifst);
		void shape::InData(ifstream &ifst) {
			ifst >> angle;
		}
		//----------------------------------------------------
		
		void shape::Out(ofstream &ofst) {
			ofst << "angle = " << angle;
		}
	protected:
		shape() {};
	};


} // end simple_shapes namespace
#endif