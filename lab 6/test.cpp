#include<iostream>
#include<array>
using namespace std;
struct students
  {
    string name;
    string rollno;
    float marks;
  };
int main()
{
  int  n;
  students a[100];
   cout<<"Enter no of students you want to enter : ";
   cin>>n;
   cout<<"Start entering students details : "<<endl;
   for(int i=0;i<n;i++)
  {
     cout<<"Enter "<<i+1<<" student name , roll no and marks percentage :";
     cin>>a[i].name>>a[i].rollno>>a[i].marks;
  }
  students b[100];
  copy(begin(a), end(a), begin(b));
  for(int i=0;i<n;i++)
  {
    cout<<b[i].name<<"   "<<b[i].rollno<<"   "<<b[i].marks<<endl;
  }

}