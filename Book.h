#pragma once
#include <iostream>
#include <vector>
#include <string>
class Book {
protected:
	std::string title;
	std::string author;
	std::string isbn;
	bool isAvailable;
public:
	Book(const std::string& title, const std::string& author, const std::string& isbn);
	std::string getTitle();
	std::string getAuthor();
	std::string getIsbn();
	bool getIsAvailable();
	virtual void displayDetails();
};
