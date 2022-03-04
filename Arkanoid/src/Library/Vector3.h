#pragma once

#include <cmath>

struct Vector3
{
	float x = 0;
	float y = 0;
	float z = 0;
};

inline Vector3 VectorAbs(Vector3 v)
{
	return {
		std::abs(v.x),
		std::abs(v.y),
		std::abs(v.z)
	};
}

inline Vector3 operator+(Vector3 left, Vector3 right)
{
	return {
		left.x + right.x,
		left.y + right.y,
		left.z + right.z
	};
}

inline Vector3 operator-(Vector3 left, Vector3 right)
{
	return {
		left.x - right.x,
		left.y - right.y,
		left.z - right.z
	};
}

inline Vector3& operator+=(Vector3& left, Vector3 right)
{
	return left = {
	left.x + right.x,
	left.y + right.y,
	left.z + right.z
	};
}

inline Vector3 operator*(Vector3 vec, float scalar)
{
	return {
		vec.x *= scalar,
		vec.y *= scalar,
		vec.z *= scalar,
	};
}

inline Vector3 operator*(float scalar, Vector3 vec)
{
	return {
		vec.x *= scalar,
		vec.y *= scalar,
		vec.z *= scalar,
	};
}

inline Vector3 operator*(Vector3 vec, int scalar)
{
	return {
		vec.x *= scalar,
		vec.y *= scalar,
		vec.z *= scalar,
	};
}

inline Vector3 operator*(int scalar, Vector3 vec)
{
	return {
		vec.x *= scalar,
		vec.y *= scalar,
		vec.z *= scalar,
	};
}

inline float VectorDot(Vector3 left, Vector3 right)
{
	return (left.x * right.x + left.y * right.y + left.z * right.z);
}

inline float VectorLength(Vector3 vec)
{
	return std::sqrt(VectorDot(vec, vec));
}

inline float VectorDistance(Vector3 left, Vector3 right)
{
	Vector3 distVec = left - right;

	return VectorLength(distVec);
}

inline float DotNormalized(Vector3 left, Vector3 right)
{
	return (left.x * right.x + left.y * right.y + left.z * right.z);
}