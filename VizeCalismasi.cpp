#include <iostream> //soru gelir

//1 ekrana yazi yazdirma , kutuphane ekleme

using namespace std;

//pass by referance
// pass by value
//int kareal(int &sayi) //global bir fonksiyon
//{
//	sayi = sayi * sayi;
//	return sayi;
//	//Fonk() 
//}
//
//struct Ogrenci {
//	int numara;
//	string ad;
//	string soyad;
//};


/*OOP / NESNE TABANLI PROGRAMLAMA !*/
//kapsülleme

//ana sinif
//class Araba //araba sinifi
//	// constructor
//	//destrucor
//{
//
//private:
//	int y;
//
//public :
//	string marka;
//	string model;
//	int uretimyili;
//	void bilgileriGoster()
//	{
//		cout << "Marka: " << marka << "Model: " << model << "Uretim yili: " << uretimyili << endl;
//	}
//
//protected:
//	int x=10;
//
//
//
//	Araba(){
//		marka = "";
//		model = "";
//		uretimyili = 0;
//	
//	} //default constructor
//
//	Araba(string m,string mo,int u){
//		marka = m;
//		model = mo;
//		uretimyili = u;
//	//paramterli
//
//	}
//
//
//	~Araba() {
//		cout << "destrucor cagrildi" << endl;
//	}
//
//
//};

//turemis sinif
//4 kapili araba
//public , protected 
//class kapi4 : public Araba
//{
//	
//
//public:
//	string yakit;
//	
//	int getX()
//	{
//		return x;
//	}
//	
//
//};




	/*string isimDondur(){
		return isim;
	}

	void isimAta(string yeniisim)
	{
		isim = yeniisim;

	}*/

//private: //sadece class
//	string isim="Kara";
//
//protected: //sadece class ve alt class.
//	string renk;






//int topla(int a, int b) {
//	a = a + b;
//	return a;
//}
//
//int topla(int a)
//{
//	a = a + a;
//	return a;
//}



/*burdan basla*/

