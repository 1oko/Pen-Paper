#include <iostream>
#include <string>
#include "Pen.h"

 Pen::Pen(int inkCapacity) {
 	this->inkCapacity = inkCapacity;
 	this->inkAmount = inkCapacity;
 }

 Pen::~Pen() {

 }

 int Pen::getInkAmount() const {
 	return this->inkAmount;
 }

 int Pen::getInkCapacity() const {
 	return this->inkCapacity;
 }

 void Pen::write(Paper& paper, const std::string& message) {
 	std::string workMessage = message;
 	int symbolsLeft = paper.getMaxSymbols() - paper.getSymbols();
 	
 	if (paper.getMaxSymbols() == paper.getSymbols()) {
 		throw OutOfSpace();
 	}

 	if ( this->inkAmount == 0 ) {
 		throw OutOfInk();
 	}

 	if ( symbolsLeft < message.size() ) {
 		workMessage = message.substr(0, symbolsLeft);
 	}

 	if ( this->inkAmount < workMessage.size() ) {
 		workMessage = message.substr(0, inkAmount);
 	}

 	this->inkAmount -= workMessage.size();
 	paper.addContent(workMessage);
 }

 void Pen::refill() {
 	this->inkAmount = this->inkCapacity;
 }