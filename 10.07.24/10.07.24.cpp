#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () 
{
	srand(static_cast<unsigned int>(time(0)));
	// ��������� ��������� ��������� �����
	int randomNumber = rand(); // ���������� ��������� �����
	int die = (randomNumber % 6) + 1; // �������� ����� ����� 1 � 6 
	cout << "You rolled a " << die << endl;
	cout << RAND_MAX;
	return 0;
}