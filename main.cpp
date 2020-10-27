#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b >= c && b + c >= a && a + c >= b) //проверяем, существует ли треугольник 
	{
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c)); //формула Герона 
		double r = S / p;
		double R = a * b * c / (4 * S);
		cout << "Радиус вписанной окружности равен " << r << endl;
		cout << "Радиус описанной окружности равен " << R << endl;
	}
	else //если не существует:
		cout << "Треугольник с заданными сторонами не существует!" << endl;
	return 0;
}
