---
layout: default
title: vec4::toGL()
description: Converts the m3::vec4 to an opengl compatible vec4
---

# [m3](https://developergy.github.io/math3d)::[vec4](../../types/vec4.md)::toGL()

## Signature

```c++
namespace m3
{
    struct vec4
    {
        static void toGL(const m3::vec4 &v, float *dest);
    }
}
```

## Description

Converts and stores the specified vector into an opengl compatible format.

### Parameters

`const m3::vec4 &v`: The specified m3::vec4

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