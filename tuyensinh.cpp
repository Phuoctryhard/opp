// tuyen sinh 
#include<bits/stdc++.h>
using namespace std;
class TuyenSinh{
    private:
        string msv,name;
        double toan,ly,hoa;
    public:
        TuyenSinh(){
        }
        friend istream& operator >>(istream& in, TuyenSinh &a){
            getline(cin,a.msv);
            getline(cin,a.name);
            cin>>a.toan>>a.ly>>a.hoa;
        return in;
        }
        
        friend ostream& operator <<(ostream& out,TuyenSinh a){
            cout<<a.msv<<" "<<a.name<<" "<<a.msv[2]<<" ";
            a.tongdiem();
            return out;
        }
    // diem trung binh 
    double diemtrungbinh(){
        return toan + ly + hoa;
    }
        
    // tong diem + uu tien 
        void tongdiem(){
            // khu vuc
            string s = msv.substr(0,3);
            double sum =0;
            if(s=="KV1"){
               sum=diemtrungbinh()+ 0.5;
               cout<<sum<<" ";
               if(sum>=24) 
                cout<<"TRUNG TUYEN";
                else cout<<"TRUOT";
            }
            else if(s=="KV2"){
                sum=diemtrungbinh() + 1.0;
                cout<<sum<<" ";
                if(sum>=24) 
                cout<<"TRUNG TUYEN";
                else 
                cout<<"TRUOT";
            }
            else {
			sum = diemtrungbinh()+ 2.5;
            	 cout<<sum<<" ";
                 if(sum>=24)
                 cout<<"TRUNG TUYEN";
                 
                 else 
                cout<<"TRUOT";
			}        
		} 
		
};
int main(){
    TuyenSinh a;
    cin>>a;
    cout<<a;
}
    
