#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	Point()
	{
		x = y = int();
		cout << "Default Constructor:\t" << this << endl;
	}
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "Copy Constructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	void operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "Copy Assignment:\t\t" << this << endl;
	}

	void print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
	// Домашка ------------------------------------------------------------------------------------------------------------------------------------------------------------------
	double distance(const Point& other)const
	{
		double x_distance = other.x - this->x, y_distance = other.y - this->y, distance = sqrt(x_distance*x_distance + y_distance * y_distance); return distance;
	}
};

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x(), y_distance = A.get_y() - B.get_y(), distance = sqrt(x_distance*x_distance + y_distance * y_distance); return distance;
}
//            ------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	system("color 0A");

	Point A(2, 3);
	Point B(4, 5);
	A.print();
	B.print();
	cout << A.distance(B) << endl;
	cout << distance(A, B) << endl;
	int();
	A.print();
	B.print();
}