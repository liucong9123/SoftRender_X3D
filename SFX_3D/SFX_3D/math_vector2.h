#ifndef _MATH_VECTOR2_H__
#define _MATH_VECTOR2_H__

#include "math_common.h"

struct vector2
{
    float x, y;

    vector2();
    vector2(const vector2& vVal);
    vector2(const float x, const float y);
    vector2(const struct vector4& vVal);
    vector2(const struct vector3& vVal);
    
    const vector2& operator =(const vector2& vVal);
    const vector2& operator =(const struct vector4& vVal);
    const vector2& operator =(const struct vector3& vVal);
    const vector2& operator =(const float fVal);

    operator float* ();
    operator const float* () const;

    vector2 operator +() const;
    vector2 operator -() const;

    const vector2& operator += (const vector2& vVal);
    const vector2& operator -= (const vector2& vVal);
    const vector2& operator *= (const vector2& vVal);
    const vector2& operator *= (const float& fVal);
    const vector2& operator /= (const float& fVal);

    vector2 operator +(const vector2& vVal) const;
    vector2 operator -(const vector2& vVal) const;
    vector2 operator *(const vector2& vVal) const;
    vector2 operator *(const float fVal) const;
    vector2 operator /(const float fVal) const;

    float lengeh() const;
    float lengthsq() const;

    vector2& normalize();
};

float fVector2Dot(const vector2& vVecA, const vector2& vVecB);
vector2& vVector2Lerp(vector2& vVecOut, const vector2& vVecA, const vector2& vVecB, const float fInterpolation);

#endif