---
layout: default
title: mat4
description: A 4D Matrix Type
---

# m3::mat4

## Signature

```c++
namespace m3
{
    struct mat4;
}
```

## Description

The 4D matrix type used throughout the math3d library.

### Member Types

`double data[16]`: The array that stores the 4 coordinate values

### Member Methods

[`(constructor)`]()  

[`static m3::mat4 gen_rotationX(double degrees)`]()  
[`static m3::mat4 gen_rotationY(double degrees)`]()  
[`static m3::mat4 gen_rotationZ(double degrees)`]()  
[`static m3::mat4 gen_translation(double x, double y, double z)`]()
[`static m3::mat4 gen_scale(double x, double y, double z)`]()

### Non-member Methods

None

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)