#include <iostream>
#include <cmath>

using namespace std;


// Task 1
class Circle {
protected:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() { return 3.1415 * pow(radius, 2); }
};

class Square {
protected:
    double side;
public:
    Square(double s) : side(s) {}
    double getArea() { return pow(side, 2); }
};

class CircleInSquare : public Circle, public Square {
public:
    CircleInSquare(double side) : Square(side), Circle(side / 2) {}
    void printAreas() {
        cout << "Circle's area: " << Circle::getArea() << endl;
        cout << "Square's area: " << Square::getArea() << endl;
    }
};



// Task 2
class Wheels {
public:
    void Wheel() { cout << "Wheels are running." << endl; }
};

class Engine {
public:
    void EngineStart() { cout << "Engine start." << endl; }
};

class Doors {
public:
    void Door() { cout << "The doors are closed." << endl; }
};

class Car : public Wheels, public Engine, public Doors {
public:
    void checkCar() {
        Wheel();
        EngineStart();
        Door();
    }
};

int main() {
    // Task 1
    CircleInSquare cis(10.0);
    cis.printAreas();

    // Task 2
    Car myCar;
    myCar.checkCar();
}