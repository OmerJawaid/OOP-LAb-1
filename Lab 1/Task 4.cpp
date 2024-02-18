#include <iostream>
using namespace std;

class Dog
{
public:
	string name;
	string breed;
	int age;
	void bark()
	{
		cout << name << " says Woof!" << endl;
	}
	void details()
	{
		cout << "Breed is " << breed << endl
			 << name << "'s age is " << age << " years" << endl;
	}
};

class Person
{
public:
	string name;
	int age;
	Dog pet;
	void persondetails()
	{
		cout << "Name: " << name << endl
			 << name << "'s age: " << age << endl;
		introducePet();
	}

	void introducePet()
	{
		cout << "My dog's name is " << pet.name << endl;
		pet.details();
		pet.bark();
	}

	void changePet(string newName, string newBreed, int newAge)
	{
		cout << name << " introduces a new pet!" << endl;
		pet.name = newName;
		pet.breed = newBreed;
		pet.age = newAge;
		introducePet();
	}
};

class House
{
public:
	int housenumber;
	Person person1;
	void Details()
	{
		cout << "House no. " << housenumber << endl;
		person1.persondetails();
	}
};

int main()
{
	House house1;
	House house2;
	house1.housenumber = 1;
	house1.person1.name = "Omer";
	house1.person1.age = 18;
	house1.person1.pet.name = "Buddy";
	house1.person1.pet.breed = "Bull Dog";
	house1.person1.pet.age = 3;
	house1.Details();
	cout << endl;
	house1.person1.changePet("Max", "Golden Retriever", 2);
	cout << endl;

	house2.housenumber = 2;
	house2.person1.name = "Ahmad";
	house2.person1.age = 19;
	house2.person1.pet.name = "Victor";
	house2.person1.pet.breed = "German Shepherd";
	house2.person1.pet.age = 4;
	house2.Details();
	return 0;
}
