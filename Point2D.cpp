#include "Point2D.h"

std::ostream& operator<<(std::ostream& out, const Point2D& point)
{
	out << '(' << point.m_x << ", " << point.m_y << ')';
	return out;
}
