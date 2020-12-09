#include <iostream>
using namespace std;
class Gradebook
{
public:
	void displayMessage() const
	{
		cout << "Welcome to Grade Book!" << endl;
	}
};
int main()
{
	Gradebook mygradebook;
	mygradebook.displayMessage();
}