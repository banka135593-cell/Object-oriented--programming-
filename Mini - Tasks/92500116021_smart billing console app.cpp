#include<iostream>
Usingnamespacestd;
Int main(){
Intn;
Floatprice,total=0;
Intqty;
Cout<< "Enternumberofitems: ";
Cin>>n;
For(inti =1; i<=n;i++){
Cout<< "\nItem "<<i<< "price: ";
Cin>>price;
Cout<< "Item "<<i<< "quantity: ";
Cin>>qty;
Total+=price* qty;
}
Cout<< "\nTotalBill= "<<total<<endl;
Return0;
}
