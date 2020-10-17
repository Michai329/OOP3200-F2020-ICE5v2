#pragma once
#include <string>
#ifndef __VECTOR3D__
#define __VECTOR3D__

template <class T>
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0f), T y = static_cast<T>(0.0f), T z = static_cast<T>(0.0f));
	~Vector3D();
	
	// Muttators
	void SetX(const T x);
	void SetY(const T y);
	void SetZ(const T z);
	void set(const T x, const T y, const T z );

	//Accessors

	T GetX() const;
	T GetY() const;
	T GetZ() const;

	std::string ToString();

private:
	T m_x;
	T m_y;
	T m_z;
};

#endif /*defined (__VECTOR3D__) */