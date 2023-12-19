#include<iostream>
using namespace std;

int main(){
    //ประกาศตัวเกรด + ใส่ 0 ให้ออก
	int count[5] = {} , i=1;
    char grade;
    //ประกาศข้อความ
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";

    //กระบวนการเก็บเกี่ยวข้อมูล
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
        //พิมพ์ 0 ให้ออก
		if(grade == '0') {
            break;
        }
        //เก็บเกรด A
		if(grade == 'A'){
			count[0]+=1;
        //เก็บเกรด B
		}else if(grade == 'B'){
			count[1]+=1;
        //เก็บเกรด C
        }else if(grade == 'C'){
			count[2]+=1;
        //เก็บเกรด D
        }else if(grade == 'D'){
			count[3]+=1;
        //เก็บเกรด F
        }else if(grade == 'F'){
			count[4]+=1;
        //พิมพ์อะไรมาครับ?? พิมพ์ใหม่ดิ๊
		}else{
			cout << "Wrong input. Please input again." << "\n";
            continue;
		}
        i++;
	}while(true);
	
    //กระบวนการรวบรวมข้อมูล
    int total = count[0]+count[1]+count[2]+count[3]+count[4];
	//โชว์เกรดทั้งหมด
	cout << "In total "<< total << " students." << "\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4];
	
	return 0;
}