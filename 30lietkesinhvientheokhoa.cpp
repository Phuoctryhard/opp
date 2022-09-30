#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
    string ma,name,lop,email;
    public:
    SinhVien(){
    }
    string getLop(){
        return this->lop;
    }
    string getName(){
        return     this->name;
    }
    // ham nhap , xuat
    friend istream& operator >>(istream& in,SinhVien &a){
        getline(cin,a.ma);
        getline(cin,a.name);
        getline(cin,a.lop);
        getline(cin,a.email);
    return in;
    }
    friend ostream& operator <<(ostream& out,SinhVien a){
        string cc=a.getName();
        cout<<a.ma<<" "<<a.chuanhoa1(cc)<<" "<<a.lop<<" "<<a.email<<endl;
        return out;
    }
    string chuanhoa(string &s){
        for( int i=0;i<s.size();i++){
            s[i] =tolower(s[i]);
        }
    return s;
}
    // ham chuan hoa
    string chuanhoa1(string s){
        string tmp="";
        string t="";
        stringstream ss(s);
        vector<string>v;
        while(ss >>t){
            t = chuanhoa(t);
            t[0] = toupper(t[0]);
            tmp+=t;
            tmp+=" ";
        }
        tmp.pop_back();// xoa ki tu cuoi;
        return tmp;
    }
    // ham tach khoa ?
    string tachkhoa(){
    	string s = ma.substr(0,4);
    return s;
    }
    
};
int main(){
    int n;
    cin>>n;
    cin.ignore();
    SinhVien a[n];
    for(auto &x:a) cin>>x;
    int q;
    cin>>q;
    cin.ignore();
    while(q--){
        string l;
        getline(cin,l);
        cout<<"DANH SACH SINH VIEN KHOA "<<l<<" :"<<endl;
        for(int i=0;i<n;i++){
        if(l == a[i].tachkhoa()){
            
            cout<<a[i];
        }    
        }
    }
}
