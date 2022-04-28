#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


void checkout(string v) //would just pass customer id, and other things to the function when bringing it all together
{
	string filename; 
	filename = "test.cvs";
	ofstream myfile(filename);
	myfile << "sep=," << endl;
	myfile << "CustomerID, ,SaleID, ,Product, , Price, ,Card Number, ,Security Code\n";
	int CustomerID = 001;
	int saleID = 5680;
	int price = 006;
	long long cardnum = 248080005568;
	int security = 600;
	myfile << CustomerID << ", ," << saleID<< ", ," << v << ", ," << price << ", ," << cardnum << ", ," << security << "\n";


}

int main()
{
	vector<string> testdata;
	string product="";
	testdata.push_back("Reebok Shoes");
	testdata.push_back("Nike Jacket");
	testdata.push_back("Purse");
	testdata.push_back("Gucci bag");
	testdata.push_back("Rayban Shades");
	for (int i =0; i< testdata.size(); i++ )
	{
		product += " " + testdata[i];
	}
	checkout(product);

	return 0;
}