#include<iostream>
Usingnamespacestd;
StructStudent{
Introll;
Stringname;
Intage;
Stringcourse;
Floatmarks;
};
Student s[50];
Int countStudent=0;
//Addstudent
VoidaddStudent(){
Cout<< "\nEnterRollNumber: ";
Cin>>s[countStudent].ro l;
Cout<< "EnterName: ";
cin>>s[countStudent].name;
cout<< "EnterAge: ";
cin>>s[countStudent].age;
cout<< "EnterCourse: ";
cin>>s[countStudent].course;
cout<< "EnterMarks: ";
cin>>s[countStudent].marks;
countStudent++; //Nosuccessmessagehere
}
//Display students
voiddisplayStudents() {
if(countStudent==0){
cout<< "\nNostudentrecordsfound!\n" ;
return;
}
for(int i=0; i<countStudent;i++) {
cout<< "\n---Student "<<i+1<< "---\n" ;
cout<< "Roll: "<<s[i].roll<<endl;
cout<< "Name: "<<s[i].name<<endl;
cout<< "Age: "<<s[i].age<<endl;
cout<< "Course: "<<s[i].course<<endl;
cout<< "Marks: "<<s[i].marks<<endl;
}
}
Cout<< "\nStudentNotFound!\n" ;
}
//Updatestudent
voidupdateStudent() {
introll;
cout<< "\nEnterrollnumbertoupdate: ";
cin>>ro l;
for(int i=0; i<countStudent;i++) {
if(s[i].roll == roll){
cout<< "EnterNewName: ";
cin>>s[i].name;
cout<< "EnterNewAge: ";
cin>>s[i].age;
cout<< "EnterNewCourse: ";
cin>>s[i].course;
cout<< "EnterNewMarks: ";
cin>>s[i].marks;
cout<< "\nRecordUpdatedSuccessfully!\n" ;
return;
}
}
cout<< "\nStudentNotFound!\n" ;
}
//Mainfunction
intmain() {
intchoice;
do{
cout<< "\n======STUDENTPROFILEMANAGER======\n" ;
cout<< "1.AddStudent\n" ;
cout<< "2.DisplayStudents\n" ;
cout<< "3.SearchStudent\n" ;
cout<< "4.UpdateStudent\n" ;
cout<< "5.Exit\n" ;
cout<< "Enterchoice: ";
cin>>choice;
switch(choice) {
case1:addStudent();break;
case2:displayStudents(); break;
case3: searchStudent(); break;
case4: updateStudent(); break;
case5: cout<< "\nThankYou!\n" ;break;
default: cout<< "\nInvalidChoice!\n" ;
}
}while(choice !=5);
return0;
}
