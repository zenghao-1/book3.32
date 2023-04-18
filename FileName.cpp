#include <iostream>
using namespace std;
const double PI = 3.1415;

class cylinder
{
public:
	cylinder(double r_to,double h_to);
	~cylinder();
	void putVol()
	{
		cout << "圆柱体积" << VT << endl;
		cout << "成员代号" << count << endl;
	}
private:
	double r, h;
	static int count;
	double VT;
};

int cylinder::count = 0;

int main()
{
	cylinder C1(1.0, 2.0);
	C1.putVol();
	cout << "-------------------" << endl;
	cylinder C2(2.0, 3.0);
	C2.putVol();
	cout << "-------------------" << endl;
	cylinder C3(5.0, 3.0);
	C3.putVol();
}

cylinder::cylinder(double r_to,double h_to)
{
	r = r_to; h = h_to;
	VT = PI * r * r * h;
	++count;
}

cylinder::~cylinder()
{
	--count;
}





