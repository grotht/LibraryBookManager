
#include <iostream>
#include <conio.h>

using namespace std;

struct Book 
{
	string title;
	string author;
	int yearPublished;
	int numPages;
};


int main()
{
	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS];

	books[0] = { "Charlotte's Web", "E.B. White", 1952, 192 };
	books[1] = { "Matilda", "Roald Dahl", 1988, 240 };
	books[2] = { "The Cat in the Hat", "Dr. Seuss", 1957, 61 };
	books[3] = { "The Very Hungry Caterpillar", "Unknown", 2024, 450 };

	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << i + 1 << ". " << books[i].title << "\n";
		cout << "Author: " << books[i].author << "\n";
		cout << "Year Published: " << books[i].yearPublished << "\n";
		cout << "Number of Pages: " << books[i].numPages << "\n\n";
	}

	cout << "Enter the ID of the book you would like to update (1-4): ";
	
	int Id;
	cin >> Id;
	Id -= 1;

	if (Id >= NUM_BOOKS || Id < 0)
	{
		cout << "The selected book is not in the library.\n";
	}
	else
	{
		cout << Id + 1 << ". " << books[Id].title << "\n";

		cout << "Enter the Author (" << books[Id].author << "): ";
		string updatedAuthor;
		cin >> updatedAuthor;

		cout << "Enter the Year Published (" << books[Id].yearPublished << "): ";
		int updatedYear;
		cin >> updatedYear;

		cout << "Enter the Number of Pages (" << books[Id].numPages << "): ";
		int updatedPages;
		cin >> updatedPages;

		cout << "Save these changes? (Y/N): ";
		char save;
		cin >> save;

		if (save == 'Y' || save == 'y')
		{
			cout << "\nChanges saved.\n\n";

			books[Id].author = updatedAuthor;
			books[Id].yearPublished = updatedYear;
			books[Id].numPages = updatedPages;

			cout << Id + 1 << ". " << books[Id].title << "\n";
			cout << "Author: " << books[Id].author << "\n";
			cout << "Year Published: " << books[Id].yearPublished << "\n";
			cout << "Number of Pages: " << books[Id].numPages << "\n";
		}
		else
		{
			cout << "\nChanges not saved.\n";
		}
	}

	(void)_getch();
	return 0;
}
