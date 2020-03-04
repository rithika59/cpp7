#include<iostream>

using namespace std;

struct Point
{
	int x;
	int y;
};

class Shape
{
	protected:

		Point *pts;
		int size;
		char type;

	public:
			
		Shape(int n, char t);
		Shape& operator=(Shape& s);
		~Shape();
		void Draw();
		void Erase();
	
		char GetType();
		void Move(int x, int y);
		void Setpts();
};

class Line:public Shape
{
	public:

		Line();
		void Draw();
		void Erase();
		char GetType();
		void Move(int x1, int y1);
		void Setpts(int x1,int y1,int x2,int y2);
};

class Rect:public Shape
{
	public:

		Rect();
		void Draw();
		void Erase();
		char GetType();
		void Move(int x1, int y1);
		void Setpts(int x1,int y1,int x2,int y2 );
};

class Poly:public Shape
{

	public:

		Poly(int n,char t);
		void Draw();
		void Erase();
		char GetType();
		void Move(int x1, int y1);
		void Setpts();
};






















