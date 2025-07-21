
#include<bits/stdc++.h>
using namespace std;

class Profile{
    protected:
    string uname;
    string pass;
    string email;
    
public :
    Profile(string uname,string pass,string email){
        this->uname = uname;
        this->pass = pass;
        this->email = email;
    }
    void  displayProfile(){
        cout<<"Enter Username   :"<<uname<<endl;
        cout<<"Enter Email    :"<<email<<endl;
    }
    Profile(){}
};

class PersonalProfile : public Profile{
    private: int age; string Gender;
    public:
        PersonalProfile(string uname,string pass,string email,int age,string Gender)
        :Profile(uname,pass,email),age(age),Gender(Gender){}

void displayProfile(){
    cout<<"==============================================="<<endl;
    cout<<"==============[ Personal Profile ]============="<<endl;
    Profile::displayProfile();
    cout<<"Age         :"<<age<<endl;
    cout<<"Gender     :"<<Gender<<endl;
    cout<<"==============================================="<<endl;
    cout<<"==============================================="<<endl;
  }
};

class BusinessProfile : public Profile{
    private: int Busi_id; string CompanyName;
    public:
        BusinessProfile(string uname,string pass,string email,int Busi_id,string CompanyName)
        :Profile(uname,pass,email),Busi_id(Busi_id),CompanyName(CompanyName){}

void displayProfile(){
    cout<<"==============================================="<<endl;
    cout<<"==============[ Business Profile ]============="<<endl;
    Profile::displayProfile();
    cout<<"Business Id    :"<<Busi_id<<endl;
    cout<<"Company Name   :"<<CompanyName<<endl;
    cout<<"================================================"<<endl;
    cout<<"================================================"<<endl;
  }
};

class InfluencerProfile : public Profile{
    private: long followerCount; string field;
    public :
    InfluencerProfile(string uname,string pass,string email,long followerCount,string field)
    :Profile(uname,pass,email),followerCount(followerCount),field(field){}
    
    void displayProfile(){
    cout<<"================================================"<<endl;
    cout<<"==============[ Influencer Profile ]============"<<endl;
    Profile::displayProfile();
    cout<<"Followers    :"<<followerCount<<endl;
    cout<<"Field   :"<<field<<endl;
    cout<<"================================================"<<endl;
    cout<<"================================================"<<endl;
    }
};

class TechnicalProfile : public Profile{
    private: string skill; string design;
    public:
        TechnicalProfile(string uname,string pass,string email,string skill,string design)
        :Profile(uname,pass,email),skill(skill),design(design){}

void displayProfile(){
    cout<<"==============================================="<<endl;
    cout<<"==============[ Technical Profile ]============="<<endl;
    Profile::displayProfile();
    cout<<"Skill         :"<<skill<<endl;
    cout<<"Désignation     :"<<design<<endl;
    cout<<"==============================================="<<endl;
    cout<<"==============================================="<<endl;
  }
};


int main() {
    

PersonalProfile pr("Nanhe7120","pass@123","nanhekhan7@gmail.com",58,"Male");
BusinessProfile br("Aman234","Aman@123","aman_khan7@gmail.com",18934,"Aman Group Inc.");
InfluencerProfile ip("Rockey123","Rockey23@voice","rockey123voice@gmail.com",13324000,"Rockstar Music");

TechnicalProfile tp("KUTUBADDIN","KD23@Tech","kd123tech@gmail.com","Java,C++,React.js,Javascript etc. ","MERN Developer");

    pr.displayProfile();
    cout<<endl;
    tp.displayProfile();
    cout<<endl;
    br.displayProfile();
    cout<<endl;
    ip.displayProfile();
    cout<<endl;

    return 0;
}





