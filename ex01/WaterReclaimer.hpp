/* dream0630 */
#ifndef WATER_RECLAIMER_HPP_/* dream0630 */
#define WATER_RECLAIMER_HPP_/* dream0630 */
/* dream0630 */
#include <cstddef>/* dream0630 */
#include "BaseComponent.hpp"/* dream0630 */
/* dream0630 */
class WaterReclaimer : public BaseComponent {/* dream0630 */
public:/* dream0630 */
	WaterReclaimer();/* dream0630 */
	virtual ~WaterReclaimer() {}/* dream0630 */
/* dream0630 */
	void start();/* dream0630 */
	void generateWater();/* dream0630 */
	void useWater(int water);/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	int _water;/* dream0630 */
	bool _started;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
