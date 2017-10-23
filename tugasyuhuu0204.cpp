#include <iostream>
using namespace std;

int main(){
	int luasrumah=42;
	cout<<"Luas Rumah               : 42m2"<<"\n";
		
	double panjangparket=0.193;
	cout<<"Panjang Parket           : "<<panjangparket<<"m2\n";
	 
	double lebarparket=1.215;
	cout<<"Lebar Parket             : "<<lebarparket<<"m2\n";
	
	double kepingparket=panjangparket*lebarparket;
	cout<<"1 Keping Parket          : "<<kepingparket<<"m2\n";
	cout<<"1 box                    : 8 keping parket\n";
	
	double luas1boxparket=kepingparket*8;
	cout<<"Luas 1 box Parket        : "<<luas1boxparket<<"m2\n";
	
	double jumlahboxparket=luasrumah/luas1boxparket;
	cout<<"Jumlah box Parket        : "<<jumlahboxparket<<"\n";
	
	int upah1box=500;
	cout<<"Upah 1 box Parket(Rp)    : 500\n";
	
	int upahpemasanganperm2=20;
	cout<<"Upah Pemasangan perm2(Rp): 20\n";
	
	double biayaparket=jumlahboxparket*upah1box;
	cout<<"Biaya Parket(Rp)         : "<<biayaparket<<"\n";
	
	double biayapasang=luasrumah*upahpemasanganperm2;
	cout<<"Biaya Pasang(Rp)         : "<<biayapasang<<"\n";
	
	double totalbiaya=biayaparket+biayapasang;
	cout<<"Total Biaya(Rp)          : "<<totalbiaya<<"\n";
	
}
