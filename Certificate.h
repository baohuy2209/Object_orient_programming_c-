#include <string> 
#include "Date.h" // Date class definition
class Certificate{
	protected:
		long long CertificateID; // id 
		string CertificateName; // ten 
		int CertificateRank;   // xep loai cua bang cap 
		Date CertificateDate; // ngay nhan bang cap 
		
	public:
		explicit Certificate(long long = 0, string = " ", int = 0, Date = 0) ; 
		
		Certificate& setCertificate(long long, string, int, Date) ; // set Certificate 
		Certificate& setCertificateID(long long) ; // set CertificateID 
		Certificate& setCertificateName(string) ; // set CertificateName 
		Certificate& setCertificateRank(int) ; // set CertificateRank 
		Certificate& setCertificateDate(Date) ; // set CertificateDate 

		long long getCertificateID() const; 
		string getCertificateID() const ; 
		int CertificateRank() const ; 
		Date CertificateDate() const ; 

		void inputinform() ;
		void outputinform() ; 

};
