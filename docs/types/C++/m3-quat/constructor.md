---
layout: default
title: quat::quat()
description: Constructs an m3::quat
---

# m3::quat::quat()

## Signature

```c++
quat();
quat(float values[4]);
quat(float degree, float x, float y, float z);
quat(float degree, const m3::vec3 &axis);
quat(const m3::vec4 &v4);
quat(const m3::quat &q);
```

### Parameters

#### Sig: `quat(void)`
constructs a quaternion with no rotation pointing in the x axis

#### Sig: `quat(float values[4])`
`float values[4]`: wijk values \(in that order\)

#### Sig: `quat(float degree, float x, float y, float z)`
`float degree`: The angle measure of rotation in degrees
`float x`: The x component of the axis of rotation  
`float y`: The y component of the axis of rotation  
`float z`: The z component of the axis of rotation

#### Sig: `quat(float degree, const m3::vec3 &v3)`
`float degree`: The angle measure of rotation in degrees
`const m3::vec3 &v3`: A vec3 that defines thge axis of rotation

#### Sig: `quat(const m3::vec4 &v4)`
`const m3::vec4 &v4`: A vector that holds wijk values \(in that order\)

#### Sig: `quat(const m3::quat &q)`
`const m3::quat &q`: A quaternion to copy

### Return Value

`m3::quat`: The constructed quaternion

## Description

Constructs a quaternion

## Example

```c++
m3::quat quat();
m3::quat quat({0, 1, 0, 0});
m3::quat quat(45, 1, 0, 0);
m3::quat quat(45, m3::vec3(1, 0, 0));
m3::quat quat(m3::vec4(0, 1, 0, 0));
m3::quat quat(m3::quat(0, 1, 0 ,0));
```

## [Home](https://developergy.github.io/math3d/)