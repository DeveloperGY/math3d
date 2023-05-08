---
layout: default
title: quat::to_mat4()
description: Converts an m3::quat to an m3::mat4
---

# [m3](https://developergy.github.io/math3d)::[quat](../../types/quat.md)::to_mat4()

## Signature

```c++
namespace m3
{
    struct quat
    {
        static m3::mat4 to_mat4(const m3::quat &q);
    }
}
```

## Description

Converts a quaternion to a mat4

### Parameters

`const m3::quat &q`: the specfied quaternion

### Return Value

`m3::mat4`: The resulting mat4

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)