#include <string>
#include <iostream>
#include <cstring>

class url {
public:
	url(std::string link);

	std::string getURL() const;
	std::string getScheme() const;
	std::string getAuthority() const;
	std::string getPath() const;
	std::string myLink, scheme, authority, path;
};

std::ostream& operator<<(std::ostream& os, const url& u);
