#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
//v2.0, where it passes everything through

void checkout(string v ,int cid ,int sid ,int pri, long long cn, int sc ) //would just pass customer id, and other things to the function when bringing it all together
{
	string filename; 
	filename = "test.cvs";
	ofstream myfile(filename);
	myfile << "sep=," << endl;
	myfile << "CustomerID, ,SaleID, ,Product, , Price, ,Card Number, ,Security Code\n";
	myfile << cid << ", ," << sid<< ", ," << v << ", ," << pri << ", ," << cn<< ", ," << sc << "\n";


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
	int CustomerID = 001; // this comes from customer login
	int saleID = 5680; // simple rng or counter to track/ gen sales #
	int price = 006; // comes from the inventory or cart section
	long long cardnum = 248080005568; // user input, simply ask user for card #
	int security = 600; // user input, simply ask user for card security #
	checkout(product, CustomerID, saleID,price,cardnum,security); // this function basically just passes it through everything

	return 0;
}