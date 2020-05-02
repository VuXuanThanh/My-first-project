#include<iostream>
using namespace std;
class VECTO{
	private:
		float x,y;
	public:
		void nhap(){
			cout<<"\nnhap vao hoanh do:";		cin>>x;
			cout<<"\nnhap vao tung do :";		cin>>y;
		}
		void xuat(){
			cout<<"("<<x<<" , "<<y<<")"<<endl;
		}
		VECTO operator+(VECTO v){
			VECTO tg;
			tg.x=this->x+v.x;
			tg.y=y+v.y;
			return tg;
		}
		VECTO operator-(VECTO v){
			VECTO tg;
			tg.x=this->x-v.x;
			tg.y=y-v.y;
			return tg;
		}
};
int main(){
	VECTO A,B;
	cout<<"\n\t\tnhap vao vecto A :";
	A.nhap();
	cout<<"\n\t\tnhap vao vecto B :";
	B.nhap();
	VECTO h=A.operator+(B);
	VECTO k=A.operator-(B);
	cout<<"\n\t\ttong cua 2 vecto la :";
	h.xuat();
	cout<<"\n\t\thieu cua 2 vecto la :";
	k.xuat();
}
