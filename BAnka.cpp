#include<iostream>
using namespace std;
//Furkan KOCA 221030910028
int main () {
int cekim,kalanl,kalanp;
cout <<"Cekmek istediginiz parayi giriniz"<<endl;
cin >>cekim;
if(50000 < cekim) {
cout <<"Cekmek istediginiz para gunluk limitinizin ustundedir "<<endl;	
}
else {
kalanl = 50000 - cekim;
kalanp = 1000000 - cekim;
if(kalanp <0) {
cout <<"Bakiyeniz yetersizdir"<<endl;	
}
cout <<"Kalan para cekme limitinz: "<<kalanl<<endl;
cout <<"Kalan bakiyeniz: "<<kalanp<<endl;
}
return 0;
}
