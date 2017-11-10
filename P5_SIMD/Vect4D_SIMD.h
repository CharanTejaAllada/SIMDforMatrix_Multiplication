#ifndef VECT4D_SIMD_H
#define VECT4D_SIMD_H

#include <xmmintrin.h>
#include <smmintrin.h>  

#define UNUSED_VAR(v) ((void )v)

class Matrix_SIMD;

class Vect4D_SIMD
{
public:

	Vect4D_SIMD()
	{
	};

	Vect4D_SIMD( const Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	Vect4D_SIMD( const float tx,const float ty, const float tz, const float tw )
	{
		UNUSED_VAR(tx);
		UNUSED_VAR(ty);
		UNUSED_VAR(tz);
		UNUSED_VAR(tw);
	}

	~Vect4D_SIMD()
	{
	};

	void operator = ( const Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	void set( float xVal, float yVal, float zVal, float wVal )
	{
		UNUSED_VAR(xVal);
		UNUSED_VAR(yVal);
		UNUSED_VAR(zVal);
		UNUSED_VAR(wVal);
	}

	Vect4D_SIMD operator + (Vect4D_SIMD &tmp)
	{
		return tmp;
	}

	void operator += (Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	Vect4D_SIMD operator - (Vect4D_SIMD &tmp)
	{
		return tmp;
	}

	void operator -= ( Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	Vect4D_SIMD operator * (Vect4D_SIMD &tmp)
	{
		return tmp;
	}

	void operator *= ( Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	Vect4D_SIMD operator / (Vect4D_SIMD &tmp)
	{
		return tmp;
	}

	void operator /= (Vect4D_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	float dot( Vect4D_SIMD &tmp )
	{
		UNUSED_VAR(tmp);
		return 5;
	}

	Vect4D_SIMD Vect4D_SIMD::operator * (const Matrix_SIMD &m);

public:

	// anonymous union
	union 
	{
		__m128	_m;

		// anonymous struct
		struct 
			{
			float x;
			float y;
			float z;
			float w;
			};
	};
};

#endif



