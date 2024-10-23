#include<iostream>
#include<list>
using namespace std;
int main()
{
 
 list<int>ll;
 ll.push_front(3);
 ll.push_front(2);
 ll.push_front(1);
 ll.push_back(5);
 ll.push_back(4);

 list<int>::iterator itr;
 for(itr=ll.begin();itr!=ll.end();itr++)
 {
    cout<<(*itr)<<"->";
 }


cout<<"Head: "<<ll.front()<<endl;
cout<<"Tail" <<ll.back()<<endl;;
cout<<"Size "<<ll.size()<<endl;;

}
