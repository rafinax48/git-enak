#include <iostream>
using namespace std;

int main(){
	string nama;
	int pilih, jarak, ongkir, harga,satuan;
	char lagi;
	
	do {
		cout<<"==========RUMAH MAKAN NIGGA=========="<<endl;
		cout<<"==========MENU=========="<<endl;
		cout<<"1. Ayam Geprek  : 21000"<<endl;
		cout<<"2. Ayam Goreng  : 17000"<<endl;
		cout<<"3. Udang Goreng : 19000"<<endl;
		cout<<"4. Cumi Goreng  : 20000"<<endl;
		cout<<"5. Ayam Bakar   : 25000"<<endl;
		cout<<"Pilih pesanan anda: ";
		cin>>pilih;
		
		if(pilih<6 && pilih >0){
			cout<<"Jarak (KM): ";
			cin>>jarak;
			
			if (jarak >= 0){
				if(jarak > 3){
					ongkir = 25000;
				} else{
					ongkir = 15000;
				}
				
	
		switch (pilih){
			case 1:
			nama = "Ayam Geprek";
			satuan = 21000;
			harga = ongkir + satuan;
			break;
			case 2:
			nama = "Ayam Goreng";
			satuan = 17000;
			harga = ongkir + satuan;
			break;
			case 3:
			nama = "Udang Goreng";
			satuan = 19000;
			harga = ongkir + satuan;
			break;
			case 4:
			nama = "Cumi Goreng";
			satuan = 20000;
			harga = ongkir + satuan;
			break;
			case 5:
			nama = "Ayam Bakar";
			satuan = 25000;
			harga = ongkir + satuan;
			break;
		}

		cout<<"\n\n===================="<<endl;
		cout<<"= Struk Pembayaran"<<endl;
		cout<<"= Nama Pesanan : "<<nama<<endl;
		cout<<"= Harga        : Rp"<<satuan<<endl;
		cout<<"= Ongkir       : Rp"<<ongkir<<endl;
		cout<<"= Harga Total  : Rp"<<harga<<endl;
		cout<<"===================="<<endl;

		
					} else {
						cout<<"Jarak tidak valid!!"<<endl;
					}
		} else {
			cout<<"Pilihan tidak valid!!"<<endl;
		}
		
		cout<<"pesan lagi? (y/n) ";
		cin>>lagi;
		system("cls");
		
	} while (lagi == 'y' || lagi == 'Y');
	
}
