/* dream0630 */
#include <iostream>/* dream0630 */
#include "Errors.hpp"/* dream0630 */
#include "Oxygenator.hpp"/* dream0630 */
/* dream0630 */
Oxygenator::Oxygenator() : _quantity(0)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Oxygenator::generateOxygen()/* dream0630 */
{/* dream0630 */
	_quantity += 10;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Oxygenator::useOxygen(int quantity)/* dream0630 */
{/* dream0630 */
	if (_quantity <= 10)/* dream0630 */
		throw LifeCriticalError(/* dream0630 */
			"Not enough oxygen to live.",/* dream0630 */
			"Oxygenator");/* dream0630 */
	if (_quantity <= 20)/* dream0630 */
		throw MissionCriticalError(/* dream0630 */
			"Not enough oxygen to continue the mission.",/* dream0630 */
			"Oxygenator");/* dream0630 */
	_quantity -= quantity;/* dream0630 */
}/* dream0630 */
/* dream0630 */
