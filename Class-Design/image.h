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
	
	std::string getFileName() const;
	std::string getType() const;
	std::string getDate() const;
	double getSize() const;
	std::string getAuthor() const;
	std::string getDimensions() const;
	int getASize() const;
	double getExpTime() const;
	int getISO() const;
	std::string getFlash() const;

private:
	std::string fileName , type = "type" , date = "date", author = "author";
	double size = 0, expTime = 0;
	int ASize = 0, width = 0, height = 0, ISO = 0;
	bool flash = 0;
};

std::ostream& operator<<(std::ostream& os, const image& param);