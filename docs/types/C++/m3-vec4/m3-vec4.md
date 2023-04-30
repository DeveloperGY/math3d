---
layout: default
title: vec4
description: A 4D vector type
---

# m3::vec3

## Signature

```c++
namespace m3
{
    struct vec3
    {
        double data[4];
    };
}
```

### Attributes

`double data[4]`: Stores xyzw values in that order

### Methods

[`(constructor)`](./constructor.md)

### Related

[`m3::vec3 operator+()`](./operators.md)  
[`m3::vec3 operator+=()`](./operators.md)  
[`m3::vec3 operator-()`](./operators.md)  
[`m3::vec3 operator-=()`](./operators.md)  
[`m3::vec3 operator*()`](./operators.md)  
[`m3::vec3 operator*=()`](./operators.md)  
[`m3::vec3 operator/()`](./operators.md)  
[`m3::vec3 operator/=()`](./operators.md)  

## Description

A 4D vector type.

## Example

```c++
m3::vec3 vec(0, 0, 1, 1); // x: 0, y: 0, z: 1, w: 1
```

## [Home](https://developergy.github.io/math3d/)