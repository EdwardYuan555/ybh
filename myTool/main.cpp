#include <iostream>
#include <Windows.h>
#include "myTool.h"

using namespace std;

void cleanBuff(void) {
	char temp;
	while ((temp = getchar()) != '\n');
}

double myInput(void) {
	int num = 0; //�޸���������
	while (true) {
		system("cls");
		cout << "������Բ�İ뾶��"; //�޸���ʾ����
		cin >> num;

		if (cin.fail() || num <= 0) { //�޸��ж�����
			cleanBuff();
			cin.clear();
			cout << "�������" << endl;
			system("pause");
		}
		else {
			return num;
		}
	}
}


int main() {
	double radius = 0;
	double perimeter = 0;
	double area = 0;

	radius = myInput();
	perimeter = circlePerimeter(radius);
	area = circleArea(radius);

	cout << "�뾶��" << radius << "��Բ���ܳ��ǣ�" << perimeter << endl;
	cout << "�뾶��" << radius << "��Բ������ǣ�" << area << endl;

	system("pause");
	return 0;
}