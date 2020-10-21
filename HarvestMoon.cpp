#include <bits/stdc++.h>

using namespace std;

void mainmenu(){
	cout<<"~ Mini Console Harvestmoon"<<endl;
	cout<<"~ ==================="     <<endl; 
	cout<<"~ 1. Male"<<endl;
	cout<<"~ 2. Female"<<endl;
	cout<<"~ 3. Exit"<<endl;
}
void fungsi(){
	cout<<"~ 1. Socialize"<<endl;
	cout<<"~ 2. Harvest"<<endl;
	cout<<"~ 3. Rest"<<endl;
	cout<<"~ 4. Return to main menu"<<endl;	
}

class aktivitas{
	private :
		int energy;
		int happiness;
		char name[20];
	public :
		int getenergy(){
			return energy;
		}
		int gethappiness(){
			return happiness;
		}
		char* getname(){
			return name;
		}
		void setname(char* name){
			strcpy(this->name,name);
		}
		void setenergy(int energy){
			this->energy=energy;
		}
		void sethappiness(int happiness){
			this->happiness=happiness;
		}
};
int main() {
	aktivitas data;
	int happiness;
	int energy;
	int p1;
	int p2;
	char name[20];
	data.setenergy(100);
	data.sethappiness(100);
	do {
	mainmenu();
	cout<<"~ Choose :";
	cin>>p1;
	switch (p1){
		case 1:
			do {
				cout<<"Insert the character name [3..20 character]: ";
				gets(name);
			}while(strlen(name)<3 || strlen(name)>20);
			data.setname(name);
			cout<<"Hellow Thereeee, "<<data.getname()<<endl;
			cout<<"Energy    : "<<data.getenergy()<<endl;
			cout<<"Happiness : "<<data.gethappiness()<<endl;
			do {
				fungsi();
				cout<<"~ Choose :";
				cin>>p2;
				switch (p2){
					case 1:
						cout<<"Meet Neighbors..."<<endl;
						cout<<"Happiness increase 20 Pts and energy decrease 10 Pts"<<endl;
						happiness=data.gethappiness()+20;
						energy=data.getenergy()-10;
						data.setenergy(energy);
						data.sethappiness(happiness);
						if (data.getenergy()>100){
							cout<<"Energy :"<<100<<endl;
						}
						else {
							cout<<"Energy :"<<data.getenergy()<<endl;
						}
						if (data.gethappiness()>100){
							cout<<"Happiness :"<<100<<endl;
						}
						else {
							cout<<"Happiness :"<<data.gethappiness()<<endl;
						}
					case 2:
						cout<<"Harvesting the farm !!"<<endl;
						break;
				}
			}while (p2!=4);
			break;
		case 2:
			do {
				cout<<"Insert the character name [3..20 character]: ";
				gets(name);
			}while(strlen(name)<3 || strlen(name)>20);
			data.setname(name);
			cout<<"Helow THeree, "<<data.getname()<<endl;
			cout<<"Energy    : "<<data.getenergy()<<endl;
			cout<<"Happiness : "<<data.gethappiness()<<endl;
			do {
				fungsi();
				cout<<"~ Choose :";
				cin>>p2;
				switch (p2){
					case 1:
						cout<<"Meet Neighbors..."<<endl;
						cout<<"Happiness increase 20 Pts and energy decrease 10 Pts "<<endl;
						happiness=data.gethappiness()+20;
						energy=data.getenergy()-10;
						data.setenergy(energy);
						data.sethappiness(happiness);
						if (data.getenergy()>100){
							cout<<"Energy :"<<100<<endl;
						}
						else {
							cout<<"Energy :"<<data.getenergy()<<endl;
						}
						if (data.gethappiness()>100){
							cout<<"Happiness :"<<100<<endl;
						}
						else {
							cout<<"Happiness :"<<data.gethappiness()<<endl;
						}
				}
			}while (p2!=4);
			break;
		case 3:
			exit(0);
			break;
		}
}while(p2==4);
	return 0;
}

