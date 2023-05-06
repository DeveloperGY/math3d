---
layout: default
title: quat::conjugate()
description: Returns the conjugate of the specified m3::quat
---

# [m3](https://developergy.github.io/math3d)::[quat](../../types/quat.md)::conjugate()

## Signature

```c++
namespace m3
{
    struct quat
    {
        static m3::quat conjugate(const m3::quat &q);
    }
}
```

## Description

Generates and returns the conjugate m3::quat

### Parameters

`const m3::quat &q`: The specified m3::quat

### Return Value

`m3::quat`: THe conjugate of the specified m3::quat

## Example

```c++
#include <math3d.h>

int main()
{
    return 0;
}
```

## [Home](https://developergy.github.io/math3d/)