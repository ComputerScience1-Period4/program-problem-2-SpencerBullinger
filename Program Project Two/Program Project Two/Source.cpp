/*
Spencer Bullinger 9/25/17 P.4
Program Project Two Take_In_Data
Goal: utlilize all 6 of the coding variable types. Also, include numbers to compute small sums, products, divisions, and subtractions.

*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Variables
	int x;
	int y;
	int z;
	char name;
	char grade;
	double gpa;
	bool no;

	//Program: Focusing on GPA. Input info at first, then computer talks, then final GPA.
	cout << "what is the first letter of your first name?\n";
	cin >> name; //intro
	cout << "Hello " << name << endl;
	pause();
	cout << "How old are you " << name << "?\n";
	cin >> grade;
	cout << "Wow, I thought you were younger. You must be in highschool then. \n What is your GPA?\n";
	_getch();
	cin >> gpa;
	cout << "haha my dog has a better GPA then that. \n I will go ahead and double your GPA; maybe that will help.\n";
	_getch();
	gpa = gpa * 2; // midst of the computer calculations
	cout << "Oh no. Good thing Collin still has empty seats. \n" << name << ", you must be desperate. Let's add 500.\n";
	_getch();
	gpa = gpa + 500;
	cout << "Hmmm we just got out of the negatives. That's decent, I guess.\n" << "You know what? Back in my day I did not get these CRAZY GPA curves.\n" << "I am removing the 500.\n";
	_getch();
	gpa = gpa - 500;
	cout << "I did not know numbers could count that low. Learn something new I guess.\n" << "I hope you studied for the latest AP physics test; the grades are in Skyward. ;)\n";
	_getch();
	gpa = gpa / 2;
	gpa = gpa - 1000;
	cout << "You have a final GPA of " << gpa << " " <<  name << ", NICE!!!!!\n"; //Displays final
	no == 5; // incoporate bool statement	

	// Display Text
	pause(); // pauses to see the full displayed text
	return;
}
