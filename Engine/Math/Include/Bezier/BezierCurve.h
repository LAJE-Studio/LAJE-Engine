#pragma once

#include <Vectors/Vector3.h>
#include <List.h>
#include <CommonTypes.h>

struct BezierPoint {
public:
    Vector3F Position;
    Vector3F InTangent;
    Vector3F OutTangent;
};

struct BezierCurve {
private:
    List<BezierPoint> points;
public:
    const List<BezierPoint> GetPoints() const;
};

