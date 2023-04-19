#include <iostream>

class Figure {
protected:
	int Side;
	std::string Name;
	Figure(int Side, std::string Name): Side(Side), Name(Name) {}
public:
	Figure() : Figure(0,"Figure") {}
	int Figure_Sides() {
		return Side;
	}
	std::string Figure_Name() {
		return Name;
	}
};

class Triangle : public Figure {
public:
	Triangle() : Figure(3, "Triangle") {}
};

class Quadrangle : public Figure {
public:
	Quadrangle() : Figure(4, "Quadrangle") {}
};

int main()
{
	std::cout << "Amount of sides:" << std::endl;
	Figure p;
	Triangle p1;
	Quadrangle p2;
	std::cout << p.Figure_Name() << ": " << p.Figure_Sides() << std::endl;
	std::cout << p1.Figure_Name() << ": " << p1.Figure_Sides() << std::endl;
	std::cout << p2.Figure_Name() << ": " << p2.Figure_Sides() << std::endl;
	return 0;
}