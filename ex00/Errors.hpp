/* dream0630 */
#ifndef ERRORS_HPP_/* dream0630 */
#define ERRORS_HPP_/* dream0630 */
/* dream0630 */
#include <stdexcept>/* dream0630 */
#include <string>/* dream0630 */
/* dream0630 */
class NasaError : public std::exception {/* dream0630 */
public:/* dream0630 */
	NasaError(std::string const& message,/* dream0630 */
		std::string const& component = "Unknown");/* dream0630 */
/* dream0630 */
	std::string const& getComponent() const;/* dream0630 */
	const char *what() const noexcept;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	std::string _message;/* dream0630 */
	std::string _component;/* dream0630 */
};/* dream0630 */
/* dream0630 */
class LifeCriticalError : public NasaError {/* dream0630 */
public:/* dream0630 */
	LifeCriticalError(std::string const& message,/* dream0630 */
		std::string const& component = "Unknown");/* dream0630 */
};/* dream0630 */
/* dream0630 */
class MissionCriticalError : public NasaError {/* dream0630 */
public:/* dream0630 */
	MissionCriticalError(std::string const& message,/* dream0630 */
		std::string const& component = "Unknown");/* dream0630 */
};/* dream0630 */
/* dream0630 */
class CommunicationError : public NasaError {/* dream0630 */
public:/* dream0630 */
	CommunicationError(std::string const& message);/* dream0630 */
};/* dream0630 */
/* dream0630 */
class UserError : public NasaError {/* dream0630 */
public:/* dream0630 */
	UserError(std::string const& message,/* dream0630 */
		std::string const& component = "Unknown");/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
