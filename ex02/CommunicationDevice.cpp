/* dream0630 */
#include <cstring>/* dream0630 */
#include <iostream>/* dream0630 */
#include <stdexcept>/* dream0630 */
#include "Errors.hpp"/* dream0630 */
#include "CommunicationDevice.hpp"/* dream0630 */
/* dream0630 */
CommunicationDevice::CommunicationDevice(/* dream0630 */
	std::istream &input, std::ostream &output)/* dream0630 */
try : _api(input, output)/* dream0630 */
{/* dream0630 */
} catch (std::exception const &ex) {/* dream0630 */
	throw CommunicationError(std::string("Error: ") + ex.what());/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationDevice::~CommunicationDevice()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::startMission(/* dream0630 */
	std::string const &missionName, std::string *users, size_t nbUsers)/* dream0630 */
{/* dream0630 */
	try {/* dream0630 */
		for (size_t i = 0; i < nbUsers; ++i)/* dream0630 */
			_api.addUser(users[i]);/* dream0630 */
		_api.startMission(missionName);/* dream0630 */
	} catch (std::logic_error const &ex) {/* dream0630 */
		throw (std::string("LogicError: ") + ex.what());/* dream0630 */
	} catch (std::runtime_error const &ex) {/* dream0630 */
		throw (std::string("RuntimeError: ") + ex.what());/* dream0630 */
	} catch (std::exception const &ex) {/* dream0630 */
		throw (std::string("Error: ") + ex.what());/* dream0630 */
	}/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::send(/* dream0630 */
	std::string const &user, std::string const &message) const/* dream0630 */
{/* dream0630 */
	try {/* dream0630 */
		_api.sendMessage(user, message);/* dream0630 */
	} catch (std::exception const &ex) {/* dream0630 */
		std::cerr << ex.what() << std::endl;/* dream0630 */
	}/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::receive(/* dream0630 */
	std::string const &user, std::string &message) const/* dream0630 */
{/* dream0630 */
	try {/* dream0630 */
		_api.receiveMessage(user, message);/* dream0630 */
	} catch (std::exception const &ex) {/* dream0630 */
		if (std::strcmp(ex.what(), "INVALID MESSAGE") == 0)/* dream0630 */
			std::cerr << "INVALID MESSAGE" << std::endl;/* dream0630 */
	}/* dream0630 */
}/* dream0630 */
/* dream0630 */
