#ifndef VECTOR3
#define VECTOR3
class Vector3
{
public:
	// creation
	double x,y,z;
	Vector3();
	Vector3(double _x, double _y, double _z);
	Vector3(const Vector3& _x);	// use Vector3 b(a);
					// with this, a = b implicitly calls this function
	~Vector3();
	int set(const Vector3& _x);	// b.set(a);
	int set(double _x, double _y, double _z);

	// operaters
	Vector3& operator+=(const Vector3& _x);
	Vector3& operator-=(const Vector3& _x);
	Vector3  operator-(const Vector3& _x);
	Vector3  operator-();
	Vector3  operator+(const Vector3& _x);

	Vector3& operator*=(double _x);
	Vector3& operator/=(double _x);

	Vector3  operator*(double _x) const;	// const at last means it won't change class members
											// so that friend doube * Vec3 can use it
	Vector3  operator/(double _x);
	friend Vector3 operator*(double _x,const Vector3& _y);
	Vector3  operator*(const Vector3& _x);

	double operator^(double _x);
	double operator^(const Vector3& _x);

	// compare ==  /len/nor/squlen
	bool operator==(const Vector3& _x);
	double len();
	Vector3 nor();
	Vector3& makenor();

public:
	// for print
	char* toStr();			// use printf("%s",me.toStr());
private: 
	char strForMe[50]; // used by toStr

	// should be a rotation nearby
};

#endif
