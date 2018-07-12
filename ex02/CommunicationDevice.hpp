/* dream0630 */
#ifndef COMMUNICATION_DEVICE_HPP_/* dream0630 */
#define COMMUNICATION_DEVICE_HPP_/* dream0630 */
/* dream0630 */
#include "CommunicationAPI.hpp"/* dream0630 */
/* dream0630 */
class CommunicationDevice/* dream0630 */
{/* dream0630 */
public:/* dream0630 */
/* dream0630 */
	CommunicationDevice(std::istream &input, std::ostream &output);/* dream0630 */
	~CommunicationDevice();/* dream0630 */
/* dream0630 */
	void startMission(std::string const &missionName,/* dream0630 */
		std::string *users, size_t nbUsers);/* dream0630 */
	void send(std::string const &user, std::string const &message) const;/* dream0630 */
	void receive(std::string const &user, std::string &message) const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	CommunicationAPI _api;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
