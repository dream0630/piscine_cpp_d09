/* dream0630 */
#include "Errors.hpp"/* dream0630 */
/* dream0630 */
NasaError::NasaError(std::string const& message,/* dream0630 */
	std::string const& component) :/* dream0630 */
	_message(message), _component(component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
std::string const& NasaError::getComponent() const/* dream0630 */
{/* dream0630 */
	return (this->_component);/* dream0630 */
}/* dream0630 */
/* dream0630 */
const char *NasaError::what() const noexcept/* dream0630 */
{/* dream0630 */
	return this->_message.c_str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
LifeCriticalError::LifeCriticalError(std::string const& message,/* dream0630 */
	std::string const& component) :/* dream0630 */
	NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
MissionCriticalError::MissionCriticalError(std::string const& message,/* dream0630 */
	std::string const& component) :/* dream0630 */
	NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationError::CommunicationError(std::string const& message) :/* dream0630 */
	NasaError(message, "CommunicationDevice")/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
UserError::UserError(std::string const& message,/* dream0630 */
	std::string const& component) :/* dream0630 */
	NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
