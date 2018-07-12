/* dream0630 */
#ifndef OXYGENATOR_HPP_/* dream0630 */
#define OXYGENATOR_HPP_/* dream0630 */
/* dream0630 */
#include "BaseComponent.hpp"/* dream0630 */
/* dream0630 */
class Oxygenator : public BaseComponent {/* dream0630 */
public:/* dream0630 */
	Oxygenator();/* dream0630 */
	virtual ~Oxygenator() {}/* dream0630 */
/* dream0630 */
	void generateOxygen();/* dream0630 */
	void useOxygen(int quantity);/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	int _quantity;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
