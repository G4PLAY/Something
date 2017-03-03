#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main(){
int new1,new2;
	char a[256];
	cin>>new1>>a>>new2;
	
int b=strlen(a);
int i=1; 
int o=0;
int l[256];
int p;
while (o<b) {
p=a[o];
	switch(p){
		case 48: l[i]=0;break;
		case 49: l[i]=1;break;
		case 50 : l[i]=2;break;
		case 51 : l[i]=3;break;
		case 52 : l[i]=4;break;
		case 53 : l[i]=5;break;
		case 54  : l[i]=6;break;
		case 55 : l[i]=7;break;
		case 56 : l[i]=8;break;
		case 57 : l[i]=9;break;
		case 65 : l[i]=10;break;
		case 66 : l[i]=11;break;
		case 67 : l[i]=12;break;
		case 68 : l[i]=13;break;
		case 69 : l[i]=14;break;
		case 70 : l[i]=15;break;
		case 71 : l[i]=16;break;
		case 72 : l[i]=17;break;
		case 73 : l[i]=18;break;
		case 74 : l[i]=19;break;
		case 75 : l[i]=20;break;
		case 76 : l[i]=21;break;
		case 77 : l[i]=22;break;
		case 78 : l[i]=23;break;
		case 79 : l[i]=24;break;
		case 80 : l[i]=25;break;
		case 81 : l[i]=26;break;
		case 82 : l[i]=27;break;
		case 83 : l[i]=28;break;
		case 84 : l[i]=29;break;
		case 85 : l[i]=30;break;
		case 86 : l[i]=31;break;
		case 87 : l[i]=32;break;
		case 88 : l[i]=33;break;
		case 89 : l[i]=34;break;
		case 90 : l[i]=35;break;
	}
i++;
o++;
}
i=1;
int obj=0;
int kor[256];
while(i<=b){
kor[i]=l[b-i+1]*pow(new1,i-1);
obj=obj+kor[i];
//cout<<kor[i]<<endl;
i++;
}
//cout<<pow(new1,0);
i=1;
int vi[100];
int h;
h=obj;
while(h!=0){
vi[i]=h%new2;
h=h/new2;
if(h==0) break;
i++;

}//cout<<endl;
int r=i;
i=1;
//cout<<obj<<endl;
char last[256];
while(i<=r){
 switch(vi[i]){
  case 0: last[i]='0'; break;
  case 1: last[i]='1'; break;
  case 2: last[i]='2'; break;
  case 3: last[i]='3'; break;
  case 4: last[i]='4'; break;
  case 5: last[i]='5'; break;
  case 6: last[i]='6'; break;
  case 7: last[i]='7'; break;
  case 8: last[i]='8'; break;
  case 9: last[i]='9'; break;
  case 10: last[i]='A'; break;
  case 11: last[i]='B'; break;
  case 12: last[i]='C'; break;
  case 13: last[i]='D'; break;
  case 14: last[i]='E'; break;
  case 15: last[i]='F'; break;
  case 16: last[i]='G'; break;
  case 17: last[i]='H'; break;
  case 18: last[i]='I'; break;
  case 19: last[i]='J'; break;
  case 20: last[i]='K'; break;
  case 21: last[i]='L'; break;
  case 22: last[i]='M'; break;
  case 23: last[i]='N'; break;
  case 24: last[i]='O'; break;
  case 25: last[i]='P'; break;
  case 26: last[i]='Q'; break;
  case 27: last[i]='R'; break;
  case 28: last[i]='S'; break;
  case 29: last[i]='T'; break;
  case 30: last[i]='U'; break;
  case 31: last[i]='V'; break;
  case 32: last[i]='W'; break;
  case 33: last[i]='X'; break;
  case 34: last[i]='Y'; break;
  case 35: last[i]='Z'; break;
}
i++;
}
i=r;
while(i!=0){

cout<<last[i];

i--;}
//cout<<endl<<vi[5]<<vi[4]<<vi[3]<<vi[2]<<vi[1]<<endl;
//
//	cout<<vi[3]<<vi[2]<<vi[1]<<" "<<obj<<" "<<p<<endl<<'A';
}
