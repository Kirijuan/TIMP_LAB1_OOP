#include "pch.h"
#include "stdafx.h"
#include "container_atd.h"
namespace simple_shapes {
	// ������������� ����������
	container::container() : len(0) { }
	// ������� ���������� �� ���������
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}
} // end simple_shapes namespace