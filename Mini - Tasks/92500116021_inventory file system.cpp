#include<iostream>
#include<fstream>
Usingnamespacestd;
ClassProduct{
Public:
Intid;
Charname[50];
Floatprice;
Voidinput() {
Cout<< "EnterProductID: ";
Cin>>id;
Cout<< "EnterProductName: ";
Cin>>name;
Cout<< "EnterPrice: ";
Cin>>price;
}
Voiddisplay() {
Cout<< "\nID: "<<id
<< "\nName: "<<name
<< "\nPrice: "<<price<<endl;
}
};
//AddProduct
VoidaddProduct(){
Product p;
Ofstreamfile( "inventory.dat" ,ios :binary|ios :app);
p.input();
file.write (char*)&p,sizeof(p );
file.close();
cout<< "ProductAddedSuccessfully!\n" ;
}
//ViewA lProducts
VoidviewProducts(){
Product p;
Ifstreamfile( "inventory.dat" ,ios :binary);
While(file.read (char*)&p,sizeof(p ) {
p.display();
cout<< "------------------\n" ;
}
File.close();
}
//SearchProduct
VoidsearchProduct(){
IntsearchId;
Product p;
Boolfound=false;
Cout<< "EnterProductIDtoSearch: ";
Cin>>searchId;
Ifstreamfile( "inventory.dat" ,ios :binary);
While(file.read (char*)&p,sizeof(p ) {
If (p.id==searchId){
p.display();
found=true;
break;
}
}
File.close();
If(!found)
Cout<< "ProductNotFound!\n" ;
}
//UpdateProduct
VoidupdateProduct(){
IntsearchId;
Product p;
Cout<< "EnterProductIDtoUpdate: ";
Cin>>searchId;
Fstreamfile( "inventory.dat" ,ios:binary|ios :in |ios :out);
While(file.read (char*)&p,sizeof(p ) {
If (p.id==searchId){
Cout<< "EnterNewDetails:\n" ;
p.input();
intpos =-1* sizeof(p);
file.seekp(pos, ios :cur);
file.write (char*)&p,sizeof(p );
cout<< "ProductUpdatedSuccessfully!\n" ;
break;
}
}
File.close();
}
//MainMenu
Int main() {
Intchoice;
Do{
Cout<< "\n---InventorySystem---\n" ;
Cout<< "1.AddProduct\n" ;
Cout<< "2.ViewProducts\n" ;
Cout<< "3.SearchProduct\n" ;
Cout<< "4.UpdateProduct\n" ;
Cout<< "5.Exit\n" ;
Cout<< "Enterchoice: ";
Cin>>choice;
Switch(choice) {
Case1:addProduct(); break;
Case2:viewProducts();break;
Case3:searchProduct();break;
Case4:updateProduct();break;
Case5:cout<< "Exiting .\n" ;break;
Default: cout<< "Invalidchoice!\n" ;
}
}while(choice!=5);
Return0;
}
