#include <iostream> 
#include <list> 
#include <fstream> 

#include "Date.h" // Date class definition 

#include "Certificate.h"


using namespace std; 

class Employee{
	protected:
		long long ID, Phone;
		string Fullname, Email, Employee_type;
		Date Birthday;
		int Employee_count; 
		Certificate cer; 
	public:
		Employee(long long ID, string Fullname, Date Birthday, long long Phone, string Email, string Employee_type, Certificate cer){
			this->ID = ID ; 
			this->Fullname = Fullname; 
			this->Birthday = Birthday; 
			this->Phone = Phone; 
			this->Email = Email; 
			this->Employee_type = Employee_type;
			this->cer = cer; 
		}
		~Employee(){
			cout<<"... Destroyed "<<endl; 
		}
		
		long long getID() {return this->ID;}
		void setID(long long ID) { this->ID = ID;}
		
		string getFullname() { return this->Fullname;}
		void setFullname(string Fullname) {this->Fullname = Fullname; }
		
		Date getBirthday() {return this->Birthday; }
		void setBirthday(Date Birthday) {this->Birthday = Birthday;}
		 
		long long getPhone() {return this->Phone;}
		void setPhone(long long Phone) {this->Phone = Phone;}
		
		string getEmail() {return this->Email;}
		void setEmail(string Email) {this->Email = Email;}
		
		string getEmployee_type() {return this->Employee_type;}
		void setEmployee_type(string Employee_type) {this->Employee_type = Employee_type;}
		
		int getEmployee_count() {return this->Employee_count;}
		void setEmployee_count(int Employee_count) {this->Employee_count = Employee_count;}
		
		Certificate getCertificate() {return this->cer ;}
		void setCertificate(Certificate cer) {this->cer = cer;}

		void showInformationBasic(){
			cout<<"Infomation of this "<<this->Employee_type<<" : "<<endl ;
			cout<<"+ Id : "<<this->ID<<endl; 
			cout<<"+ Fullname : "<<this->Fullname<<endl;
			cout<<"+ Birthday : ";
			this->Birthday.outputdate(); 
			cout<<"+ Phone : "<<this->Phone<<endl;
			cout<<"+ Email : "<<this->Email<<endl;
			cout<<"+ Employee type : "<<this->Employee_type<<endl;  
		}
};

class Experience: public Employee{
	protected:

		int ExpInYear; // so nam kinh nghiem 
		string proSkill; // ki nang chuyen mon 

	public:
		Experience(long long ID, string Fullname, Date Birthday, string Email, long long Phone, string Employee_type, Certificate cer , int ExpInYear, string proSkill) : Employee(ID, Fullname, Birthday, Email, Phone, Employee_type, cer){
			this->ExpInYear = ExpInYear; 
			this->proSkill = proSkill; 
		}

		~Experience() {cout<<"... Destroyed"<<endl; }

		int getExpInYear() {return this->ExpInYear;}
		void setExpInYear(int ExpInYear) {this->ExpInYear = ExpInYear; }

		string getproSkill() {return this->proSkill; }
		void setproSkill(string proSkill) {this->proSkill = proSkill; }

		void show(){
			cout<<"Information of ("<<this->Employee_type<<") "<<getFullname()<<endl;
			cout<<"+ Id : "<<this->ID<<endl; 
			cout<<"+ Fullname : "<<this->Fullname<<endl;
			cout<<"+ Birthday : ";
			this->Birthday.outputdate(); 
			cout<<"+ Phone : "<<this->Phone<<endl;
			cout<<"+ Email : "<<this->Email<<endl;
			cout<<"+ Employee type : "<<this->Employee_type<<endl; 
			cout<<"+ Number of years of experience : "<<this->ExpInYear<<endl; 
			cout<<"+ Skill : "<<this->proSkill<<endl; 
		}
};

class Fresher: public Employee{
	protected:
		Date Graduation_date; 
		string Graduate_rank, Education; 
		
		// Graduation_date: thoi gian tot nghiep 
		// Graduate_rank: xep loai tot nghiep 
		// Education: truong tot nghiep 

	public:
		Fresher(long long ID, string Fullname, Date Birthday, String Email, long long Phone, string Employee_type, Certificate cer, Date Graduation_date, string Graduate_rank, string Education) : Employee(ID, Fullname, Birthday, Email, Phone, Employee_type, cer){
			this->Graduation_date = Graduation_date; 
			this->Graduate_rank = Graduate_rank; 
			this->Education = Education ; 
		}

		~Fresher() {cout<<"... Destroyed"<<endl;}

		Date getGraduate_date() {return this->Graduation_date;}
		void setGraduate_date(Date Graduate_date) {this->Graduation_date = Graduate_date;}

