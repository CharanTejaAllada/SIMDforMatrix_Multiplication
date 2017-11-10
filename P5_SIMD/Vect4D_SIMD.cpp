#include "Vect4D_SIMD.h"
#include "Matrix_SIMD.h"

#include <xmmintrin.h>
#include <smmintrin.h> 



Vect4D_SIMD Vect4D_SIMD::operator * ( const Matrix_SIMD &M)
{		
	UNUSED_VAR(M);
	Vect4D_SIMD t;
	return t;

}