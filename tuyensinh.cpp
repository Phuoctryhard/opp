/* tuyen sinh [OOP]. Bài 12. Tuyển sinh
Problem
Submissions
Leaderboard
Discussions
Trường Đại học XYZ tuyển sinh theo hình thức xét điểm thi ba môn Toán – Lý – Hóa. Để đơn giản, khu vực tuyển sinh được quy định luôn bởi ba chữ cái đầu tiên trong mã thí sinh. Do rất thích các thí sinh đến từ Khu vực 3 nên trường XYZ tự quy định giá trị điểm ưu tiên Khu vực như trong bảng sau:

imageGiả sử biết trước điểm chuẩn là 24. Hãy xác định tình trạng tuyển sinh của thí sinh.

Input Format

Chỉ bao gồm thông tin của một thí sinh trên 5 dòng lần lượt là: - Mã thí sinh - Họ tên - Điểm toán - Điểm lý - Điểm hóa

Constraints

Các giá trị điểm đều đảm bảo trong phạm vi [0,10] và có thể có 1 chữ số phần thập phân.

Output Format

Ghi ra các thông tin: - Mã thí sinh - Họ tên - Khu vực - Tổng điểm – có tính ưu tiên (có thể có 1 số phần thập phân), trong trường hợp điểm là số thực với phần thập phân bằng 0 thì không in ra phần thập phân. - Trạng thái: TRUNG TUYEN hoac TRUOT (sau khi đã tính cả điểm ưu tiên)

Sample Input 0

KV2B
Hoang Ngoc Long
3.4
9
0
Sample Output 0

KV2B Hoang Ngoc Long 2 13.4 TRUOT
*/
	
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
    
