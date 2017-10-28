//main.cpp
#include "Test.h"
#include "Factory.h"
#include <stdlib.h>

#include <iostream>
using namespace std;

void Settings()
{
	system("color 02");
	system("mode con cols=120 lines=80");
}

void VersionInfo()
{
	cout << "---------------------------------------------" << endl;
	cout << "--  Odin Cpp Trainer   v1.0                --" << endl;
	cout << "--  Author:      Master HaKu               --" << endl;
	cout << "--  Copy Right:  2014                      --" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "\n" << endl;
}

/*
	Basic Module
*/
void BasicRunner(int id)
{
	Factory *factory;
	Test *test;

	switch (id)
	{
	case 0:
		break;
	case 1:
		factory = new BasicTestFactory();
		test = factory->CreateTest();
		test->Run();
		break;
	case 2:
		factory = new MyStringTestFactory();
		test = factory->CreateTest();
		test->Run();
		break;
	default:
		cout << "You select the wrong menu!" << endl;
		break;
	}
}

/*
	Conncurrency Module
*/
void ConncurrencyRunner(int id)
{
	Factory *factory;
	Test *test;

	switch (id)
	{
	case 0:
		break;
	case 1:
		factory = new HelloThreadFactory();
		test = factory->CreateTest();
		test->Run();
		break;
	case 2:
		factory = new BasicThreadFactory();
		test = factory->CreateTest();
		test->Run();
		break;
	default:
		cout << "You select the wrong menu!" << endl;
		break;
	}
}

/*
	File & Stream Module
*/
void FileStreamRunner(int id)
{
	Factory *factory;
	Test *test;

	switch (id)
	{
	case 0:
		break;
	case 1:
		factory = new WriteCharToStreamFactory();
		test = factory->CreateTest();
		test->Run();
		break;
	default:
		cout << "You select the wrong menu!" << endl;
		break;
	}
}

/*
	Module Scheduler
*/
void TestRunner(int menuId, int id)
{
	switch (menuId)
	{
	case 0:
		break;
	case 1:
		BasicRunner(id);
		break;
	case 2:
		ConncurrencyRunner(id);
		break;
	case 3:
		FileStreamRunner(id);
		break;
	default:
		cout << "You select the wrong menu!" << endl;
		break;
	}
}

/*
	Sub Menu of Console
*/
void SubMenu(int id)
{
	cout << "****************************************" << endl;
	cout << "**  Sub Menu Select                   **" << endl;

	switch (id)
	{
	case 0:
		break;
	// Basic
	case 1:
		cout << "**  1-> Basic Test                    **" << endl;
		cout << "**  2-> MyString Test                 **" << endl;
		break;
	// Concurrency
	case 2:
		cout << "**  1-> Hello Thread                  **" << endl;
		cout << "**  2-> Basic Thread                  **" << endl;
		break;
	// File & Stream
	case 3:
		cout << "**  1-> Write Char To Stream		   **" << endl;
	default:
		cout << "You select the wrong menu!" << endl;
		break;
	}
	
	cout << "****************************************" << endl;
	
	int subMenu = -1;
	cout << "Please select sub menu index(0 - goto main menu): ";
	cin >> subMenu;

	TestRunner(id, subMenu);
}

/*
	Main Menu of Console
*/
void MainMenu()
{
	int selMenu = -1;
	int end;

	/*while (selMenu != 0)
	{*/
		cout << "----------------------------------------" << endl;
		cout << "--  Main Menu Select                  --" << endl;
		cout << "--  1-> Basic                         --" << endl;
		cout << "--  2-> Concurrency                   --" << endl;
		cout << "--  3-> File & Stream                   --" << endl;
		cout << "----------------------------------------" << endl;
		cout << "\n" << endl;
		
		cout << "Please select main menu index(0 - exit): ";
		cin >> selMenu;

		if (selMenu != 0)
		{
			SubMenu(selMenu);

			cout << "\n" << endl;
			cout << "###########################################" << endl;
			cout << "## One Test Runner End, Try Another One! ##" << endl;
			cout << "###########################################" << endl;
			cout << endl;
		}
		else
		{
			cout << "-- You have exited the Odin Cpp Trainer! Bye! --" << endl;
		}
	/*}*/

	cout << "Press Any Key to Continue ... " << endl;
	cin >> end;
}

int main(int argc, char* argv[])
{
	Settings();

	VersionInfo();

	MainMenu();

	return 0;
}
