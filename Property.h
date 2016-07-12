#pragma once
#include "string"
#include <memory>

class Property
{
private:
	virtual std::unique_ptr<Property> title(std::string title) const = 0;
	virtual std::unique_ptr<Property> description(std::string descpn) const = 0;

	virtual std::string getType() const = 0;
	virtual std::string getFormat() const = 0;
	virtual std::string getTitle() const = 0;
	virtual std::string getDescription() const = 0;
	virtual std::string getName() const = 0;

	virtual	void setTitle(std::string title) const = 0;
	virtual	void setName(std::string name) const = 0;
	virtual void setDescription(std::string title) const = 0;
};