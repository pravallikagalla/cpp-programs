#include<iostream>
using namespace std;
class Number{
    private:
    int value;
    public:
    Number(int v=0){
      value=v;
}
Number operator-(){
return Number(-value);
}
Number operator+(const Number&obj){
    return Number(value+obj.value);
}
void display(){
    cout<<"value="<<value<<endl;
}
};
int main(){
    Number n1(10),n2(20),result;
    cout<<"original values:"<<endl;
    n1.display();
    n2.display();
    result=n1+n2;
cout<<"after binary+operator(n1+n2):"<<endl;
result.display();
result=-n1;
cout<<"after unary-operator(-n1):"<<endl;
result.display();
return 0;
}

