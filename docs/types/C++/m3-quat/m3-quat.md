---
layout: default
title: quat
description: A quaternion type
---

# m3::quat

## Signature

```c++
namespace m3
{
    struct quat
    {
        double data[4];
    };
}
```

### Attributes

`double data[4]`: Stores wijk values in that order

### Methods

[`(constructor)`](./constructor.md)

### Related

[`m3::quat operator*()`](./operators.md)  
[`m3::quat operator*=()`](./operators.md)  
[`m3::quat operator/()`](./operators.md)  
[`m3::quat operator/=()`](./operators.md)  

## Description

A quaternion type.

## Example

```c++
m3::quat q(0, 1, 0, 0); // w: 1, i: 0, j: 0, k: 0 (0 degrees around the x axis)
```

## [Home](https://developergy.github.io/math3d/)