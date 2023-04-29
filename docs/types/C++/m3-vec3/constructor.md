---
layout: default
title: Function Name (no namespace)
description: Function Description
---

# Function Name

## Signature

```c++
vec3(void);
vec3(float values[3]);
vec3(float x, float y, float z);
vec3(const m3::vec3 &v3);
vec3(const m3::vec4 &v4);
```

### Parameters

#### `vec3(void)`
constructs a vec3 filled with 0s

#### `vec3(float values[3])`
`float values[3]`: xyz coordinates \(in that order\)

#### `vec3(float x, float y, float z)`
`float x`: The x coordinate  
`float y`: The y coordinate  
`float z`: The z coordinate

#### `vec3(const m3::vec3 &v3)`
`const m3::vec3 &v3`: A vec3 to copy

#### `vec3(const m3::vec3 &v4)`
`const m3::vec4 &v4`: A vec4 to copy \(minus the w component\)

### Return Value

`m3::vec3`: The constructed vec3

## Description

Constructs a vec3 type

## Example

```c++
m3::vec3 vec0();
m3::vec3 vec1({3, 4, 5});
m3::vec3 vec2(3, 4, 5);
m3::vec3 vec3(m3::vec3(3, 4, 5));
m3::vec3 vec4(m3::vec4(3, 4, 5, 1));
```

## [Home](https://developergy.github.io/math3d/)