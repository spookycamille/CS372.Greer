#include<iostream>
#include<string>
#include<fstream>
#include<queue>

using namespace std;

template<typename T>
void print_queue(T q)
{
	while (!q.empty()) {
		std::cout << q.top() << ' ';
		q.pop();
	}
}

int main()
{
	int choice;
	string fileText;
	string line;

	cout << "Enter '1' to display all items" << endl;
	cout << "Enter '2' to display a selected item" << endl;
	cout << "Enter '3' to mark a task as done" << endl;
	cout << "Enter '4' to mark a task as priority" << endl;
	cout << "Enter '5' to exit the program" << endl;

	cin >> choice;

	ofstream file;
	file.open("Asg4.1.txt");

	ifstream readFile("Asg4.1.txt");

	switch (choice)
	{
	case 1:
		//Display code
		while (getline(readFile, fileText))
		{
			cout << fileText;
		}
		break;

	case 2:
		//Display slected item code
		for (int lineNo = 1; getline(readFile, line) && lineNo < 3; lineNo++)
		{
			if (lineNo == 2)
			{
				cout << line << endl;
			}
		}
		break;

	case 3:
		//Mark task
		break;

	case 4:
		priority_queue<int> q;

		int const data = '!';

		for (int n : data)
			q.push(n);

		print_queue(q);

		for (int n : data)
			q3.push(n);
	}

	case 5:
		cout << "End of program" << endl;
		return 0;
		break;

	default:
		cout << "Invlaid choice. Enter a number between 1-4" << endl;
		break;
	}

	file.close();
}