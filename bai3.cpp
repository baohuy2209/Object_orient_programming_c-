#include <iostream> 
#include <list> 
using namespace std; 


class Invalidscore{
    public: 
        Invalidscore(){
            cout<<"Invalid entry !!! let's try again . Score must be 0 - 10 . "<<endl; 
        }
} ; 

class InvalidstudentCode{
    public:
        InvalidstudentCode(){
            cout<<"Invalid entry !!! let's enter student code again . Length of student_code must be 9 ."<<endl ; 
        }
}

class InvalidFullname{
    public: 
        InvalidFullname(){
            cout<<"Invalid entry !!! let's enter name again . Length of the name must be 10 - 30 ."<<endl ; 
        }
}

class Student{
    protected:
        int studentCode, year_errol; 
        string fullname; 
        double score_entry; 
        Result result; 

    public:
        Student(int studentcode, int year_errol, string fullname, double score_entry, Result result){
            this->studentCode = studentcode ;
            this->year_errol = year_errol ; 
            this->fullname = fullname ; 
            this->score_entry = score_entry ; 
            this->result = result ;  
        }

        int getStudentCode(){
            return this->studentCode ; 
        }
        void setStudentCode(int studentCode){
            this->studentCode = studentCode ; 
        }

        string getFullname(){
            return this->fullname ; 
        }
        void setFullname(string fullname){
            this->fullname = fullname ; 
        }

        double getScore_entry(){
            return this->score_entry ; 
        }
        void setScore_entry(double score_entry){
            this->score_entry = score_entry ; 
        }

        Result getResult(){
            return this->result ; 
        }
        void setResult(Result result){
            this->result = result ; 
        }

}; 

class Student_spec : public Student{
    protected:
        string address_education; 

    public :
        Student_spec(int studentcode, int year_errol, string fullname, double score_entry, Result result, string address_education) : Student(studentcode, year_errol, fullname, score_entry, result){
            this->address_education = address_education ; 
        }

        string getAddress_education(){
            return this->address_education ; 
        }
        void setAddress_education(string address_education){
            this->address_education = address_education ; 
        }
};

class Course{
    protected:
        string name_Course; 
        list<string> lst; 
    public: 
        Course(string name_Course, list<string> lst){
            this->name_Course = name_Course ; 
            this->lst = lst ; 
        }

        string getName_course(){
            return this->name_Course ; 
        }
        void setName_course(string namecourse){
            this->name_Course = namecourse; 
        }

        list<string> getlist(){
            return this->lst ; 
        }

        void setlist(list<string> lst){
            this->lst = lst ; 
        }
};

class Result{
    protected:
        double math, literature, english, biology, chemical, physical, geography, history; 
        double average; 
        string sesmeter; // ten hoc hoc 
        // list cac mon hoc 

    public :
        Result(double math, double literature, double english, double biology, double chemical, double physical, double geography, double history, string sesmeter) {
            this->average = (this->math+this->literature+this->english+this->biology+this->chemical+this->physical+this->geography+this->history)/8;
            this->math = math ; 
            this->literature = literature ; 
            this->english = english ; 
            this->biology = biology;
            this->chemical = chemical ; 
            this->physical = physical ; 
            this->geography = geography ; 
            this->history = history ; 
            this->sesmeter = sesmeter ; 
        }

        double getAverage(){
            return (this->math+this->literature+this->english+this->biology+this->chemical+this->physical+this->geography+this->history)/8;
        }

        double getmath(){
            return this->math ; 
        }
        void setmath(double math){
            this->math = math ; 
        }

        double getliterature(){
            return this->literature ; 
        }
        void setliterature(double literature){
            this->literature = literature ; 
        }

        double getenglish(){
            return this->english ; 
        }
        void setenglish(double english){
            this->english = english ; 
        }

        double getbiology(){
            return this->biology ; 
        }
        void setbiology(double biology){
            this->biology = biology ; 
        }

        double getphysical(){
            return this->physical ; 
        }
        void setphysical(double physical){
            this->physical = physical ; 
        }

        double getchemical(){
            return this->chemical ; 
        }
        void setchemical(double chemical){
            this->chemical = chemical ; 
        }

        double gethistory(){
            return this->history ; 
        }
        void sethistory(double history){
            this->history = history ; 
        }

        double getgeography(){
            return this->geography ; 
        }
        void setgeography(double geography){
            this->geography = geography ; 
        }

        string getsesmeter(){
            return this->sesmeter ; 
        }
        void setsesmeter(string sesmeter){
            this->sesmeter = sesmeter ; 
        }
};

list<Student> lst1 ; 
list<Student_spec> lst2 ; 

class Manager {
    void show(){

    }
    void insert(){

    }
    void remove(){

    }
    void edit(){

    }

    int get_no_regular_student(){

    }

    void search_student_has_highest_score(){

    }
    void find_student_which_has_address(){

    }


    /*
    Ở mỗi khoa, lấy ra danh sách sinh viên có điểm trung bình ở học kỳ gần nhất
    (là học kỳ cuối cùng trong danh sách kết quả học tập của sinh viên) từ 8.0 trở
    lên
    Ở mỗi khoa, tìm ra sinh viên có điểm trung bình học kỳ cao nhất (ở bất kỳ học
    kỳ nào)
    Ở mỗi khoa, sắp xếp danh sách sinh viên tăng dần theo loại và giảm dần theo
    năm vào học (sử dụng interface Comparable hoặc Comparator)
    Ở mỗi khoa, thống kê số lượng sinh viên theo năm vào học. Ví dụ 2020: 100,
    2019: 90, 2018: 120.
    */
}; 

int main(){

}
