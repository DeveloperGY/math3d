---
layout: default
title: quat::quat
description: m3::quat constructor
---

# m3::quat::quat()

## Signature

| Signature | ID |
| --- | --- |
| quat() | \(1\) |
| quat(double w, double i, double j, double k) | \(2\) |
| quat(double degrees, const m3::vec4 &axis) | \(3\) |
| quat(const m3::vec4 &v)| \(4\) |
| quat(const m3::quat &q) | \(5\) |

## Description

Constructs an m3::quat  
1. Defualt constructor
2. Constructs a quaternion with the specified values
3. Constructs a quaternion using angle axis representation
4. Quaternizes an m3::vec4 (This should normally only be used internally for math3d)
5. Copy Constructor

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