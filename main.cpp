#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<int> values = {};
int l = 0;

int firstDigit(int n){
    while(n >= 10){
        n /= 10;
    }
    return n;
}

int lastDigit(int x){
    return (x % 10);
}

void wczytaj_wyswietl(){
    ifstream readFile("dane.txt");
    string line;
    while(getline(readFile, line)){
        values.push_back(stoi(line));
    }
    for(auto i = values.begin(); i != values.end(); ++i){
        cout<<*i<<endl;
        cout<<"Pierwszy: "<<firstDigit(*i)<<endl;
        cout<<"Ostatni: "<<lastDigit(*i)<<endl;
        cout<<"--------------------"<<endl;
    }
}

void zadanie1_sprawdz(){

}

int main()
{
    wczytaj_wyswietl();
}
