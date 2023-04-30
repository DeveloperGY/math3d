---
layout: default
title: vec4::vec4()
description: Constructs a m3::vec4
---

# m3::vec3::vec3()

## Signature

```c++
vec3(void);
vec3(float values[4]);
vec3(float x, float y, float z, float 4);
vec3(const m3::vec3 &v3, float w);
vec3(const m3::vec4 &v4);
```

### Parameters

#### Sig: `vec3(void)`
constructs a vec3 filled with 0s

#### Sig: `vec3(float values[4])`
`float values[4]`: xyzw coordinates \(in that order\)

#### Sig: `vec3(float x, float y, float z, float w)`
`float x`: The x coordinate  
`float y`: The y coordinate  
`float z`: The z coordinate  
`float w`: The w coordinate

#### Sig: `vec3(const m3::vec3 &v3, float w)`
`const m3::vec3 &v3`: A vec3 to copy into xyz  
`float w`: A float to input as the w coordinate

#### Sig: `vec3(const m3::vec4 &v4)`
`const m3::vec4 &v4`: A vec4 to copy

### Return Value

`m3::vec4`: The constructed vec4

## Description

Constructs a vec4 type

## Example

```c++
m3::vec4 vec0();
m3::vec4 vec1({3, 4, 5, 1});
m3::vec4 vec2(3, 4, 5, 1);
m3::vec4 vec3(m3::vec3(3, 4, 5), 1);
m3::vec4 vec4(m3::vec4(3, 4, 5, 1));
```

## [Home](https://developergy.github.io/math3d/)