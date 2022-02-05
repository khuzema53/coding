#include <iostream>

using namespace std;

class vehicle{
	protected:
	string typeosvehicle;
	string make;
	int model;
	string color;
	int year;
	int milesdriven;
	
	public:
		vehicle(){}
		vehicle(string typeosvehicle, string make, int model, string color, int year, int milesdriven)
		{
			this->typeosvehicle=typeosvehicle;
			this->make=make;
			this->model=model;
			this->color=color;
			this->year=year;
			this->milesdriven=milesdriven;
		}
};

class gasvehicle:virtual public vehicle{
	protected:
	float tanksize;
	public:
		gasvehicle(float tanksize,string typeosvehicle, string make, int model, string color, int year, int milesdriven):vehicle(typeosvehicle, make, model, color, year, milesdriven)
		{
			this->tanksize=tanksize;
		}
	
};
class electricvehicle:virtual public vehicle{
	protected:
	float energystorage;
	public:
		electricvehicle(float energystorage, string typeosvehicle, string make, int model, string color, int year, int milesdriven):vehicle(typeosvehicle, make, model, color, year, milesdriven)
		{
			this->energystorage=energystorage;
		}
};
class highperformance:public gasvehicle{
	int horsepower;
	int topspeed;

		
};
class sportcar:public highperformance{
	string gearbox;
	string drive_system;
	
	public:

};

class heavyvehicle:public gasvehicle, public electricvehicle{
	protected:
	float weight;
	int numberofwheels;
	float lenght;
	public:
		heavyvehicle(float weight, int numberofwheels, float lenght,float energystorage,int tanksize, string typeosvehicle, string make, int model, string color, int year, int milesdriven):gasvehicle(tanksize, typeosvehicle, make, model, color, year, milesdriven),electricvehicle(energystorage, typeosvehicle, make, model, color, year, milesdriven)
		{
			this->weight=weight;
			this->numberofwheels=numberofwheels;
			this->lenght=lenght;
		}
};

class constructionvehicle:public heavyvehicle{
	
	string cargo;

		
};
class bus:public heavyvehicle{
	protected:
	int numberofseat;
	public:
		bus(int numberofseat,float weight, int numberofwheels, float lenght,float energystorage,float tanksize, string typeosvehicle, string make, int model, string color, int year, int milesdriven):heavyvehicle(weight, numberofwheels, lenght,energystorage,tanksize, typeosvehicle, make, model, color, year, milesdriven)
		{
			this->numberofseat=numberofseat;
			this->typeosvehicle=typeosvehicle;
			this->make=make;
			this->model=model;
			this->color=color;
			this->year=year;
			this->milesdriven=milesdriven;
		}
		display()
		{
			cout<<"type is: "<<typeosvehicle<<endl;
			cout<<"make is: "<<make<<endl;
			cout<<"model is: "<<model<<endl;
			cout<<"color is: "<<color<<endl;
			cout<<"year is: "<<year<<endl;
			cout<<"miles driven are: "<<milesdriven<<endl;
			cout<<"weight is: "<<weight<<endl;
			cout<<"length is: "<<lenght<<endl;
			cout<<"number of wheels is : "<<numberofwheels<<endl;
			cout<<"number of seats is: "<<numberofseat<<endl;
			cout<<"feultank size is: "<<tanksize<<" cc"<<endl;	
		}	
};

int main()
{	
	bus B(24,45.6,4,56.6,78.5,65.4,"car","lexus",85475,"yellow",2016,765);
	B.display();

}
