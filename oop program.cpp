#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
////////////////////////////////////////////////////////////////////
class restaurant
{
	private:
		string dish [10];
		int price [10];
		int num, cost;
	public:
		void inputorder()
		{
			cout<<"Masukkan jumlah pesanan (<=10): ";
			cin>>num;
			for (int i=0; i<=num-1; i++)
				{
					system("cls");
					cout<<"Masukkan pesanan : ";
					cin>>dish[i];
					cout<<"/nmasukkan harga:";
					cin>>price[i];
				}
			cout<<endl;
		}
		void calculatebill()
		{
			for (int i=0; i<=num-1; i++)
				cost += price[i];
		}
		void showbill()
		{
			system("cls");
			cout<<setw(15)<<"	Pesanan"<<setw(20)<<"	Harga"<<endl<<endl;
			for (int i=0; i<=num-1; i++)
				cout<<setw(15)<<dish[i]<<setw(20)<<"Rp."<<price[i]<<endl;
			for(int l=1; l<=45; l++)
				cout<<"-";
			cout<<endl;
			cout<<setw(15)<<"Total harga"<<setw(20)<<"Rp."<<cost<<endl<<endl;
			cout<<"\nterima kasih";
		}
};
//////////////////////////////////////////////////////////////////////////
int main()
{
	cout<<"--------------------------------------------------------------------------------\n\n";
	cout<<"			APLIKASI PEMESANAN MENU RESTAURANT\n\n";
	cout<<"--------------------------------------------------------------------------------\n";
	restaurant order;
	order.inputorder();
	order.calculatebill();
	order.showbill();
	system("pause");
	return 0;
}


