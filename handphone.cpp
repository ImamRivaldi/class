#include <iostream>
#include <string>
using namespace std;

class handphone{
	public:
		void bemain (string mainan);
		string design;
		string camera;
		int harga;
};

int main(){
	handphone handphonesamsung;
	
	handphonesamsung.design="*Infinity Display \n*6.3'' screen \n*18.5:9 aspect ratio \n";
	handphonesamsung.camera="*Dual Camera with Dual OIS \n*Optical Zoom \n*Dual Pixel Sensor \n*Bright Lens \n";
	handphonesamsung.harga=12000000;
}
