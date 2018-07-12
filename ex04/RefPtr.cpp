/* dream0630 */
#include "RefPtr.hpp"/* dream0630 */
/* dream0630 */
RefPtr::RefPtr(BaseComponent *rawPtr) :/* dream0630 */
	_rawPtr(rawPtr), _refCounter(new int)/* dream0630 */
{/* dream0630 */
	*_refCounter = 1;/* dream0630 */
}/* dream0630 */
/* dream0630 */
RefPtr::RefPtr(RefPtr const &other) :/* dream0630 */
	_rawPtr(other._rawPtr), _refCounter(other._refCounter)/* dream0630 */
{/* dream0630 */
	(*_refCounter)++;/* dream0630 */
}/* dream0630 */
/* dream0630 */
RefPtr::~RefPtr()/* dream0630 */
{/* dream0630 */
	if (--(*_refCounter) == 0)/* dream0630 */
		delete _rawPtr;/* dream0630 */
}/* dream0630 */
/* dream0630 */
RefPtr &RefPtr::operator=(RefPtr const &other)/* dream0630 */
{/* dream0630 */
	if (--(*_refCounter) == 0)/* dream0630 */
		delete _rawPtr;/* dream0630 */
	_rawPtr = other._rawPtr;/* dream0630 */
	_refCounter = other._refCounter;/* dream0630 */
	(*_refCounter)++;/* dream0630 */
	return (*this);/* dream0630 */
}/* dream0630 */
/* dream0630 */
BaseComponent *RefPtr::get() const/* dream0630 */
{/* dream0630 */
	return _rawPtr;/* dream0630 */
}/* dream0630 */
/* dream0630 */
