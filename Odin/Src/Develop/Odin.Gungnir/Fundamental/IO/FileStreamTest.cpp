#include "FileStreamTest.h"
#include <iostream>
#include <fstream>

using namespace std;

void FileStreamTest::simpleInputOutput()
{
	ofstream fout("test.out");
	if (!fout) {
		cerr << "Error opening test.out for writing" << endl;
		return;
	}

	// 1. Output the string "12345".
	fout << "123456789";

	// 2. Verify that the marker is at position 10.
	ios_base::streampos curPos = fout.tellp();
	cout << "Current Pos: " << curPos << endl;
	if (9 == curPos) {
		cout << "Test passed: Currently at position 9" << endl;
	}
	else {
		cout << "Test failed: Not at position 9" << endl;
	}

	// 3. Move to position 2 in the stream.
	fout.seekp(2, ios_base::beg);

	// 4. Output a 0 in position 2 and close the stream.
	fout << 0;
	fout.close();

	// 5. Open an input stream on test.out.
	ifstream fin("test.out");
	if (!fin) {
		cerr << "Error opening test.out for reading" << endl;
		return;
	}

	// 6. Read the first token as an integer.
	int testVal;
	fin >> testVal;

	// 7. Confirm that the value is 120456789.
	const int expected = 120456789;
	if (testVal == expected) {
		cout << "Test passed: Value is " << expected << endl;
	}
	else {
		cout << "Test failed: Value is not " << expected
			<< "(it was " << testVal << ")" << endl;
	}
}

void FileStreamTest::streamIOTest()
{
	// using the append mode to open a file
	ofstream outfile("seq_data.txt", ios_base::app);

	if (!outfile)
	{
		cerr << "Unable to save data!!\n" << endl;
	}
	else
	{
		// write data in the file
		string name = "Unknown"; 
		string title = "Staff";
		double salary = 0;
		
		bool find;
		while (true)
		{
			find = false;
			std::cout << "Input Name: ";
			std::cin >> name;
			if (name == "end")
			{
				break;
			}

			ifstream infile("seq_data.txt");
			if (!infile)
			{
				std::cerr << "Unable to read data!!\n";
			}
			else
			{
				string n;
				while (infile >> n)
				{
					if (n == name)
					{
						std::cout << name << " alreday exist!" << endl;
						find = true;
					}
				}
			}

			if (find)
			{
				continue;
			}

			std::cout << "Input Title: ";
			std::cin >> title;
			std::cout << "Input Salary: ";
			std::cin >> salary;
			outfile << name << "  " << title << "  " << salary << endl;
		}
		std::cout << "End of inputing..." << endl;
		
	}
}

void FileStreamTest::run()
{
	printStart("simpleInputOutput()");
	simpleInputOutput();
	printEnd("simpleInputOutput()");

	printStart("streamIOTest()");
	streamIOTest();
	printEnd("streamIOTest()");
}