---
layout: default
title: Type(No namespace)
description: Type description
---

# Type Name

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

[`(constructor)`]()
[`double x()`]()
[`double y()`]()
[`double z()`]()
[`double w()`]()

### Non-member Methods

[`static double norm(const m3::vec4 &v)`]()
[`static m3::vec4 normalized(const m3::vec4 &v)`]()

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)