		string getGraduate_rank() {return this->Graduate_rank ;}
		void setGraduate_rank(string Graduate_rank) {this->Graduate_rank = Graduate_rank;}

		string getEducation() {return this->Education ;}
		void setEducation(string education){this->Education = Education;}

		void show(){
			cout<<"Information of ("<<this->Employee_type<<") "<<getFullname()<<endl;
			cout<<"+ Id : "<<this->ID<<endl; 
			cout<<"+ Fullname : "<<this->Fullname<<endl;
			cout<<"+ Birthday : ";
			this->Birthday.outputdate(); 
			cout<<"+ Phone : "<<this->Phone<<endl;
			cout<<"+ Email : "<<this->Email<<endl;
			cout<<"+ Employee type : "<<this->Employee_type<<endl; 
			cout<<"+ Graduation time : ";
			this->Graduation_date.outputdate();
			cout<<"+ Graduation rank : "<<this->Graduate_rank<<endl; 
			cout<<"+ University which fresher graduated : "<<this->Education<<endl; 
		}
		
};

class Intern: public Employee{
	protected:
		string Majors, University_name; 
		int sesmeter; 
		
		// Majors : chuyen nganh dang hoc 
		// Sesmeter :hoc ki dang hoc 
		// University_name : ten truong dang theo hoc 

	public:
		Intern(long long ID, string Fullname, Date Birthday, string Email, long long Phone, string Employee_type, Certificate cer, string Majors, int sesmeter, string university_name) : Employee (ID, Fullname, Birthday, Email, Phone, Employee_type, cer){
			this->Majors = Majors ; 
			this->sesmeter = sesmeter; 
			this->University_name = university_name; 
		}
		~Intern(){cout<<"... Destroyed"<<endl;}

		string getMajors() {return this->Majors;}
		void setMajors(string Majors){this->Majors = Majors;}

		string getUniversity_name() {return this->University_name;}
		void setUniversity_name(string University_name) {this->University_name = University_name;}

		int getSesmeter() {return this->sesmeter;}
		void setSesmeter(int sesmeter) {this->sesmeter = sesmeter ;}

		void show(){
			cout<<"Information of ("<<this->Employee_type<<") "<<getFullname()<<endl;
			cout<<"+ Id : "<<this->ID<<endl; 
			cout<<"+ Fullname : "<<this->Fullname<<endl;
			cout<<"+ Birthday : ";
			this->Birthday.outputdate(); 
			cout<<"+ Phone : "<<this->Phone<<endl;
			cout<<"+ Email : "<<this->Email<<endl;
			cout<<"+ Employee type : "<<this->Employee_type<<endl; 
			cout<<"+ Majors : "<<this->Majors<<endl; 
			cout<<"+ University which intern is studying : "<<this->University_name<<endl; 
			cout<<"+ Sesmeter : "<<this->sesmeter<<endl; 
		}
};

list<Experience> lst1; 
list<Fresher> lst2; 
list<Intern> lst3; 

string inputnametoremove(string type){
	string name; 
	cout<<"Enter name of "<<type<<" which you want to remove : "<<endl; 
	cin>>name; 

	return name; 
}

Experience input_information_experience(){
	string filename = "Experience.txt" ; 
	ifstream ifs ; 
	ifs.open(filename) ; 
	long long id, phone;
	string fullname, emp_type, email;  
	int day_bir ; // day of birthday 
	int month_bir; // month of birthday 
	int year_bir;  // year of birthday
	int day_get_cer; // day which get a Certificate 
	int month_get_cer; // month which get a Certificate 
	int year_get_cer; // year which get a Certificate 
	int cer_rank; 

	int exp ; // No years of experience
	string skill ; // skill of person 

	getline(ifs, fullname) ; 
	getline(ifs, skill) ; 
	ifs>>id>>day_bir>>month_bir>>year_bir>>email>>phone>>emp_type>>day_get_cer>>month_get_cer>>year_get_cer>>cer_rank>>exp ; 
	
	Date birthday, date_get_cer;
	birthday.setDay(day_bir).setMonth(month_bir).setYear(year_bir) ;
	date_get_cer.setDay(day_get_cer).setMonth(month_get_cer).setYear(year_get_cer) ;  
	Certificate cer; 
	cer.setCertificateID(id).setCertificateName(fullname).setCertificateRank(cer_rank).setCertificateDate(date_get_cer) ;  
	Experience exper(id, fullname, birthday, email, phone, emp_type, cer, exp, skill) ; 
	ifs.close() ; 
	return exper ; 
}

