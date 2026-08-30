
#include<list>
#include<iostream>
using namespace std ;
int main(){
    list<int>l;
l.push_back(8);
l.push_back(5);
l.push_back(6);
l.push_back(4);
cout<<" ";

cout<<"\npushing back the element\n"<<endl;
for(int x :l)
cout<<x<<" ";
l.push_front(3535);
l.push_front(4233);

cout<<"after pushing the eelement in the front\n "<<endl;
for(int x : l)
cout<<x<<" ";
cout<<"size =  \n"<<l.size()<<endl;
l.pop_front();
cout<<"after pop the alement\n "<<endl;
for (int x : l)
cout<<x<<" ";

cout <<"inserting the element in the list\n"<<endl;

auto it = l.begin();
advance (it , 1);
l.insert(it , 15);
for (int x : l)
cout<<x<<" ";




return  0;


}




