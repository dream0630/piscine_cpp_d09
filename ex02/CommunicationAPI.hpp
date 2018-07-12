/* dream0630 */
#ifndef COMMUNICATION_HPP_/* dream0630 */
#define COMMUNICATION_HPP_/* dream0630 */
/* dream0630 */
#include <string>/* dream0630 */
#include <vector>/* dream0630 */
#include <istream>/* dream0630 */
#include <ostream>/* dream0630 */
/* dream0630 */
class CommunicationAPI/* dream0630 */
{/* dream0630 */
public:/* dream0630 */
	CommunicationAPI(std::istream &input, std::ostream &output);/* dream0630 */
/* dream0630 */
	~CommunicationAPI();/* dream0630 */
/* dream0630 */
	void startMission(std::string const &missionName);/* dream0630 */
/* dream0630 */
	void addUser(std::string const &userName);/* dream0630 */
/* dream0630 */
	void receiveMessage(std::string const &name, std::string &msg) const;/* dream0630 */
/* dream0630 */
	void sendMessage(std::string const &userName,/* dream0630 */
		std::string const &message) const;/* dream0630 */
/* dream0630 */
	bool hasUser(std::string const &name) const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	static const size_t MAX_USERS = 5;/* dream0630 */
/* dream0630 */
	size_t _usersOffset;/* dream0630 */
	std::istream &_input;/* dream0630 */
	std::ostream &_output;/* dream0630 */
	std::string _missionName;/* dream0630 */
	std::string _users[MAX_USERS];/* dream0630 */
/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
/* dream0630 */
