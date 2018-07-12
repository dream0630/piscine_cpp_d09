/* dream0630 */
#include <stdexcept>/* dream0630 */
#include <exception>/* dream0630 */
#include "CommunicationAPI.hpp"/* dream0630 */
/* dream0630 */
CommunicationAPI::CommunicationAPI(std::istream &input, std::ostream &output) :/* dream0630 */
	_usersOffset(0), _input(input), _output(output)/* dream0630 */
{/* dream0630 */
	if (!_input.good())/* dream0630 */
		throw std::runtime_error("Invalid input stream.");/* dream0630 */
	if (!_output.good())/* dream0630 */
		throw std::runtime_error("Invalid output stream.");/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationAPI::~CommunicationAPI()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
bool CommunicationAPI::hasUser(std::string const &userName) const/* dream0630 */
{/* dream0630 */
	for (size_t i = 0; i < _usersOffset; ++i) {/* dream0630 */
		if (_users[i] == userName)/* dream0630 */
			return true;/* dream0630 */
	}/* dream0630 */
	return false;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationAPI::startMission(std::string const &missionName)/* dream0630 */
{/* dream0630 */
	if (missionName.size() == 0)/* dream0630 */
		throw std::invalid_argument(/* dream0630 */
			"`missionName` should be at least 1 char.");/* dream0630 */
	_missionName = missionName;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationAPI::addUser(std::string const &userName)/* dream0630 */
{/* dream0630 */
	if (userName.size() == 0)/* dream0630 */
		throw std::invalid_argument(/* dream0630 */
			"`userName` should be at least 1 char.");/* dream0630 */
	if (_usersOffset > MAX_USERS)/* dream0630 */
		throw std::out_of_range("Exceed max number of users added.");/* dream0630 */
	_users[_usersOffset] = userName;/* dream0630 */
	_usersOffset += 1;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationAPI::sendMessage(/* dream0630 */
	std::string const &userName, std::string const &message) const/* dream0630 */
{/* dream0630 */
	if (!hasUser(userName))/* dream0630 */
		throw std::invalid_argument("User " + userName + " not found.");/* dream0630 */
	if (_missionName.size() == 0)/* dream0630 */
		throw std::runtime_error("No mission started.");/* dream0630 */
	_output << message;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationAPI::receiveMessage(/* dream0630 */
	std::string const &userName, std::string &message) const/* dream0630 */
{/* dream0630 */
	if (!hasUser(userName))/* dream0630 */
		throw std::invalid_argument("User " + userName + " not found.");/* dream0630 */
	if (_missionName.size() == 0)/* dream0630 */
		throw std::runtime_error("No mission started.");/* dream0630 */
	_input >> message;/* dream0630 */
}/* dream0630 */
/* dream0630 */
