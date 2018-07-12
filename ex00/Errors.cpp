/* dream0630 */
#include "Errors.hpp"/* dream0630 */
/* dream0630 */
NasaError::NasaError(std::string const& message, std::string const& component) : _message(message), _component(component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
NasaError::~NasaError() throw()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
const char*	NasaError::what()/* dream0630 */
{/* dream0630 */
  return _message.c_str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
std::string const&	NasaError::getComponent() const/* dream0630 */
{/* dream0630 */
  return _component;/* dream0630 */
}/* dream0630 */
/* dream0630 */
MissionCriticalError::MissionCriticalError(std::string const& message, std::string const& component) : NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
MissionCriticalError::~MissionCriticalError() throw()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
LifeCriticalError::LifeCriticalError(std::string const& message, std::string const& component) : NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
LifeCriticalError::~LifeCriticalError() throw()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
UserError::UserError(std::string const& message, std::string const& component) : NasaError(message, component)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
UserError::~UserError() throw()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationError::CommunicationError(std::string const& message) : NasaError(message, "CommunicationDevice")/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationError::~CommunicationError() throw()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
