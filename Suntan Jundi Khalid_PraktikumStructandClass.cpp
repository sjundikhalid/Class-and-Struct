#include <iostream>
using namespace std;

class PersegiPanjang{
	private:
		int panjang;
		int lebar;
	public:
		void setPanjang(int panjang){
			this -> panjang = panjang;
		}
		void setLebar(int lebar){
			this -> lebar   = lebar;
		}
		int getPanjang(){
			return panjang;
		}
		int getLebar(){
			return lebar;
		}
		int luas(){
			return panjang * lebar;
		}
};

int main(){
	PersegiPanjang psg(10,10);
	cout << "Panjang : " << psg.getPanjang() << endl;
	cout << "Lebar   : " << psg.getLebar() << endl;
	cout << "Luas    : " << psg.luas() << endl;
}
