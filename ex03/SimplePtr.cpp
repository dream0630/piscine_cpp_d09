/* dream0630 */
#include "SimplePtr.hpp"/* dream0630 */
/* dream0630 */
SimplePtr::SimplePtr(BaseComponent *rawPtr) :/* dream0630 */
	_rawPtr(rawPtr)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
SimplePtr::SimplePtr(SimplePtr const &)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
SimplePtr::~SimplePtr()/* dream0630 */
{/* dream0630 */
	delete _rawPtr;/* dream0630 */
}/* dream0630 */
/* dream0630 */
BaseComponent *SimplePtr::get() const/* dream0630 */
{/* dream0630 */
	return _rawPtr;/* dream0630 */
}/* dream0630 */
/* dream0630 */
SimplePtr &SimplePtr::operator=(SimplePtr const &)/* dream0630 */
{/* dream0630 */
	return *this;/* dream0630 */
}/* dream0630 */
/* dream0630 */
