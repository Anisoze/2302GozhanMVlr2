#pragma once
#include "include.h"

int Ask() {
	int option;
	std::cout << "\n ��������� ��������� ����������:\n 1. ���������� �������\n 2. ���������� ���������\n 3. ����������� ���������\n 4. ���������� ��������\n 5. ������� ����������\n 6. ���������� �����\n 7. ������������� ����������\n 8. Timsort\n 9. Introsort\n 10. �������� ����� ��� �������\n 11. ����� �� ���������\n\n";
	std::cin >> option;
	return option;
}