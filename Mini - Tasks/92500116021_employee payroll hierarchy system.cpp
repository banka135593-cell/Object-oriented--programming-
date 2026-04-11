#include<iostream>
Usingnamespacestd;
//BaseClass
ClassEmployee{
Protected:
Intid;
Stringname;
DoublebasicSalary;
Public:
VoidgetDetails() {
Cout<< "EnterEmployeeID: ";
Cin>>id;
Cout<< "EnterName: ";
Cin>>name;
Cout<< "EnterBasicSalary: ";
Cin>>basicSalary;
}
SYSTEM
VoiddisplayDetails() {
Cout<< "\nEmployeeID: "<<id;
Cout<< "\nName: "<<name;
Cout<< "\nBasicSalary: "<<basicSalary<<endl;
}
};
//DerivedClass
Manager
ClassManager:publicEmployee{
Doublebonus;
Public:
VoidcalculateSalary() {
Bonus=0.20*basicSalary;
Doubletotal=basicSalary+bonus;
displayDetails();
cout<< "Bonus: "<<bonus;
cout<< "\nTotalSalary(Manager): "<<total<<endl;
}
};
//DerivedClass
Developer
ClassDeveloper:publicEmployee{
Doubleovertime;
Public:
VoidcalculateSalary() {
Overtime=0.10*basicSalary;
Doubletotal=basicSalary+overtime;
displayDetails();
cout<< "OvertimePay: "<<overtime;
cout<< "\nTotalSalary(Developer): "<<total<<endl;
}
};
//DerivedClass
Staff
ClassStaff:publicEmployee{
Doubleallowance;
Public:
VoidcalculateSalary() {
Allowance=0.05*basicSalary;
Doubletotal=basicSalary+allowance;
displayDetails();
cout<< "Allowance: "<<allowance;
cout<< "\nTotalSalary(Staff): "<<total<<endl;
}
};
//MainFunction
Int main() {
Managerm;
Developerd;
Staffs;
Cout<< "\n---ManagerDetails---\n" ;
m.getDetails();
m.calculateSalary();
cout<< "\n---DeveloperDetails---\n" ;
d.getDetails();
d.calculateSalary();
cout<< "\n---StaffDetails---\n" ;
s.getDetails();
s.calculateSalary();
return0;
}
