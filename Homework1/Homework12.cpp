// critter_farm.cpp
// Compile with: g++ critter_farm.cpp -o critter_farm
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void listNames(string* name);

class Critter
{
public:
	Critter(const string& name = "");
	string GetName() const;

private:
	string m_Name;
};

Critter::Critter(const string& name) :
	m_Name(name)
{}

inline string Critter::GetName() const
{
	return m_Name;
}

class Farm
{
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	vector<string> RollCall() const;

private:
	vector<Critter> m_Critters;
};

Farm::Farm(int spaces)
{
	m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
	m_Critters.push_back(aCritter);
}

vector<string> Farm::RollCall() const
{
	vector <string> names;
	for (vector<Critter>::const_iterator iter = m_Critters.begin();
		iter != m_Critters.end();
		++iter)
	{
		names.push_back(iter->GetName());
	}

	return names;
}

int main()
{
	vector <string> names;
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.GetName() << endl;

	cout << "\nCreating critter farm.\n";
	Farm myFarm(3);

	cout << "\nAdding three critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));

	cout << "\nCalling Roll...\n";
	
	names = myFarm.RollCall();

	
	for (int i = 0; i < 3; i = i + 1) 
	{
		cout << names[i] << endl;
	}
	//cout << names[0] << endl;
	//cout << iter->GetName() << " here.\n";
	

	return 0;
}
*/