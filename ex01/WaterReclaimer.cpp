/* dream0630 */
#include <iostream>/* dream0630 */
#include "Errors.hpp"/* dream0630 */
#include "WaterReclaimer.hpp"/* dream0630 */
/* dream0630 */
WaterReclaimer::WaterReclaimer() :/* dream0630 */
	_water(0), _started(false)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
void WaterReclaimer::start()/* dream0630 */
{/* dream0630 */
	if (_water == 0)/* dream0630 */
		throw MissionCriticalError(/* dream0630 */
			"Not enough water to achieve the mission.",/* dream0630 */
			"WaterReclaimer");/* dream0630 */
	_started = true;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void WaterReclaimer::useWater(int water)/* dream0630 */
{/* dream0630 */
	if (_water == 0)/* dream0630 */
		throw UserError(/* dream0630 */
			"Cannot use water if the reclaimer hasn't started.",/* dream0630 */
			"WaterReclaimer");/* dream0630 */
	if (water < 0)/* dream0630 */
		throw UserError(/* dream0630 */
			"Water use should be positif.",/* dream0630 */
			"WaterReclaimer");/* dream0630 */
	if (_water <= 10)/* dream0630 */
		throw LifeCriticalError(/* dream0630 */
			"Cannot use water, not enough in the reclaimer.",/* dream0630 */
			"WaterReclaimer");/* dream0630 */
	_water -= water;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void WaterReclaimer::generateWater()/* dream0630 */
{/* dream0630 */
	if (_water + 10 > 100)/* dream0630 */
		throw NasaError(/* dream0630 */
			"Cannot generate water, reclaimer already full.",/* dream0630 */
			"WaterReclaimer");/* dream0630 */
	_water += 10;/* dream0630 */
}/* dream0630 */
/* dream0630 */
