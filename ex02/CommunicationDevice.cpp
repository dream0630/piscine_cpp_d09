#include <iostream>/* dream0630 */
#include <stdexcept>/* dream0630 */
#include <sstream>/* dream0630 */
#include "Errors.hpp"/* dream0630 */
#include "CommunicationDevice.hpp"/* dream0630 */
/* dream0630 */
CommunicationDevice::CommunicationDevice(std::istream &input,/* dream0630 */
                                         std::ostream &output)/* dream0630 */
   try : _api(input, output)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
catch(std::exception &e) {/* dream0630 */
std::stringstream out;/* dream0630 */
/* dream0630 */
out << "Error: " << e.what();/* dream0630 */
throw CommunicationError(out.str());/* dream0630 */
}/* dream0630 */
/* dream0630 */
CommunicationDevice::~CommunicationDevice()/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::startMission(std::string const &missionName,/* dream0630 */
                                  std::string *users,/* dream0630 */
                                  size_t nbUsers)/* dream0630 */
{/* dream0630 */
  std::stringstream out;/* dream0630 */
/* dream0630 */
  try {/* dream0630 */
    for (size_t i = 0; i < nbUsers; ++i)/* dream0630 */
      _api.addUser(users[i]);/* dream0630 */
    _api.startMission(missionName);/* dream0630 */
  }/* dream0630 */
  catch(std::logic_error &e) {/* dream0630 */
    out << "LogicError: " << e.what();/* dream0630 */
    throw CommunicationError(out.str());/* dream0630 */
  }/* dream0630 */
  catch(std::runtime_error &e) {/* dream0630 */
    out << "RuntimeError: " << e.what();/* dream0630 */
    throw CommunicationError(out.str());/* dream0630 */
  }/* dream0630 */
  catch(std::exception &e) {/* dream0630 */
    out << "Error: " << e.what();/* dream0630 */
    throw CommunicationError(out.str());/* dream0630 */
  }/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::send(std::string const &user,/* dream0630 */
                          std::string const &message) const/* dream0630 */
{/* dream0630 */
  try {/* dream0630 */
    _api.sendMessage(user, message);/* dream0630 */
  }/* dream0630 */
  catch(std::exception &e) {/* dream0630 */
    std::cerr << e.what() << std::endl;/* dream0630 */
  }/* dream0630 */
}/* dream0630 */
/* dream0630 */
void CommunicationDevice::receive(std::string const &user,/* dream0630 */
                             std::string &message) const/* dream0630 */
{/* dream0630 */
  try {/* dream0630 */
    _api.receiveMessage(user, message);/* dream0630 */
  }/* dream0630 */
  catch (std::exception &e) {/* dream0630 */
    std::cerr << e.what() << std::endl;/* dream0630 */
    std::cerr << "INVALID MESSAGE" << std::endl;/* dream0630 */
  }/* dream0630 */
}/* dream0630 */
