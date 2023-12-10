#include <iostream>
#include <Windows.h>
#include "myTool.h"

using namespace std;

void cleanBuff(void) {
	char temp;
	while ((temp = getchar()) != '\n');
}

double myInput(void) {
	int num = 0; //修改数据类型
	while (true) {
		system("cls");
		cout << "请输入圆的半径："; //修改提示内容
		cin >> num;

		if (cin.fail() || num <= 0) { //修改判断条件
			cleanBuff();
			cin.clear();
			cout << "输入错误！" << endl;
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

	cout << "半径是" << radius << "的圆的周长是：" << perimeter << endl;
	cout << "半径是" << radius << "的圆的面积是：" << area << endl;

	system("pause");
	return 0;
}