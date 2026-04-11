#include <iostream>
Usingnamespacestd;
//BaseClass
ClassShape{
Public:
Virtualvoidarea() {
Cout<< "Areanotdefined\n" ;
}
Virtualvoidperimeter() {
Cout<< "Perimeternotdefined\n" ;
}
};
//DerivedClass
Circle
ClassCircle:publicShape{
Floatr;
Public:
Circle(floatradius) {
R=radius;
}
Voidarea()override{
Cout<< "AreaofCircle: "<<3.14*r*r<<endl;
}
Voidperimeter()override{
Cout<< "PerimeterofCircle: "<<2*3.14*r<<endl;
}
};
//DerivedClass
Rectangle
ClassRectangle:publicShape{
Floatl,w;
Public:
Rectangle(floatlength,floatwidth) {
L=length;
W=width;
}
Voidarea()override{
Cout<< "AreaofRectangle: "<<l*w<<endl;
}
Voidperimeter()override{
Cout<< "PerimeterofRectangle: "<<2*(l+w)<<endl;
}
};
//DerivedClass
Triangle
ClassTriangle:publicShape{
Floata,b,c;
Public:
Triangle(floatx,floaty,floatz) {
A=x;
B=y;
C=z;
}
Voidarea()override{
Floats=(a+b+c)/2;
Floatarea=sqrt(s*(s
a)*(s
b)*(s
c );
Cout<< "AreaofTriangle: "<<area<<endl;
}
Voidperimeter()override{
Cout<< "PerimeterofTriangle: "<<a+b+c<<endl;
}
};
//MainFunction
Int main() {
Shape*s;
Circle c(5);
Rectangler(4,6);
Trianglet(3,4,5);
Cout<< "\n---Circle---\n" ;
S=&c;
s->area();
s->perimeter();
cout<< "\n---Rectangle---\n" ;
s =&r;
s->area();
s->perimeter();
cout<< "\n---Triangle---\n" ;
s =&t;
s->area();
s->perimeter();
return0;
}
