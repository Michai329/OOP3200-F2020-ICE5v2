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

//Implementation section

template <class T>
Vector3D<T>::Vector3D(const T x, const T y, const T z) : m_x(x), m_y(y), m_z(z)
{

}

template <class T>
Vector3D<T>::~Vector3D()
{
}

template <class T>
T Vector3D<T>::GetX() const {
	return m_x;
}

template <class T>
T Vector3D<T>::GetY() const {
	return m_y;
}

template <class T>
T Vector3D<T>::GetZ() const {
	return m_z;
}

template <class T>
void Vector3D<T>::SetX(const T x)
{
	m_y = x;
}
template <class T>
void Vector3D<T>::SetY(const T y)
{
	m_y = y;
}

template <class T>
void Vector3D<T>::SetZ(const T z)
{
	m_z = z;
}

template <class T>
void Vector3D<T>::set(const T x, const T y, const T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

template <class T>
std::string Vector3D<T>::ToString()
{

	return "(" + std::to_string(m_x) + "," + std::to_string(m_y) + "," + std::to_string(m_z) + ")";
}

#endif /*defined (__VECTOR3D__) */