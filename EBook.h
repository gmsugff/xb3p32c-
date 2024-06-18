#pragma once

class EBook : public Book 
{
private:
	int fileSize;
public:
	EBook(const std::string& title,  std::string& author,  std::string& isbn, int fileSize);
	void displayDetails() override;
};