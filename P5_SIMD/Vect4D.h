#ifndef VECT4D_H
#define VECT4D_H

#define UNUSED_VAR(v) ((void )v)

class Matrix;

class Vect4D
{
public:

	Vect4D()
	{
	}

	Vect4D(const Vect4D &t)
	{
		UNUSED_VAR(t);
	}

	Vect4D( const float tx, const float ty, const float tz,const float tw )
	{
		// there to force errors in unit test
		// please change
		this->x = -55.0f;
		UNUSED_VAR(tx);
		UNUSED_VAR(ty);
		UNUSED_VAR(tz);
		UNUSED_VAR(tw);
	}


	~Vect4D()
	{
	}

	Vect4D &operator = (const Vect4D &tmp)
	{
		UNUSED_VAR(tmp);
                return *this;
	}

	void set( float xVal, float yVal, float zVal, float wVal )
	{
		UNUSED_VAR(xVal);
		UNUSED_VAR(yVal);
		UNUSED_VAR(zVal);
		UNUSED_VAR(wVal);
	}

	Vect4D operator + ( Vect4D &t)
	{
		return t;
	}

	void operator += (const Vect4D &t)
	{
		UNUSED_VAR(t);
	}

	Vect4D operator - ( Vect4D &t)
	{
		return t;
	}

	void operator -= (const Vect4D &t)
	{
		UNUSED_VAR(t);
	}

	Vect4D operator * ( Vect4D &t)
	{
		return t;
	}

	Vect4D operator * (float s)
	{
		UNUSED_VAR(s);
		Vect4D tmp;
		return tmp;
	}

	void operator *= ( Vect4D &t)
	{
		UNUSED_VAR(t);
	}

	Vect4D operator / ( Vect4D &t)
	{
		return t;
	}

	void operator /= (const Vect4D &t)
	{
		UNUSED_VAR(t);
	}
	
	Vect4D operator * (const Matrix &m);

	float dot( Vect4D &t )
	{
		return (x * t.x + y * t.y + z * t.z + w * t.w); 
	}

public:
	float x;
	float y;
	float z;
	float w;

};

#endif



