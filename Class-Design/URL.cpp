#include <iostream>
#include <string>
#include "url.h"

url::url(std::string link)
	: myLink{ link } {
	int schemeIndex = myLink.find(":");
	scheme = myLink.substr(0, schemeIndex + 1);

	int authorityBegin = myLink.find("://");
	std::string authorityStart = myLink.substr(authorityBegin + 1, myLink.size() - 1);
	int authorityEnd = authorityStart.find_first_of("/", 2);
	authority = authorityStart.substr(0, authorityEnd);

	path = authorityStart.substr(authorityEnd, authorityStart.size() - 1);
}


std::string url::getURL() const {
	return myLink;
}

std::string url::getScheme() const {
	return scheme;
}

std::string url::getAuthority() const {
	return this->authority;
}

std::string url::getPath() const {
	return this->path;
}

std::ostream& operator<<(std::ostream& stream, const url& u) {
	stream << "URL: " << u.getURL() << "\n SCHEME: " << u.getScheme() << "\n AUTHORITY: " << u.getAuthority() << "\n PATH: " << u.path;
	return stream;
}
