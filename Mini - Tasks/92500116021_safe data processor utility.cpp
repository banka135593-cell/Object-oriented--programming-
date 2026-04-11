#include<iostream>
#include<vector>
Usingnamespacestd;
//TemplateFunctionforAddition
Template<typenameT>
Tadd(Ta,Tb){
Returna+b;
}
//TemplateFunctionforDivisionwithExceptionHandling
Template<typenameT>
Tdivide(Ta,Tb){
If(b ==0){
Throw "Error:Divisionbyzero!" ;
}
Returna/b;
}
UTILITY
Int main() {
Vector<double>results;
Intchoice;
Doublex,y;
Do{
Cout<< "\n---SafeDataProcessor---\n" ;
Cout<< "1.Addition\n" ;
Cout<< "2.Division\n" ;
Cout<< "3.ViewResults\n" ;
Cout<< "4.Exit\n" ;
Cout<< "Enterchoice: ";
Cin>>choice;
Try{
Switch(choice) {
Case1:
Cout<< "Entertwonumbers: ";
Cin>>x>>y;
Results.push_back(add(x,y );
Cout<< "ResultStored!\n" ;
Break;
Case2:
Cout<< "Entertwonumbers: ";
Cin>>x>>y;
Results.push_back(divide(x,y );
Cout<< "ResultStored!\n" ;
Break;
Case3:
Cout<< "\nStoredResults:\n" ;
For(doubleval:results) {
Cout<<val<<endl;
}
Break;
Case4:
Cout<< "Exiting .\n" ;
Break;
Default:
Cout<< "Invalidchoice!\n" ;
}
}
Catch(constchar*msg){
Cout<<msg<<endl;
}
}while(choice!=4);
Return0;
}
