#include <iostream>
using namespace std;

class Shape { // base class
protected:
    int numberOfSides;
    float area;

public:
    Shape(int sides, float a = 0) {
        numberOfSides = sides;
        area = a;
    }

    void setSides(int s) {
		numberOfSides = s; }
		
    int getSides() {	 
	    return numberOfSides; }

    void setArea(float a) {
	    area = a; }
	    
    float getArea() { 
	    return area; }
};


class Rectangle : public Shape {
protected:
    float length, width;

public:
    Rectangle(float l, float w) : Shape(4) {
        length = l;
        width = w;
    }

    void generateArea() {
        area = length * width;
    }
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : Shape(0) {
        radius = r;
    }

    void generateArea() {
        area = 3.142 * radius * radius;
    }
};


class Triangle : public Shape {
private:
    float height, base;

public:
    Triangle(float h, float b) : Shape(3) {
        height = h;
        base = b;
    }

    void generateArea() {
        area = (height * base) / 2;
    }
};


class Square : public Rectangle {
public:
    Square(float side) : Rectangle(side, side) { }

    void checkSides() {
        if (length == width)
            cout << "Sides are equal\n";
        else
            cout << "Sides are NOT equal\n";
    }

    void generateArea() {
        area = length * width;
    }
};

int main() 
{
    Rectangle r(6,8);
    r.generateArea();
    cout << "\nRectangle Area: " << r.getArea() << endl;

    Circle c(3);
    c.generateArea();
    cout << "\nCircle Area: " << c.getArea() << endl;

    Triangle t(3,6);
    t.generateArea();
    cout << "\nTriangle Area: " << t.getArea() << endl;

    Square s(5);
    s.checkSides();
    s.generateArea();
    cout << "\nSquare Area: " << s.getArea() << endl;

    return 0;
}