Fresher input_information_fresher(){
	string filename = "Fresher.txt"; 
	ifstream ifs(filename) ; 
	ifs.open(filename) ; 
	long long id, phone;
	string fullname, emp_type, email;  
	int day_bir ; // day of birthday 
	int month_bir; // month of birthday 
	int year_bir;  // year of birthday
	int day_get_cer; // day which get a Certificate 
	int month_get_cer; // month which get a Certificate 
	int year_get_cer; // year which get a Certificate 
	int cer_rank; 

	int graduate_day; // day which graduate 
	int graduate_month; // month which graduate 
	int graduate_year;  // year which graduate 
	string gra_rank; // rank of graduate 
	string education; // where you graduate 
						
	getline(ifs, fullname) ; 
	getline(ifs, education) ; 
	ifs>>id>>day_bir>>month_bir>>year_bir>>email>>phone>>emp_type>>day_get_cer>>month_get_cer>>year_get_cer>>cer_rank>>graduate_day>>graduate_month>>graduate_year>>gra_rank; 

	Date birthday, date_get_cer, date_graduate;
	birthday.setDay(day_bir).setMonth(month_bir).setYear(year_bir) ;
	date_get_cer.setDay(day_get_cer).setMonth(month_get_cer).setYear(year_get_cer) ;  
	date_graduate.setDay(graduate_day).setMonth(graduate_month).setYear(graduate_year) ; 
	Certificate cer; 
	cer.setCertificateID(id).setCertificateName(fullname).setCertificateRank(cer_rank).setCertificateDate(date_get_cer) ;  

	Fresher fresh(id, fullname, birthday, email, phone, emp_type, cer, date_graduate, gra_rank, education) ; 
	ifs.close() ; 
	return fresh ; 
}

Intern input_information_intern(){
	string filename = "Intern.txt" ; 
	ifstream ifs(filename) ;
	ifs.open(filename) ; 
	long long id, phone;
	string fullname, emp_type, email;  
	int day_bir ; // day of birthday 
	int month_bir; // month of birthday 
	int year_bir;  // year of birthday
	int day_get_cer; // day which get a Certificate 
	int month_get_cer; // month which get a Certificate 
	int year_get_cer; // year which get a Certificate 
	int cer_rank; 

	string majors, university_name; 
	int sesmeter; 

	getline(ifs, fullname) ; 
	getline(ifs, majors) ; 
	getline(ifs, university_name) ; 
	ifs>>id>>day_bir>>month_bir>>year_bir>>email>>phone>>emp_type>>day_get_cer>>month_get_cer>>year_get_cer>>cer_rank>>sesmeter; 

	Date birthday, date_get_cer;
	birthday.setDay(day_bir).setMonth(month_bir).setYear(year_bir) ;
	date_get_cer.setDay(day_get_cer).setMonth(month_get_cer).setYear(year_get_cer) ;  
	Certificate cer; 
	cer.setCertificateID(id).setCertificateName(fullname).setCertificateRank(cer_rank).setCertificateDate(date_get_cer) ;  

	Intern inte(id, fullname, birthday, email, phone, emp_type, cer, majors, sesmeter, university_name) ; 
	ifs.close() ; 
	return inte; 
}

class Manager_Employee{
	void insert(){
		bool check = false; 
		int n ; // so luong nhan vien can nhap vao

		// 1. Experience 
		// 2. Fresher 
		// 3. Intern 
		// 4. Exit while loop 

		cout<<"List of kind of Employee : "<<endl; 
		cout<<"1. Experience ."<<endl; 
		cout<<"2. Fresher ."<<endl; 
		cout<<"3. Intern ."<<endl; 

		while(!check){
			int choice; 
			cout<<"Enter your kind of Employee : "<<endl; 
			cin>> choice; 
			switch(choice)
			{
				case 1: 
					
					int num_exp ; // so luong nhan vien loai Experience can nhap vao 
					cout<<"Number of Experience : "<<endl; 
					cin>>num_exp ; 
					for (int i = 0 ; i < num_exp ; i++){
						Experience new_exper = input_information_experience() ; 	
						lst1.push_front(new_exper) ; 
					}
					break; 
				case 2: 
					int num_fre ; // so luong nhan vien loai Fresher can nhap vao 
					cout<<"Number of Fresher : "<<endl ; 
					cin>>num_fre ; 
					for (int i = 0 ; i < num_fre ; i++){
						Fresher new_fresh = input_information_fresher() ; 
						lst2.push_front(new_fresh) ; 
					}
					break ; 	
				case 3:
					int num_inte ; // so luong nhan vien loai Intern can nhap vao 
					cout<<"Number of Intern : "<<endl ; 
					cin>>num_inte ; 
					for (int i = 0 ; i < num_inte ; i++){
						Intern new_inte = input_information_intern() ; 
						lst3.push_front(new_inte) ; 
					}
					break ; 	
				case 4: 
					check = true ; 
					break ; 
				default : 
					throw invalid_argument("Wrong entry !!! ") ; 
					break; 
			}
		}
		cout<<endl; 
	}

