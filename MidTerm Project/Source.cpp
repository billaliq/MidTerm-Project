#include <iostream>
using namespace std;
int main() {
	double salesRate, totalCost;
	int price, quant;
	string choice;

	do
	{

		cout << "\n\n do you want to calcilate";
		cin >> choice;
		cout << "\n" << "\n";
			if (choice == "no")
			{
				break;
			}
		do
		{
			cout << "Enter the Price of product: ";
			cin >> price;

			cout << "Enter the quantity: ";
			cin >> quant;

			cout << "Enter the sales rate:";
			cin >> salesRate;


			totalCost = (price *quant) + salesRate;


			if (quant >= 10)
			{
				totalCost = totalCost + 0.2;
			}
			cout << "\n\n The total cost is = " << totalCost;
			price++;
		} while (price <= 0);
	} while (choice == "yes");
	
	return 0;

	
}