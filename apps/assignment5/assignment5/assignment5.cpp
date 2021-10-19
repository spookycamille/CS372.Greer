#include<iostream>

using namespace std;

void moveDisk(int, char, char, char);

int main()
{
	int num = 5;

	moveDisk(num, 'A','C','B');
}

void moveDisk(int num, char fromPeg, char toPeg, char tempPeg)
{
	if (num == 1)
	{
		cout << "Move disk 1 from peg " << fromPeg << " to peg " << toPeg << endl;
		return;
	}

	moveDisk(num - 1, fromPeg, tempPeg, toPeg);
	cout << "Move disk " << num << " from peg " << fromPeg << " to peg " << toPeg << endl;

	moveDisk(num - 1, tempPeg, toPeg, fromPeg);

}