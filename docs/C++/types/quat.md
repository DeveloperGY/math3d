---
layout: default
title: quat
description: A Quaternion Type
---

# [m3](https://developergy.github.io/math3d/)::quat

## Signature

```c++
namespace m3
{
    struct quat;
}
```

## Description

The quaternion type used throughout the math3d library.

### Member Types

`double data[4]`: The array that stores the 4 coordinate values

### Member Methods

[`(constructor)`](../functions/quat/constructor.md)  
[`(accessors)`](../functions/quat/accessors.md)  
  
[`static m3::mat4 to_mat4(const m3::quat &q)`](../functions/quat/to_mat4.md)  
[`static m3::quat conjugate(const m3::quat &q)`](../functions/quat/conjugate.md)  
[`static double norm(const m3::quat &q)`](../functions/quat/norm.md)  
[`static m3::quat reciprocal(const m3::quat &q)`]()  
[`static m3::quat normalized(const m3::quat &q)`]()  
[`static m3::quat toGL(const m3::quat &q, float *dest)`]()

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