/* dream0630 */
#ifndef SIMPLE_PTR_HPP_/* dream0630 */
#define SIMPLE_PTR_HPP_/* dream0630 */
/* dream0630 */
#include "BaseComponent.hpp"/* dream0630 */
/* dream0630 */
class SimplePtr {/* dream0630 */
public:/* dream0630 */
	explicit SimplePtr(BaseComponent *rawPtr);/* dream0630 */
	~SimplePtr();/* dream0630 */
	BaseComponent *get() const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	SimplePtr(SimplePtr const &);/* dream0630 */
	SimplePtr &operator=(SimplePtr const &);/* dream0630 */
/* dream0630 */
	BaseComponent *_rawPtr;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
