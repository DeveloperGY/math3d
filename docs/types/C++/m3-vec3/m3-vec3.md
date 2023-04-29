---
layout: default
title: Vec3
description: A 3D vector type
---

# m3::vec3

## Signature

```c++
namespace m3
{
    struct vec3
    {
        double data[3];

        vec3();
        vec3(float values[3]);
        vec3(float x, float y, float z);
        vec3(const m3::vec3 &v3);
        vec3(const m3::vec4 &v4);

        // overloads will go here when they are done
    };
}
```

### Attributes

`double data[3]`: Stores xyz values in that order

### Methods

[`vec3()`](./m3-vec3.md)  
[`vec3(float[3])`](./m3-vec3.md)  
[`vec3(float, float, float)`](./m3-vec3.md)  
[`vec3(const m3::vec3 &)`](./m3-vec3.md)  
[`vec3(const m3::vec4 &)`](./m3-vec3.md)

## Description

A 3D vector type.

## Example

```c++
m3::vec3 vec(0, 0, 1); // x: 0, y: 0, z: 1
```

[Home](https://developergy.github.io/math3d/)