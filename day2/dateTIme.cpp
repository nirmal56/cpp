#include <iostream>
#include <ctime>

using namespace std;

class dated{
	private:
	int day,month,year;
	
	public:
	int d,m,y;
	void setDate(){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		day = ltm->tm_mday ;
		month = ltm->tm_mon ;
		year = ltm->tm_year ;
	}
	dated getDate(){
		dated temp;
		temp.d=day;
		temp.m=month+1;
		temp.y=year+1900;
		return temp;
	}
	dated setDOB(int dd,int mm,int yy){
   		dated ans;
		ans.d=dd;
		ans.m=mm;
		ans.y=yy;
		return ans;
	}
	dated findAge(dated dobj){
		dated acc,temp,ans;
		temp.setDate();
		acc = temp.getDate();
		ans.d = dobj.d - acc.d;
		ans.m = dobj.m - acc.m;
		ans.y = dobj.y - acc.y;
		return ans;
	}
};

class timet{
	private:
	int hour,minute,second;
	
	public:
	int h,m,s;
	void setTime(){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		hour = ltm->tm_hour ;
		minute = ltm->tm_min ;
		second = ltm->tm_sec ;
	}
	timet getTime(){
		timet temp;
		temp.h=hour;
		temp.m=minute;
		temp.s=second;
		return temp;
	}
	timet sleepTime(timet a,timet b){
   		timet ans;
		ans.h=a.h-b.h;
		ans.m=a.m-b.m;
		ans.s=a.s-b.s;
		return ans;
	}

};

int main(){
//__________________________________time class___________________________________________________//
	timet t,temp1,temp2,obj;
	t.setTime();
	temp1 = t.getTime(); 
	temp2 = t.getTime();
	temp2.h += 2;
	temp2.m += 30;
	temp2.s += 20;
	
	cout << "gettime="<<temp1.h<<" "<<temp1.m<<" "<<temp1.s<<endl;
	cout << "gettime="<<temp2.h<<" "<<temp2.m<<" "<<temp2.s<<endl;
	
	obj = t.sleepTime(temp1,temp2);
	cout << "timeDIFF="<<obj.h<<" "<<obj.m<<" "<<obj.s<<endl;
//___________________________________date class________________________________________________//
	dated d,temp3,temp4,age;
	d.setDate();
	temp3 = d.getDate();
	temp4 = d.setDOB(5,6,2001);
	cout << "getdate="<<temp3.d<<" "<<temp3.m<<" "<<temp3.y<<endl;

	cout << "DOB="<<temp4.d<<" "<<temp4.m<<" "<<temp4.y<<endl;
	age = d.findAge(temp4);
	cout << "AGE="<<age.d<<" "<<age.m<<" "<<age.y<<endl;

	return 0;
}
