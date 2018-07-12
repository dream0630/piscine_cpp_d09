/* dream0630 */
#ifndef ENGINE_HPP_/* dream0630 */
#define ENGINE_HPP_/* dream0630 */
/* dream0630 */
#include <cstddef>/* dream0630 */
#include "BaseComponent.hpp"/* dream0630 */
/* dream0630 */
class Engine : public BaseComponent {/* dream0630 */
public:/* dream0630 */
/* dream0630 */
	Engine(float power, float x = 0, float y = 0);/* dream0630 */
	virtual ~Engine();/* dream0630 */
/* dream0630 */
	void goTorward(float x, float y);/* dream0630 */
	float distanceTo(float x, float y) const;/* dream0630 */
/* dream0630 */
	float getX() const;/* dream0630 */
	float getY() const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	float _power;/* dream0630 */
	float _x;/* dream0630 */
	float _y;/* dream0630 */
/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
