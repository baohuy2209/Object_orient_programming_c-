#include <iostream> 
#include "Date.h"
#include <fstream> 
#include <list> 
using namespace std; 

class InvalidFullnameExcpetion{
    // fullname (10-50)
    public:
        InvalidFullnameExcpetion(string name){
            cout<<"Invalid name !!!"<<endl ; 
        }
};

class InvalidPhoneException{
    // phone (length = 10) || start with 090, 098, 091, 031, 035 , 038
    public:
        InvalidPhoneException(string phone){
            cout<<"Invalid phone !!!"<<endl; 
        }
};


class Student{
    protected:
        string fullname, sex, universityName, gradeLevel, phoneNumber; 
        Date doB ; 
    public :
        Student(string fullname, string sex, Date doB, string phoneNumber, string universityName, string gradeLevel){
            this->fullname = fullname; 
            this->sex = sex; 
            this->doB = doB; 
            this->phoneNumber = phoneNumber ; 
            this->universityName = universityName ; 
            this->gradeLevel = gradeLevel; 
        }
        ~Student(){
            cout<<"... Destroy"<<endl ; 
        }
        string getFullname() {return this->fullname ;}
        void setFullname(string fullname) {this->fullname = fullname ;}

        string getSex() { return this->sex;}
        void setSex(string sex) {this->sex = sex ;}

        Date getDOB() {return this->doB ;}
        void setDOB(Date doB) {this->doB = doB;}

        string getPhone() {return this->phone ;}
        void setPhone(string phone) {this->phoneNumber = phone ;}

        string getUniversityName() {return this->universityName ;}
        void setUniversityName(string UniversityName) {this->universityName = UniversityName ;}

        string getGradeLevel() {return this->gradeLevel;}
        void setGradeLevel(string gradelevel) {this->gradeLevel = gradelevel ;}

        void show(){

        }
}; 

class GoodSTD : public Student{
    protected:
        int gpa; //(1-10)
        string bestRewardName; 
    public : 
        GoodSTD(string fullname, string sex, Date doB, string phoneNumber, string universityName, string gradeLevel, int gpa, string bestrewardname) : Student(fullname, sex, doB, phoneNumber, universityName, gradeLevel){
            this->gpa = gpa ; 
            this->bestRewardName = bestrewardname ; 
        }

        ~GoodSTD(){
            cout<<"... Destroyed"<<endl; 
        }

        int getgpa() {return this->gpa;}
        void setgpa(int gpa) {this->gpa = gpa ;}

        string getBestRewardName() {return this->bestRewardName ;}
        void setBestRewardName(string best) {this->bestRewardName = best ;}

        void show(){

        }
};

class NormalSTD : public Student{
    protected:
        int englishScore, entryTextScore //(1-10) ;
    public: 
        NormalSTD(string fullname, string sex, Date doB, string phoneNumber, string universityName, string gradeLevel, int entrytextscore, int englishscore) : Student(fullname, sex, doB, phoneNumber, universityName, gradeLevel){
            this->englishScore = englishscore ; 
            this->entryTextScore = entrytextscore ; 
        }

        ~NormalSTD(){
            cout<<"... Destroyed"<<endl ; 
        }
        int getEnglishScore() {return this->englishScore;}
        void setgpa(int englishscore) {this->englishScore = englishscore ;}

        int getEntryTextScore() {return this->entryTextScore ;}
        void setBestRewardName(int entrytestscore){this->entryTextScore = entrytestscore ;}

}; 

GoodSTD input_information_goodstd() {
    string filename = "goodstd.txt" ; 
    ifstream fileinput ; 
    fileinput.open(filename) ; 
    string fullname, sex, universityName, gradeLevel, phoneNumber;
    int day_doB, month_doB, year_doB ; 

    int gpa; //(1-10)
    string bestRewardName; 

    getline(fileinput, fullname) ; 
    getline(fileinput, sex) ; 
    getline(fileinput, universityName); 
    getline(fileinput, gradeLevel) ; 
    getline(fileinput, phoneNumber) ; 
    getline(fileinput, bestRewardName) ; 
    ifs>>day_doB>>month_doB>>year_doB>>gpa ; 

    Date doB ; 
    doB.setDay(day_doB).setMonth(month_doB).setYear(year_doB) ; 

    GoodSTD std(fullname, sex, doB, phoneNumber, universityName, gradeLevel, gpa, bestRewardName) ;

    fileinput.close() ; 
    return std;  
}

NormalSTD input_information_normalstd() {
    string filename = "goodstd.txt" ; 
    ifstream fileinput ; 
    fileinput.open(filename) ; 
    string fullname, sex, universityName, gradeLevel, phoneNumber;
    int day_doB, month_doB, year_doB ; 

    int entrytextscore, englishscore;

    getline(fileinput, fullname) ; 
    getline(fileinput, sex) ; 
    getline(fileinput, universityName); 
    getline(fileinput, gradeLevel) ; 
    getline(fileinput, phoneNumber) ; 
    ifs>>day_doB>>month_doB>>year_doB>>entrytextscore>>englishscore ; 

    Date doB ; 
    doB.setDay(day_doB).setMonth(month_doB).setYear(year_doB) ; 

    NormalSTD std(fullname, sex, doB, phoneNumber, universityName, gradeLevel, entrytextscore, englishscore) ;

    fileinput.close() ; 
    return std;  
}

list<GoodSTD> lst1 ; 
list<NormalSTD> lst2 ; 

class Manage{
    void show(){

    }
    void insert(){

    }
    void edit(){

    }
    void remove(){

    }

    void recruitment(){

    }
};


int main(){
    
    return 0; 
}