int main()
{
	 
	


	//veri tipleri
	// int , float , string , char , bool
	// tamsayi , kesirli sayı , yazı , karakter , dogruluk - yanlsilik

	//operatorlar

	//aritmetik
	// + , - , * , / , % 

	//int x=10;
	//int y=3;
	//int sonuc;

	//sonuc = x % y;

	//// 5 % 3  = 2.
	////10%3 = 1.


	//cout << sonuc << endl;





	//atama operatorleri
	// = , += ,-=, *= , /=


	//int x = 10;
	//int y = 3;

	//x += x;


	//x op= x;
	// x = x op x;
	// 
	// 
	//cout << x << endl;

	//x /= x;

	////x = x - 5;

	//cout << x;







	//arttrıma azaltma (Soru)
	//++ = 1 arttırma , -- = 1 azatlma 

	//int x=5;
	//int y = 10;

	//int sonuc;

	//sonuc = --y;

	//cout << sonuc<<endl;

	//sonuc = y;

	//cout << sonuc;



	//Mantıksal oplar , karsilasitrma
	// &&  ! || , >, < == 

	//mantiksal


	// && AND opeartoru VE  (KOTU ADAM)

	// X Y
	// 1 1 = 1
	// 1 0 = 0 
	// 0 1 = 0
	// 0 0 = 0

	// x = 1 , y=0
	// x && y =0

		// || OR opeartoru  VEYA (IYI ADAM)

	// X Y
	// 1 1 = 1
	// 1 0 = 1
	// 0 1 = 1
	// 0 0 = 0

	// x = 1 , y=0
	// x || y =1

	/*int x = 1, y = 0;

	int sonuc;

	sonuc = 1 || 0;

	cout << sonuc;*/


	// ! 

	//bool x;
	//
	//x = true;
	//
	//cout << x<<endl;
	//
	//bool y;
	//
	//y = !x; // x , !x = x'in degili anlamina gelir.
	//
	//cout << y;


	//int x=5, y=4;
	//bool sonuc;
	//
	//// == bunlar esit mi? 
	//// != esit degil midir?
	//// > , < buyuk mu kucuk mu?
	//// <= kucuk esit mi
	//// => buyuk esit mi
	//
	//sonuc = x > y;
	//
	//cout << sonuc;


	// ternarny opertarorr
	// kosul ? x:y

	//int yas=13;
	//string sonuc;
	//
	//sonuc = (yas > 18) ? "Surer" : "Suremez";
	//
	//cout << sonuc;


	// kosullu ifadeler

	
//int yas = 12;
//
//if (yas >= 18)
//{
//	cout << "Ehliyet alabilirsin" << endl;
//}
//else if(yas == 16) {
//	cout << "Motor ehliyeti yasi." << endl;
//}
//
//else {
//	cout << "Ehliyet alamazsin" << endl;
//}
//

//switch case 

//int secim = 1;

//switch (secim)
//{
//  case 1:
//	cout << "Ehliyet alabilirsin" << endl;
//	break;
//
//  case 2:
//	  cout << "Motor ehliyeti alabilirsin" << endl;
//	  break;
//
//
//default:
//	cout << "Ehliyet alamazsin" << endl;
//	break;
//}


// donguler 
// i , i++ , cout

//int i;

// for for(veritipi degisken;degisken<10;degisken++)
//
//for(int i=1;i<=10;i++)
//{
//
//	cout << i << endl;
//
//}

// while 

//int i=1;
//while (i <= 10) {
//	cout << i << endl;
//	i++;
//
//}

//do while 

//int i = 1;
//
//do {
//
//	cout << i << endl;
//	i++;
//
//} while (i <= 10);

////ice ice dongu
//for (int sol = 1; sol <= 3; sol++) {
//	for (int sag = 1; sag <= 3; sag++) {
//		cout << "soldaki: " << sol << ", sagdaki: " << sag << endl;
//	}
//}

//array diziler
// diziler 0. elemandan baslar.
                   //0  1 2 3 4 
	/*int sayilar[5] = {1,2,3,4,5};

	sayilar[0] = 10;

	cout << sayilar[0];*/

	/*for (int i=0; i < 5; i++)
	{
		cout << sayilar[i] << endl;
	}*/

//fonkisyonlar
    //kare alma fonksiyonu
// x -> [] -> x^2
// y -> [] -> y^2


//
//int x=2;
//int y = 3;
//int sonuc;
//
//sonuc = kareal(x);
//cout<<"xin karesinin degeri" << sonuc << endl;
//
//cout <<"x in kendi degeri" << x << endl;
//
//
//
//sonuc = kareal(y);
//
//cout << sonuc << endl;
//
//sonuc = x;

//pointerlar 

// degisken adresi tutar
//     x  = 1000
//   ->>>>> 1000

//int x = 10;
//int *ptr; //* 'in olmasi
//
//ptr = &x; //adresi isaret eder.
//
//
//cout << "xin degeri: " << x << endl;
//cout << "xin adresini: " << &x << endl;
//
//
//cout << "ptrin degeri: " << *ptr << endl;
//cout << "ptrnin adresi: " << ptr << endl;

//new dinamik degiskendir.
//int* ptr = new int;
//// ->>>> adres , adresin sayisal degeri=? 
//
//*ptr = 10;
//// ->>>> adres , adresin sayisal degeri=10
//
//cout << *ptr << endl;
//
////delete , ptrin isaret ettigi degiskeni siler.
//
//delete ptr;
//
//// x , 

//structs.

//Ogrenci erkekOgrenci[2];
//
//erkekOgrenci[0].numara = 1500;
//erkekOgrenci[0].ad = "Ahmet";
//erkekOgrenci[0].soyad = "Yilmaz";
//
//
//erkekOgrenci[1].numara = 1700;
//erkekOgrenci[1].ad = "Mehmet";
//erkekOgrenci[1].soyad = "Yilmaz";
//
//for (int i = 0; i < 2; i++) {
//	cout << erkekOgrenci[i].numara << endl;
//	cout << erkekOgrenci[i].ad << endl;
//	cout << erkekOgrenci[i].soyad << endl;
//}
//
//Ogrenci kizOgrenci;
//
//kizOgrenci.numara = 1600;
//kizOgrenci.ad = "Fatma";
//kizOgrenci.soyad = "Yilmaz";
//
//cout << kizOgrenci.numara << kizOgrenci.ad << kizOgrenci.soyad << endl;
	
//kapi4 kapiliaraba;
	//
	//cout<<kapiliaraba.getX();












	///*marka,model,uretim*/
	//Araba ticari("bmw", "i5", 2022);

	//ticari.bilgileriGoster();







	//fonk asiri yuklemesi
	//int x=2, y=3;

	//int sonuc = topla(x,y);

	//cout << sonuc;







	//oop

	//Araba otomobil;

	//otomobil.marka = "mercedes";
	//otomobil.model = "a180";
	//otomobil.uretimyili = 2020;

	//otomobil.bilgileriGoster();

	//cout << endl;
	//
	//otomobil.isimAta("Simsek");
	//cout << otomobil.isimDondur();

}

