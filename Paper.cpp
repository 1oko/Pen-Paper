#include <iostream>
#include <string>
#include "Paper.h"

Paper::Paper(int maxSymbols) {
	this->maxSymbols = maxSymbols;
	this->symbols = 0;
	std::string content;
}

Paper::~Paper() {
}

int Paper::getMaxSymbols() const {
	return this->maxSymbols;
}

int Paper::getSymbols() const {
	return this->symbols;
}

void Paper::addContent(const std::string& message) {

	this->symbols += message.size();
	this->content += message;
}

void Paper::show() const {
	std::cout << this->content << std::endl;
}