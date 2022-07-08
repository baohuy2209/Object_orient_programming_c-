// Certificate class member function definitions 

#include <iomanip> 
#include <sstream>
#include <stdexcept> 
#include <fstream> 

#include "Certificate.h" 
#include "Date.h"

using namespace std; 

// constructor function is to initialize private data; 
// Call member function setTime to set variables; 
// default values are 0 (see class definition) 

Certificate::Certificate(long long Cerid, string Cername, int Certrank, Date Cerdate){
    setCertificate(Cerid, Cername, Certrank, Cerdate) ; 
}

// set values of certificate 
Certificate& Certificate::setCertificate(long long Cerid, string Cername, int Certrank, Date Cerdate){
    setCertificateID(Cerid) ; 
    setCertificateName(Cername) ; 
    setCertificateRank(Certrank) ; 
    setCertificateDate(Cerdate) ; 

    return *this; // enables cascading 
}

// set Certificate Id 
Certificate& Certificate::setCertificateID(long long i){
    CertificateID = i ; 

    return *this; 
}

// set Certificate Name 
Certificate& Certificate::setCertificateName(string name){
    CertificateName = name; 

    return *this; // enables cascading 
}

// set Certificate Rank 
Certificate& Certificate::setCertificateRank(int r){
    CertificateRank = r ; 

    return *this; // enables cascading 
}

// set Certificate Date 
Certificate& Certificate::setCertificateDate(Date d){
    CertificateDate = d;

    return *this;  
}

// get Id value 
long long Certificate::getCertificateID() {return CertificateID;}

// get name value 
string Certificate::getCertificateName() {return CertificateName;}

// get rank of certificate 
int Certificate::getCertificateRank() {return CertificateRank;}

// get date which get certificate 
Date Certificate::getCertificateDate() {return CertificateDate;}

void Certificate::outputinform(){ 

    cout<<"Information of Certificate : "<<endl; 
    cout<<" ID : "<<getCertificateID()<<endl; 
    cout<<" Name : "<<getCertificateName()<<endl; 
    cout<<" Rank : "<<getCertificateRank()<<endl; 
    cout<<" Date which get the certificate : "<<getCertificateDate()<<endl; 

}

void Certificate::inputinform(){
    ifstream ifs("Certificate.txt") ; 
    long long id ;
    string 
}