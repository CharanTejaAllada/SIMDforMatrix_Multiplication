#ifndef MATRIX_SIMD_H
#define MATRIX_SIMD_H

#include "Vect4D_SIMD.h"

#include <xmmintrin.h>
#include <smmintrin.h> 

#define UNUSED_VAR(v) ((void )v)

class Matrix_SIMD
{
public:
	Matrix_SIMD()
	{
	}

	Matrix_SIMD( const Vect4D_SIMD &tV0,const Vect4D_SIMD &tV1,const Vect4D_SIMD &tV2,const Vect4D_SIMD &tV3)
	{
		// just a sample, please change
		this->m0 = tV0.x;
		UNUSED_VAR(tV0);
		UNUSED_VAR(tV1);
		UNUSED_VAR(tV2);
		UNUSED_VAR(tV3);
	}
	
	~Matrix_SIMD()
	{

	}

	Matrix_SIMD(const Matrix_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
	}

	Matrix_SIMD &operator=(const Matrix_SIMD &tmp)
	{
		UNUSED_VAR(tmp);
		return *this;
	}

	Vect4D_SIMD operator * (const Vect4D_SIMD &v);
	Matrix_SIMD operator * (const Matrix_SIMD & t);

	
public:

	union 
		{
		struct 
			{
			Vect4D_SIMD v0;
			Vect4D_SIMD v1;
			Vect4D_SIMD v2;
			Vect4D_SIMD v3;
			};

		struct 
			{
			float m0;
			float m1;
			float m2;
			float m3;
			float m4;
			float m5;
			float m6;	
			float m7;
			float m8;
			float m9;
			float m10;
			float m11;
			float m12;
			float m13;
			float m14;
			float m15;
			};
		};
};

#endif