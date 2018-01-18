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
	
	cout<<"Harga "<<(samsung.tipe)<< " : Rp. "<<(samsung.harga)<<endl;
	cout<<"Harga "<<(apple.tipe)<<" : Rp. "<<(apple.harga)<<endl;
	
	samsung.fitur("*Infinity Display \n*6.3'' screen \n*18.5:9 aspect ratio \n*Dual Camera with Dual OIS \n*Optical Zoom \n*Dual Pixel Sensor \n*Bright Lens \n");
}

void handphone::fitur(string fitur){
	cout<<endl<<"Fitur Samsung Galaxy Note 8 : "<<endl<<fitur;
}
