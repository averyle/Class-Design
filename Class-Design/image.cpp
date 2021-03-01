#include <iostream>
#include <string>
#include "image.h"

image::image(std::string name)
	: fileName{ name } {}


void image::setFileName() {
	std::cout << "Please enter your new file name: ";
	std::string n;
	std::cin >> n;
	fileName = n;
}

void image::setType() {
	std::cout << "Please enter your image type (PNG, JPEG, or GIF): ";
	std::string nType;
	std::cin >> nType;
	if (nType == "PNG" || nType == "JPEG" || nType == "GIF") {
		type = nType;
	}
	else
		std::cout << "Invalid image type \n";
}

void image::setDate() {
	std::cout << "Please enter your image date (MM/DD/YYYY) ";
	std::string nDate;
	std::cin >> nDate;
	date = nDate;
}

void image::setSize() {
	std::cout << "Please enter your image size: ";
	int nSize;
	std::cin >> nSize;
	size = nSize;
}

void image::setAuthor() {
	std::cout << "Please enter your author: ";
	std::string nAuthor;
	std::cin >> nAuthor;
	author = nAuthor;
}

void image::setDimensions() {
	std::cout << "Please enter your image's width: ";
	int nWidth;
	std::cin >> nWidth;
	width = nWidth;
	std::cout << "Please enter your image's height: ";
	int nHeight;
	std::cin >> nHeight;
	height = nHeight;
}

void image::setASize() {
	std::cout << "Please enter your aperture size: ";
	int nASize;
	std::cin >> nASize;
	ASize = nASize;
}

void image::setExpTime() {
	std::cout << "Please enter your exposure time (1/___): ";
	double nExpTime;
	std::cin >> nExpTime;
	image::expTime = nExpTime;
}

void image::setISO() {
	std::cout << "Please enter your ISO: ";
	int nISO;
	std::cin >> nISO;
	ISO = nISO;
}

void image::setFlash() {
	std::cout << "Was the flash on? (y/n)";
	std::string ans;
	std::cin >> ans;
	if (ans == "y")
		flash = 1;
	else if (ans == "n")
		flash = 0;
}

std::string image::getFileName() const {
	return fileName;
}

std::string image::getType() const {
	return type;
}

std::string image::getDate() const {
	return date;
}

double image::getSize() const {
	return size;
}

std::string image::getAuthor() const {
	return author;
}

std::string image::getDimensions() const {
	std::string dimensions = std::to_string(width) + " by " + std::to_string(height);
	return dimensions;
}

int image::getASize() const {
	return ASize;
}

double image::getExpTime() const {
	return expTime;
}

int image::getISO() const {
	return ISO;
}

std::string image::getFlash() const {
	if (flash == 0)
		return "Off";
	else
		return "On";
}

std::ostream& operator<<(std::ostream& os, const image& param) {
	os << "File Name: " << param.getFileName() <<
		"\nType: " << param.getType() <<
		"\nDate: " << param.getDate() <<
		"\nSize: " << param.getSize() << " MB" <<
		"\nAuthor: " << param.getAuthor() <<
		"\nDimensions: " << param.getDimensions() <<
		"\nAperture size: f/" << param.getASize() <<
		"\nExposure time: 1/" << param.getExpTime() <<
		"\nISO: " << param.getISO() <<
		"\nFlash: " << param.getFlash();
	return os;
}