#include <iostream>
using namespace std;

//struct Mahasiswa{
//	string nama, npm;
//};
//
//int main(){
//	Mahasiswa Mhs;
//	cin >> Mhs.nama;
//	cin >> Mhs.npm;
//	cout << Mhs.nama << " " << Mhs.npm;
//}

//class Mahasiswa{
//	private:
//		string nama, npm;
//		void perkenalan(){
//			cout << "Nama\t: " << nama << endl;
//			cout << "NPM\t: " << npm << endl;
//		}
//};
//
//int main(){
//	Mahasiswa Mhs;
//	cin >> Mhs.nama;
//	cin >> Mhs.npm;
//	
//	Mhs.perkenalan();
//}

//class Mahasiswa{
//	public:
//		Mahasiswa(){
//			cout << "Hallo World";
//		}
//};
//int main(){
//	Mahasiswa Mhs;
//	
//}

//class Mahasiswa{
//	public:
//		string nama, npm;
//		Mahasiswa(string nama, string b){
//			this->nama = nama;
//			npm = b;
//		}
//
//};
//
//int main(){
//	Mahasiswa Mhs("Jundi", "11711");
//	cout << "Nama\t: " << Mhs.nama << endl;
//	cout << "NPM\t: " << Mhs.npm << endl;
//
//}

//class Mahasiswa{
//	private:
//		string nama;
//		public:
//			void setNama(string nama){
//				this->nama = nama;
//			}
//};
//
//int main(){
//	Mahasiswa Mhs;
//	Mhs.setNama("Mak Jamping Jamping");
//}

class Mahasiswa{
	private:
		string nama;
		public:
			void setNama(string nama){
				this->nama = nama;
			}
			
			string getNama(){
				return nama;
			}
};

int main(){
	Mahasiswa Mhs;
	Mhs.setNama("Gokil");
	cout << Mhs.getNama();
}
