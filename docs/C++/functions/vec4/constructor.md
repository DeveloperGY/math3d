---
layout: default
title: vec4::vec4()
description: The constructor for m3::vec4
---

# [m3](https://developergy.github.io/math3d/)::[vec4](../../types/vec4.md)::vec4()

## Signature

| Signature | ID |
| --- | --- |
| vec4() | \(1\) |
| vec4(double x, double y, double z, double w) | \(2\) |
| vec4(double data[4]) | \(3\) |
| vec4(const m3::vec4 &v)| \(4\) |

## Description

Constructs a new m3::vec4.
1. Default Constructor. Constructs a point vector \(w = 1\) at the origin \(presuming 3D space\).  
2. Constructs a vector of the specified coordinates
3. Constructs a vector of the specified coordinates; presumes that the coordinates are given in xyzw order  
4. Copy Constructor

### Parameters

1. None
2. `double x`: The x coordinate  
   `double y`: The y coordinate  
   `double z`: The z coordinate  
   `double w`: The w coordinate  
3. `double data[4]`: The coordiantes in xyzw order
4. `const m3::vec4 &v`: The m3::vec4 to copy

### Return Value

`void`: Nothing

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)