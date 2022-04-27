#include <bits/stdc++.h>
using namespace std;

void sayHi(){

      cout<<"Kalkulatori ne gjuhen shqipe: "<<endl;

      cout<<"+ = Plus"<<endl;
      cout<<"- = Minus"<<endl;
      cout<<"* = Here"<<endl;
      cout<<"/ = Pjestim"<<endl;
}

int main () {
    sayHi();

    double num1, num2;
    char op;

    cout<<"Shenoje numrin e pare: ";
    cin>>num1;
    cout<<"Shenoje shenjen: ";
    cin>>op;
    cout<<"Shenoje numrin e dyte: ";
    cin>>num2;

    double rezultati;

    if (op == '+'){
     rezultati=num1+num2;
      cout<<"Rezultati eshte: ";
    }
     else if (op == '-'){
     rezultati=num1-num2;
      cout<<"Rezultati eshte: ";
    }
    else if (op == '/'){
     rezultati=num1/num2;
      cout<<"Rezultati eshte: ";
    }
    else if (op == '*'){
     rezultati=num1*num2;
      cout<<"Rezultati eshte: ";
   }  else{
     cout<<"Shenja nuk ekziston te kulkulatori";
   }
    cout<<rezultati;

  return 0;
}
