/* dream0630 */
#ifndef REF_PTR_HPP_/* dream0630 */
#define REF_PTR_HPP_/* dream0630 */
/* dream0630 */
#include <cstddef>/* dream0630 */
#include "BaseComponent.hpp"/* dream0630 */
/* dream0630 */
class RefPtr/* dream0630 */
{/* dream0630 */
public:/* dream0630 */
	RefPtr(BaseComponent *rawPtr);/* dream0630 */
	RefPtr() : RefPtr(nullptr) {}/* dream0630 */
	RefPtr(RefPtr const &other);/* dream0630 */
	~RefPtr();/* dream0630 */
/* dream0630 */
	RefPtr &operator=(RefPtr const &other);/* dream0630 */
/* dream0630 */
	BaseComponent *get() const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	BaseComponent *_rawPtr;/* dream0630 */
	int *_refCounter;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
