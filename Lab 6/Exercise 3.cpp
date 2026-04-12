#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    float x, y;

public:
    Vector(float a = 0, float b = 0) {
        x = a;
        y = b;
    }

    Vector operator+(const Vector &v) {
        return Vector(x + v.x, y + v.y);
    }

    Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y);
    }

    Vector operator*(float scalar) {
        return Vector(x * scalar, y * scalar);
    }

    Vector operator/ (float scalar) {
        if (scalar == 0) {
            cout << "Division by zero!\n";
            return Vector(0,0);
        }
        return Vector(x / scalar, y / scalar);
    }

    float magnitude() {
        return sqrt(x*x + y*y);
    }

    void display() {
        cout << x << " + " << y << "i" << endl;
    }
};

int main() 
{
    Vector v1(2,3), v2(4,5);

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v1 * 2;
    Vector v6 = v2 / 2;
    
    cout<<"\t\t\t\t\t\tOperator Overloading!!\n\n";
    cout << "\nAddition: "; v3.display();
    cout << "\nSubtraction: "; v4.display();
    cout << "\nMultiply by scalar: "; v5.display();
    cout << "\nDivide by scalar: "; v6.display();

    cout << "\nMagnitude of v1: " << v1.magnitude() << endl;

    return 0;
}