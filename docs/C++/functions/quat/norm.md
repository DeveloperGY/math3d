---
layout: default
title: quat::norm()
description: Returns the magnitude of the specified quaternion
---

# [m3](https://developergy.github.io/math3d)::[quat](../../types/quat.md)::conjugate()

## Signature

```c++
namespace m3
{
    struct quat
    {
        static double norm(const m3::quat &q);
    }
}
```

## Description

Calculates the magnitude of the specified quaternion

### Parameters

`const m3::quat &q`: The specified quaternion

### Return Value

`double`: The magnitude of the quaternion

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)