	void show(){
		cout<<"List print"<<endl; 
		cout<<"1. Print Experience."<<endl; 
		cout<<"2. Print Fresher."<<endl; 
		cout<<"3. Print Intern ."<<endl; 

		// 1. Experience 
		// 2. Fresher 
		// 3. Intern 
		// 4. Exit while loop 

		bool check = false ; 
		while(!check){
			int choice; 
			cout<<"Enter your choice : "<<endl; 
			cin>>choice; 
			switch (choice)
			{
				case 1: /* constant-expression */:
					cout<<"List of Experience"<<endl; 
					for (auto& x : lst1){
						x.show(); 
					}
					break;
				case 2: 
					cout<<"List of Fresher"<<endl; 
					for (auto& x : lst2){
						x.show(); 
					}
					break; 
			case 3:
					cout<<"List of Intern"<<endl; 
					for(auto& x : lst3){
						x.show(); 
					}
			default:
					cout<<"Wrong Entry !!!"<<endl ; 
					break;
			}
		}
	}

	void edit(){
		cout<<"List remove"<<endl; 
		cout<<"1. Experience."<<endl; 
		cout<<"2. Fresher."<<endl; 
		cout<<"3. Intern ."<<endl; 
		bool check = false; 
		while(!check){
			int choice; 
			cout<<"Enter your choice : "<<endl; 
			cin>>choice;

			switch(choice){
				case 1:
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst1){
						if(x.getFullname() == name1){
							found = true; 
							lst1.remove(x) ; 
							Experience new_exp = input_information_experience();
							lst1.push_front(new_exp); 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 2:
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst2){
						if(x.getFullname() == name1){
							found = true; 
							lst2.remove(x) ; 
							Fresher new_fresh = input_information_fresher();
							lst2.push_front(new_fresh); 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 3: 
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst3){
						if(x.getFullname() == name1){
							found = true; 
							lst3.remove(x) ; 
							Experience new_inte = input_information_intern();
							lst3.push_front(new_inte); 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 4: 
					check = true; 
					break;
				default:
					cout<<"Invalid input !!!"<<endl ; 
					break; 
			}
		}
	}

	void removebyname(){
		cout<<"List remove"<<endl; 
		cout<<"1. Experience."<<endl; 
		cout<<"2. Fresher."<<endl; 
		cout<<"3. Intern ."<<endl; 
		bool check = false; 
		while(!check){
			int choice; 
			cout<<"Enter your choice : "<<endl; 
			cin>>choice; 

			switch(choice){
				case 1: 
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst1){
						if(x.getFullname() == name1){
							found = true; 
							lst1.remove(x) ; 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 2:
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst2){
						if(x.getFullname() == name1){
							found = true; 
							lst1.remove(x) ; 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 3:
					bool found = false ; 
					string name1 = inputnametoremove();
					for (auto& x : lst3){
						if(x.getFullname() == name1){
							found = true; 
							lst1.remove(x) ; 
						}
					}
					if(!found){
						cout<<"This name don't in this list "<<endl; 
					}
					break; 
				case 4: 
					check = true; 
					break; 
				default:
					cout<<"Invalid input"<<endl; 
					break; 
			}
		}
	}

	void showAll(){
		cout<<"Experiences in this list : "<<endl ; 
		for(auto& x : lst1){
			x.show() ; 
		}
		cout<<"Freshers in this list : "<<endl ; 
		for(auto& x : lst2){
			x.show() ; 
		}
		cout<<"Interns in this list : "<<endl ; 
		for(auto& x : lst3){
			x.show() ; 
		}
	}
}; 

int main(){
	bool check = false ; 
	cout<<"List of operations : "; <<endl; 
	cout<<"1. Insert the new employee ."<<endl ;
	cout<<"2. Show employees ." <<endl; 
	cout<<"3. Show all kind of employee ."<<endl ; 
	cout<<"4. Remove the employee ."<<endl; 
	cout<<"5. Edit information of employee . "<<endl; 
	cout<<"6. Exit"<<endl; 

	Manager_Employee me; 
	while(!check){
		int choi; 
		cout<<"Enter operation : "<<endl; 
		cin>>choi ; 

		switch(choi){
			case 1:
				me.insert() ; 
				break ; 
			case 2:
				me.show() ;
				break ;  
			case 3:
				me.showAll() ; 
				break ; 
			case 4: 
				me.removebyname() ; 
				break ; 
			case 5:
				me.edit() ; 
				break ; 
			case 6:
				check = true ; 
			default:
				cout<<"Invalid entry !!!"<<endl ; 
				break; 
		}
	}

	cout<<"===================================================================================================="<<endl; 

	return 0; 
}