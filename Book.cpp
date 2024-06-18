#include "Book.h"
Book::Book(std::string& title, std::string& author, std::string& isbn):title(title), author(author), isbn(isbn), isAvailable(true)
{

}

std::string Book::getTitle() 
{
	return title; 
}

std::string Book::getAuthor() 
{
	return author;

}

std::string Book::getIsbn() 
{ return isbn;
}

bool Book::getIsAvailable() 
{ 
	return isAvailable;
}

void Book::displayDetails() 
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Author: " << author << std::endl;
	std::cout << "ISBN: " << isbn << std::endl;
}