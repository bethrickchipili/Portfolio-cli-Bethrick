#include<iostream>
using namespace std;
void showMenu();
void show_About();
void show_SkillsToBeLearnt();
void show_MyProjects();
void show_MyFuturePlans();



    
int option=0;
int main(){
    
    
    
    while(option!=5){
        showMenu();
        switch(option){
        case 1:show_About();break;
        case 2:show_SkillsToBeLearnt();break;
        case 3:show_MyProjects();break;
        case 4:show_MyFuturePlans();break;
        case 5:break;
        default:cout<<"Invalid input, please choose from 1 to 5";break;
    }
    }





    return 0;
}
void showMenu(){
    cout<<"---------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"             MY PORTOLIO APP                       "<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------"<<endl;

    cout<<"1. About me: "<<endl;
    cout<<"2. Skills I want to learn"<<endl;
    cout<<"3. My Projects"<<endl;
    cout<<"4. My Future Plans"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Please select from the list above:";
    cin>>option;
    


}





void show_About(){
    cout<<"             ABOUT ME            "<<endl;
    cout<<"Full Name: Bethrick Chipili"<<endl;
    cout<<"School and year: School of ICT, Second year"<<endl;
    cout<<"Program: Computer Science"<<endl;
    cout<<"Description: I'm eager to learn more about how to create functional, efficient ad reliable software."<<endl;

}
void show_SkillsToBeLearnt(){
    cout<<"SKILLS TO BE LEARNT"<<endl;
    cout<<"1. Backend development"<<endl;
    cout<<"2. Autosar development"<<endl;
    cout<<"3. Database manaegement"<<endl;
    cout<<"4. Vehicle infotainment systems"<<endl;
    cout<<"5. Advanced Driver Assistant Systems(ADAS)"<<endl;

    cout<<"Vision in 5 years:"<<endl;
    cout<<"Still learning and evolving while delivering reliable software and systems"<<endl;
}

void show_MyProjects(){
    cout<<" PROJECTS"<<endl;
    cout<<" 1. ZRA Calculator"<<endl;
    cout<<" 2. Recipe App"<<endl;
    cout<<" 3. Fuel/Distance efficiency regulator App"<<endl;
    cout<<" 4. Portfolio website.(In development)"<<endl;
    cout<<" 5. Graphic designing"<<endl;
}

void show_MyFuturePlans(){
    cout<<"MY FUTURE PLANS IN TECH"<<endl;
    cout<<"Becoming a backend developer"<<endl;
    cout<<"Mastering the software technologies used in a vehicle."<<endl;
    cout<<"AI/ML learning"<<endl;
    cout<<"ECU programming"<<endl;
}

