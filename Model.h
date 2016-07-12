#pragma once
#include "Property.h"
#include "string"
#include "map"

class Model
{
private:
	virtual std::string getTitle() = 0;
	virtual std::string getDescription() = 0;
	virtual std::map<std::string, Property> getProperties() = 0;
	virtual std::string getReference() = 0;

	virtual void setTitle(std::string title) const = 0;
	virtual void setDescription(std::string description) const = 0;
	virtual void setProperties(std::map<std::string, Property> properties)const = 0;
	virtual void setReference(std::string reference)const = 0;
};