#include <iostream>
using namespace std;

int main(){
int array1[] = {4,5,6,7};
int array2[] = {2,3,4,5};
int a=0,b=0,c=0,length1=0,length2;
int j=0;

length1 =*(&array1+1) - array1;
length2 =*(&array2+1) - array2;

for(int i=length1-1;i>=0;i--)
{a=10*a+array1[i];}

for(int i=length2-1;i>=0;i--)
{b=10*b+array1[i];}

c=a+b;
int p = c;
int length = 0;

while(p!=0)
{length+=1;
    p=p/10;}
    p=c;

int*array3=new int[length];
for(int i = 0;i<length;i++)
{array3[i]= p%10;
p=p/10;}

if(sizeof(array3)<=4&&sizeof(c)<=4){
cout<<"The addition of the two array numbers"<<a<<"and"<<b<<"give the array:"<<end1;
for(int i = 0;i<length;i++){
cout<<array3[i]<<"";
}
cout<<end1;
}else{
cout<<"The addition of the two array numbers"<<a<<"and"<<b<<"gives a result which is larger than an integer"<<end1;
}
return 0;
}
using namespace std;

int main(){
int array1[]={4,5,6,7};
int array2[]={2,3,4,5};
int a=0,b=0,c=0,length1=0,length2;
int j=0;

length1 =*(&array1+1) - array1;
length2 =*(&array2+1) - array2;

for(int i=length1-1;i>=0;i--)
{a=10*a+array1[i];}

for(int i=length2-1;i>=0;i--)
{b=10*b+array1[i];}

c=a+b;
int p = c;
int length = 0;

while(p!=0)
{length+=1;
    p=p/10;}
    p=c;

int*array3=new int[length];
for(int i = 0;i<length;i++)
{array3[i]= p%10;
p=p/10;}

if(sizeof(array3)<=4&&sizeof(c)<=4){
cout<<"The addition of the two array numbers"<<a<<"and"<<b<<"give the array:"<<end1;
for(int i = 0;i<length;i++){
cout<<array3[i]<<"";
}
cout<<end1;
}else{
cout<<"The addition of the two array numbers"<<a<<"and"<<b<<"gives a result which is larger than an integer"<<end1;
}
return 0;
}