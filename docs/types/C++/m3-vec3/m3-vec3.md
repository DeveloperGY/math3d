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
    };
}
```

### Attributes

`double data[3]`: Stores xyz values in that order

### Methods

[`(Constructor)`](./constructor.md)

## Description

A 3D vector type.

## Example

```c++
m3::vec3 vec(0, 0, 1); // x: 0, y: 0, z: 1
```

[Home](https://developergy.github.io/math3d/)