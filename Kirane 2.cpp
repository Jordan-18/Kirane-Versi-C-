#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	cout<<"----------------------------------------KIRANE------------------------------------------"<<endl;
	cout<<"Selamat datang di layanan kami"<<endl;
	cout<<"Kirane adalah layanna untuk membantu anda dalam memperkirakan"<<endl;
	cout<<"kebutuhan anda dalam membeli tanah yang anda inginkan,Semoga layanan kami bermanfaat... :)"<<endl;
	cout<<"=========================================================================================="<<endl;
	cout<<endl;
	cout<<"Tanah apa yang anda ingin beli ???"<<endl;
	cout<<"1.Tanah Datar(Desa,Kota,perumahan)"<<endl;
	cout<<"2.Tanah Pegunungan"<<endl;
	cout<<"3.Tanah Pesisir pantai"<<endl;
	cout<<"4.Tanah Sawah"<<endl;
	cout<<endl;
	cout<<"Masukkan kode yang anda pilih...."<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"----Tanah Datar----"<<endl;
			cout<<"Di tanah datar ini adalah sebuah tanah yang berada di desa,kota,dan perumahan"<<endl;
			cout<<"yang biasa didefinisikan untuk tanah sebuah bangunan atau lapangan luas untuk acara - acara dan lain sebagainya"<<endl;
			cout<<"dan kisaran harga /meter dari tanah datar(desa/kotaperumahan)adalah Rp.800.000/meter"<<endl;
			cout<<"------------------------------------------------------------------------------------"<<endl;
			cout<<"Berapa Panjang meter yang anda ingin beli??"<<endl;
			cin>>b;
			cout<<"Berapa Lebar panjang yang anda ingin beli??"<<endl;
			cin>>c;
			cout<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"Maka Luas tanah anda adalah : "<<b*c<<endl;
			cout<<"Dengan Kisaran Harga : "<<b*c*800<<endl;		
			break;
		case 2:
			cout<<"----Tanah Pegunungan----"<<endl;
			cout<<"Tanah pegunungan memiliki kualitas tanah yang bagus sehinggan fleksibel untuk digunakan menjadi bangunan maupun menjadi lahan"<<endl;
			cout<<"dan kisaran harga /meter dari tanah Pegunungan adalah Rp.1.300.000/meter"<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"Berapa Panjang tanah yang anda ingin beli??"<<endl;
			cin>>b;
			cout<<"Berapa Lebar tanah yang anda ingin beli??"<<endl;
			cin>>c;
			cout<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"Maka Luas tanah anda adalah : "<<b*c<<endl;
			cout<<"Dengan Kisaran Harga : "<<b*c*1300<<endl;		
			break;
		
		case 3:
			cout<<"----Tanah Pesisir Pantai----"<<endl;
			cout<<"Tanah Pesisisir Pantai lebih sering di gunakan untuk membangunan bsngunan yang sederhana,karena tanah pantai adalah pasir"<<endl;
			cout<<"dan kisaran harga /meter dari tanah Pesisir Pantai adalah Rp.1.750.000/meter"<<endl;
			cout<<"----------------------------------------------------------------------------"<<endl;
			cout<<"Berapa Panjang tanah yang anda ingin beli??"<<endl;
			cin>>b;
			cout<<"Berapa Lebar tanah yang anda ingin beli??"<<endl;
			cin>>c;
			cout<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"Maka Luas tanah anda adalah : "<<b*c<<endl;
			cout<<"Dengan Kisaran Harga : "<<b*c*1750<<endl;
			break;
		
		case 4:
			cout<<"----Tanah Sawah----"<<endl;
			cout<<"Tanah Sawah Yaitu tanah basah yang di tumbuhi dengan padi"<<endl;
			cout<<"dan kisaran harga /meter dari tanah Sawah adalah Rp.700.000/meter"<<endl;
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"Berapa Panjang tanah yang anda ingin beli??"<<endl;
			cin>>b;
			cout<<"Berapa Lebar tanah yang anda ingin beli??"<<endl;
			cin>>c;
			cout<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"Maka Luas tanah anda adalah : "<<b*c<<endl;
			cout<<"Dengan Kisaran Harga : "<<b*c*700<<endl;
			break;
			
	}
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<"Ingin anda jadikan apa tanah anda??"<<endl;
	cout<<"Ingin Anda jadikan Apa Tanah Anda?"<<endl;
	cout<<"   Lahan  (1)"<<endl;
	cout<<" Bangunan (2)"<<endl;
	cout<<"Masukkan kode yang anda pilih !"<<endl;
	menu:
	cin>>d;{     
		cout<<"----------------------------------------------------------------------------------------------"<<endl;  
		if (d == 1){
		
		
		       cout<<"Jenis Tumbuhan apa yang akan anda tanam ? (1-3)"<<endl;
		       cout<<"1.Tumbuhan akar merambat"<<endl;
		       cout<<"2.Tumbuha Akar tunggang"<<endl;
		       cout<<endl;
		       cout<<"================================================="<<endl;
		       cout<<endl;
		       cin>>e;
		       cout<<endl;
		       cout<<endl;
		           switch(e){
				   
		                 case 1 :
						 cout<<"Tumbuhan Akar Rambat"<<endl;
						 cout<<"jika anda memilih tumbuhan akar rambat Maka tumbuhan akar rambat itu sendiri banyak sekali"<<endl;
						 cout<<"Pilihlah tumbuhan rambat yang anda ingin tanami !"<<endl;
						 cout<<"1.Semangka,Timun,kacang hijau,melon,labu."<<endl;
						 cout<<"2.Anggur"<<endl;
						 cout<<"Pilihlah Kode yang anda pilih..!"<<endl;
						 cin>>f;{{
						 	switch(f){
						 	       case 1:
						 	       	 cout<<"Jika anda ingin memilih tumbuhan rambat yang sejenis dengan semangka dan lain - lain,maka anda membutuhkan jarak dari setiap tumbuhan yaitu 50 cm/tumbuhan"<<endl;
						 	       	 cout<<"------------------------------------------------------------------"<<endl;
						 	       	 cout<<"Maka banyak tumbuhan pada panjang tanah ialah : "<<b*100/5+1*1<<endl;
						 	       	 cout<<"Banyak tumbuhan menyusun lebar   = "<<c*100/5+1*1<<endl;
						             cout<<"Maka Tumbuhan yang dapat anda tanami Adalah : "<<b*100/5+1*1*c*100/5+1*1<<" Tumbuhan Akar Rambat"<<endl;
									 break;
						           case 2:
						           	cout<<"Jika anda ingin memilih tumbuhan rambat yang sejenis dengan Anggur dan lain - lain,maka anda membutuhkan jarak dari setiap tumbuhan yaitu 80 cm/tumbuhan"<<endl;
						 	       	 cout<<"------------------------------------------------------------------"<<endl;
						 	       	 cout<<"Maka banyak tumbuhan pada panjang tanah ialah : "<<b*100/8+1*1<<endl;
						 	       	 cout<<"Banyak tumbuhan menyusun lebar   = "<<c*100/8+1*1<<endl;
						             cout<<"Maka Tumbuhan yang dapat anda tanami Adalah : "<<b*100/8+1*1*c*100/8+1*1<<" Tumbuhan Akar Rambat"<<endl;
						             break;
						 }
		                 break;
		                 
		                 case 2 :
						 cout<<"Tumbuhan Akar tunggang"<<endl;
						  cout<<"jika anda memilih tumbuhan akar rambat Maka tumbuhan akar rambat itu sendiri banyak sekali"<<endl;
						 cout<<"Pilihlah tumbuhan rambat yang anda ingin tanami !"<<endl;
						 cout<<"1.Pohon Apel,Manga,durian,pepaya."<<endl;
						 cout<<"2.Pohon Kelapa,Pohon Jeruk."<<endl;
						 cout<<"Pilihlah Kode yang anda pilih..!"<<endl;
						 cin>>f;{{
						 	switch(f){
						 	       case 1:
						 	       	 cout<<"Jika anda ingin memilih tumbuhan Akar tunggang yang sejenis dengan Pohon apel dan lain - lain,maka anda membutuhkan jarak dari setiap tumbuhan yaitu 3 m/Pohon"<<endl;
						 	       	 cout<<"------------------------------------------------------------------"<<endl;
						 	       	 cout<<"Maka banyak tumbuhan pada panjang tanah ialah : "<<b*100/300+1*1<<endl;
						 	       	 cout<<"Banyak tumbuhan menyusun lebar   = "<<c*100/300+1*1<<endl;
						             cout<<"Maka Tumbuhan yang dapat anda tanami Adalah : "<<b*100/300+1*1*c*100/300+1*1<<" Tumbuhan Akar Tunggang"<<endl;
									 break;
						           case 2:
						           	cout<<"Jika anda ingin memilih tumbuhan rambat yang sejenis dengan Anggur dan lain - lain,maka anda membutuhkan jarak dari setiap tumbuhan yaitu 5 m/Pohon"<<endl;
						 	       	 cout<<"------------------------------------------------------------------"<<endl;
						 	       	 cout<<"Maka banyak tumbuhan pada panjang tanah ialah : "<<b*100/500+1*1<<endl;
						 	       	 cout<<"Banyak tumbuhan menyusun lebar   = "<<c*100/500+1*1<<endl;
						             cout<<"Maka Tumbuhan yang dapat anda tanami Adalah : "<<b*100/500+1*1*c*100/500+1*1<<" Tumbuhan Akar Tunggang"<<endl;
						             break;
					}
		                 break;
		       }}}}}}
		           
	    else if (d==2)
		
		       {
			   
		       cout<<"Maka,Bangunan yang anda pilih"<<endl;
		       cout<<"Dari yang kita ketahui___"<<endl;
		       cout<<"Harga Semen adalah     = Rp.55.000/karung"<<endl;
		       cout<<"Harga Batu bata adalah = Rp.2000/batang"<<endl;
		       cout<<endl;
		       cout<<"1 karung semen dapat membuat 2 meter dinding sebuah bangunan"<<endl;
		       cout<<endl;
		       cout<<"Dan panjang 1 batang 20 cm,jika mengiginkan 1 meter kita membutuhkan 20 cm x 5 batang = 100 cm/1 meter"<<endl;
		       cout<<"Jadi untuk mendapatkan panjang dinding 1 meter,kita membutuhkan 5 batang batu bata."<<endl;
		       cout<<endl;
		       cout<<"Dan tinggi 1 batang batu bata kita misalkan 5 cm,jika menginkan tinggi 1 meter kita membutuhkan"<<endl;
		       cout<<"5 cm x 20 =100 cm/ 1 m,maka kita membutuhkan 20 batang batu bata untuk mengapai tinggi 1 meter "<<endl;
		       cout<<endl;
		       cout<<endl;
		       cout<<"Jadi jika anda ingin membangun bangunan dengan luas "<<b*c<<" ,maka semen dan batu bata yng anda butuhkan"<<endl;
		       cout<<"adalah "<<b*c*20/100*5*20/100<<" dengan kisaran harga biaya "<<"Rp"<<b*c*d*b*c*20/100*5*20/100<<endl;
		       
		       
		}
		else {
		cout<<"code yang anda masukkan salah....!"<<endl; 
		goto menu; }
	
		
}
return 0;
}
