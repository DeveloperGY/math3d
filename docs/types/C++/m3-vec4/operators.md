---
layout: default
title: vec4::operator
description: Operator overloads for m3::vec4
---

# m3::vec4::operator

## Signature

```c++
// Add/Sub vec4
m3::vec4 operator+(const m3::vec4 &l, const m3::vec4 &r);
m3::vec4 operator-(const m3::vec4 &l, const m3::vec4 &r);
m3::vec4 &operator+=(m3::vec4 &l, const m3::vec4 &r);
m3::vec4 &operator-=(m3::vec4 &l, const m3::vec4 &r);

// Mul/Div vec4 primitives
m3::vec4 operator*(const m3::vec4 &v, long n);
m3::vec4 operator*(long n, const m3::vec4 &v);
m3::vec4 &operator*=(m3::vec4 &v, long n);
m3::vec4 operator/(const m3::vec4 &v, long n);
m3::vec4 &operator/=(m3::vec4 &v, long n);

m3::vec4 operator*(const m3::vec4 &v, double n);
m3::vec4 operator*(double n, const m3::vec4 &v);
m3::vec4 &operator*=(m3::vec4 &v, double n);
m3::vec4 operator/(const m3::vec4 &v, double n);
m3::vec4 &operator/=(m3::vec4 &v, double n);
```

### Parameters

`(1-4)`: Add and subtract m3::vec4 with another m3::vec4 in the same way you would in linear algebra

`(5-14)`: Multiply and divide an m3::vec4 by a scalar value the same way you would in linear algebra

### Return Value

`m3::vec4`: The result of the operation

## Description

Overloads of the basic math operators for the m3::vec4 type


## Example

```c++
ha, no examples right now
```

## [Home](https://developergy.github.io/math3d/)