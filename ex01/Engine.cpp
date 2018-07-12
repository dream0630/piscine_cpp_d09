/* dream0630 */
#include <cmath>/* dream0630 */
#include <string>/* dream0630 */
#include "Errors.hpp"/* dream0630 */
#include "Engine.hpp"/* dream0630 */
/* dream0630 */
#define POW_2(x) (x * x)/* dream0630 */
#define ABS(x) (x < 0 ? -x : x)/* dream0630 */
/* dream0630 */
Engine::Engine(float power, float x, float y) :/* dream0630 */
	_power(power), _x(x), _y(y)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
Engine::~Engine()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Engine::goTorward(float x, float y)/* dream0630 */
{/* dream0630 */
	if (distanceTo(x, y) > _power)/* dream0630 */
		throw UserError(/* dream0630 */
			"Cannot reach destination (" +/* dream0630 */
			std::to_string((int)x) + ", " +/* dream0630 */
			std::to_string((int)y) + ").",/* dream0630 */
			"Engine");/* dream0630 */
	_x = x;/* dream0630 */
	_y = y;/* dream0630 */
}/* dream0630 */
/* dream0630 */
float Engine::distanceTo(float x, float y) const/* dream0630 */
{/* dream0630 */
	return (std::sqrt(POW_2(ABS(x - _x)) + POW_2(ABS(y - _y))));/* dream0630 */
}/* dream0630 */
/* dream0630 */
float Engine::getX() const/* dream0630 */
{/* dream0630 */
	return (_x);/* dream0630 */
}/* dream0630 */
/* dream0630 */
float Engine::getY() const/* dream0630 */
{/* dream0630 */
	return (_y);/* dream0630 */
}/* dream0630 */
/* dream0630 */
