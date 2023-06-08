//Cheung Ka Yan,1155162671,1155162671@link.cuhk.edu.hk
#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>
using namespace std;

int main() {
	int h, b, w, t, Ho_W, rocket_body, loop_temp;

	cout << "Enter h, b, w, t: ";
	cin >> h >> b >> w >> t;
	//valiadation
	if (h < 1 || b < 2 || w < 1 || t < 2)
	{
		return main();
	}
	if (h >= 30 || b >= 30 || w >= 30)
	{
		return main();
	}
	if (2 * t - 1 > 2 * h + 3)
	{
		return main();
	}
	//print the middle line first
	for (int space_w = 0; space_w <= w; space_w++)
	{
		cout << " ";
	}
	for (int space = h; space >= 1; space--)
	{
		cout << " ";
	}
	cout << "|";
	cout << endl;

	//Start to print the line with one star
	for (int loop = 0; loop < h; loop++)
	{
		for (int space_w = 1; space_w <= w; space_w++)
		{
			cout << " ";
		}
		for (int space = h - loop; space > 0; space--)
		{
			cout << " ";
		}
		cout << "/";
		for (int star = 0; star < 2 * loop + 1; star++)
		{
			cout << "*";
			rocket_body = star;
		}
		cout << "\\";
		cout << endl;
		loop_temp = loop;
	}
	//Print rocket body
	rocket_body = rocket_body + 3;
	for (int space_w = 1; space_w <= w; space_w++)
	{
		cout << " ";
	}
	cout << "+";
	for (int count_rocky_body = 1; count_rocky_body <= rocket_body; count_rocky_body++)
	{
		cout << "-";
	}
	cout << "+";
	cout << endl;
	for (int body = 1; body <= b; body++)
	{
		if (body > b / 2)
		{
			for (int space_w = 1; space_w <= w; space_w++)
			{
				cout << "/";
			}

		}
		else
		{
			for (int space_w = 1; space_w <= w; space_w++)
			{
				cout << " ";
			}
		}

		cout << "|";
		for (int body = 1; body <= rocket_body; body++)
		{
			cout << ".";
		}
		cout << "|";
		if (body > b / 2)
		{
			for (int space_w = 1; space_w <= w; space_w++)
			{
				cout << "\\";
			}
		}
		cout << endl;
	}
	for (int space_w = 1; space_w <= w; space_w++)
	{
		cout << " ";
	}
	cout << "+";
	for (int count_rocky_body = 1; count_rocky_body <= rocket_body; count_rocky_body++)
	{
		cout << "-";
	}
	cout << "+";
	cout << endl;

	//Print the rocket tail(frame)
	int tail;
	tail = t * 2;
	int cut = 0;
	cut = ceil(t / 2);
	for (int loop = 0; loop < t; loop++)
	{
		if (loop >= cut)
		{
			for (int space_w = 1; space_w <= w; space_w++)
			{
				cout << " ";
			}
			for (int space = h - loop; space >= 0; space--)
			{
				cout << " ";
			}
			for (int star = 0; star < 2 * loop + 1; star++)
			{
				cout << "*";
				rocket_body = star;
			}
			cout << endl;

		}
	}

	for (int loop = t; loop > 0; loop--)
	{


		for (int space_w = 1; space_w <= w; space_w++)
		{
			cout << " ";
		}
		for (int space = h - loop + 1; space >= 0; space--)
		{
			cout << " ";
		}
		for (int star = 0; star < 2 * (loop - 1) + 1; star++)
		{
			cout << "*";
			rocket_body = star;
		}
		cout << endl;


	}
	/*
	//The reverse one of the rocket
	int counter, star = 0;
	int number_of_star = 0;
	for (int loop = 0; loop < t; loop++)
	{
		number_of_star = rocket_body + 1 - (2 * loop);
			for (int space_w = 0; space_w < w; space_w++)
			{
				cout << "s";
			}
			if (rocket_body < number_of_star) {

				for (int space = 0; space < (rocket_body + 3 - number_of_star)+1-loop; space++)
				{
					cout << "!"; //rocket_body
				}

			}
			else {
				for (int space = 0; space < (rocket_body + 3 - number_of_star) + 1 - loop; space++)
				{
					cout << "+"; //rocket_body
				}
			}


			for (int star = 0; star < number_of_star; star++)
			{
				cout << "*";
			}
			cout << endl;

	}
	cout << rocket_body;
	*/
}