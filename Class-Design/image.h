#pragma once
#include <string>
#include <iostream>
#include <cstring>

class image {
public:
	image(std::string name);

	void setFileName();
	void setType();
	void setDate();
	void setSize();
	void setAuthor();
	void setDimensions();
	void setASize();
	void setExpTime();
	void setISO();
	void setFlash();
	
	std::string getFileName();
	std::string getType();
	std::string getDate();
	double getSize();
	std::string getAuthor();
	std::string getDimensions();
	int getASize();
	double getExpTime();
	int getISO();
	std::string getFlash();

private:
	std::string fileName , type = "type" , date = "date", author = "author";
	double size = 0, expTime = 0;
	int ASize = 0, width = 0, height = 0, ISO = 0;
	bool flash = 0;
};

inline void print(image param) {
	std::cout << "File Name: " << param.getFileName() <<
		"\nType: " << param.getType() <<
		"\nDate: " << param.getDate() <<
		"\nSize: " << param.getSize() << " MB" <<
		"\nAuthor: " << param.getAuthor() <<
		"\nDimensions: " << param.getDimensions() <<
		"\nAperture size: f/" << param.getASize() <<
		"\nExposure time: 1/" << param.getExpTime() <<
		"\nISO: " << param.getISO() <<
		"\nFlash: " << param.getFlash();
}