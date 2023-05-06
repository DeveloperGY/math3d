---
layout: default
title: vec4
description: A 4D Vector Type
---

# [m3](https://developergy.github.io/math3d/)::vec4

## Signature

```c++
namespace m3
{
    struct vec4;
}
```

## Description

The 4D vector type used throughout the math3d library.

### Member Types

`double data[4]`: The array that stores the 4 coordinate values

### Member Methods

[`(constructor)`](../functions/vec4/constructor.md)  
[`(accessors)`](../functions/vec4/accessors.md)   

[`static double norm(const m3::vec4 &v)`](../functions/vec4/norm.md)  
[`static m3::vec4 normalized(const m3::vec4 &v)`](../functions/vec4/normalized.md)
[`static void toGL(const m3::vec4 &v, float *dest)`](../functions/vec4/toGL.md)

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