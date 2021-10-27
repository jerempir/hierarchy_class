#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Fruit {
public:
    string name;
    void get(string _name){
       name = _name;
    }
    Fruit()
    {
        cout<<"Fruit created"<<endl;
    }

    int value = 4;
    int cost = 25;

    int sum(){
        cout<< value *cost<<endl;
        return 0;
    }
    void Print() {
        cout<< "Fruit printed"<<endl;
    }
};

class Apple: public Fruit {
public:
   int value = 10;
    int cost = 100;
    void Print_second(){
        Print();
        cout<<"and apple print"<<endl;
    }

};

int n;
string name;
int main() {
    vector <Fruit*> myVector;
    Fruit myFruits;
    Apple apple1;
    for (int id=0;id<10;id++){
        myVector.push_back(new Fruit());
    }

    cout<<myVector[10]<<endl;

    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"name"<<endl;
        cin>>name;
        Fruit p;
        p.get(name);

    }
   /*
    cin>>n;
    for (int i=0; i <n;i++){
        cin>>name;
        Fruit name;
        myVector.push_back(&name);
    }
    cout<<myVector[11]<<endl;

    for (int i=0;i<myVector.size();i++){
        cout<<myVector[i]<<" "<<i<<endl;
        myVector[i]->Print();
    }*/

    return 0;

}
