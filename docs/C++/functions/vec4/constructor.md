---
layout: default
title: vec4::vec4()
description: The constructor for m3::vec4
---

# m3::vec4::vec4()

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

`void`: Nothing

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