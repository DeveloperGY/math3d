---
layout: default
title: vec3::operator
description: Operator overloads for m3::vec3
---

# m3::vec3::operator

## Signature

```c++
// Add/Sub vec3
m3::vec3 operator+(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 operator-(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator+=(m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator-=(m3::vec3 &l, const m3::vec3 &r);

// Mul/Div vec3 primitives
m3::vec3 operator*(const m3::vec3 &v, long n);
m3::vec3 operator*(long n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, long n);
m3::vec3 operator/(const m3::vec3 &v, long n);
m3::vec3 &operator/=(m3::vec3 &v, long n);

m3::vec3 operator*(const m3::vec3 &v, double n);
m3::vec3 operator*(double n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, double n);
m3::vec3 operator/(const m3::vec3 &v, double n);
m3::vec3 &operator/=(m3::vec3 &v, double n);
```

### Parameters

`(1-4)`: Add and subtract m3::vec3 with another m3::vec in the same way you would in linear algebra

`(5-14)`: Multiply and divide an m3::vec3 by a scalar value the same way you would in linear algebra

### Return Value

`m3::vec3`: The result of the operation

## Description

Overloads of the basic math operators for the m3::vec3 type


## Example

```c++
ha, no examples right now
```

## [Home](https://developergy.github.io/math3d/)