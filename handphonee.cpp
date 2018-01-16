#include <iostream>
#include <string>
using namespace std;

class handphone{
	public:
		void fitur (string fitur);
		string tipe;
		int harga;
};

int main(){
	handphone samsung, apple;
	
	samsung.tipe="Samsung Galaxy Note 8";
	apple.tipe="Apple iPhone X";
	samsung.harga=12000000;
	apple.harga=20000000;
	
	cout<<"Harga Samsung Galaxy Note 8 : Rp. "<<(samsung.harga)<<endl;
	cout<<"Harga Apple iPhone X : Rp. "<<(apple.harga)<<endl;
}
