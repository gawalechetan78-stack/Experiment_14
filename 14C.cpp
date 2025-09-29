

#include <iostream>
#include <string>

using namespace std;

class Spacecraft
{
protected:
    string name;
    int fuel;

public:
    Spacecraft(const string &n, int f)
    {
        name = n;
        fuel = f;
    }

    void launch()
    {
        if (fuel > 0)
            cout << name << " launched with " << fuel << "% fuel" << endl;
        else
            cout << name << " cannot launch, no fuel!" << endl;
    }

    void refuel(int amount)
    {
        fuel += amount;
        if (fuel > 100)
            fuel = 100;
        cout << name << " refueled to " << fuel << "%." << endl;
    }
};

class ResearchProbe : public Spacecraft
{
protected:
    string experiment;

public:
    ResearchProbe(const string &n, int f, const string &exp) : Spacecraft(n, f)
    {
        experiment = exp;
    }

    void performExperiment()
    {
        if (fuel >= 10)
        {
            cout << name << " is conducting experiment: " << experiment << endl;
            fuel -= 10;
        }
        else
        {
            cout << name << " has insufficient fuel for experiment" << endl;
        }
    }

    void status()
    {
        cout << "Probe '" << name << "' fuel: " << fuel
             << "% | Experiment: " << experiment << endl;
    }
};

class MarsProbe : public ResearchProbe
{
    string ls;

public:
    MarsProbe(const string &n, int f, const string &exp, const string &a)
        : ResearchProbe(n, f, exp)
    {
        ls = a;
    }

    void land()
    {
        if (fuel >= 20)
        {
            cout << name << " is landing on " << ls << endl;
            fuel -= 20;
        }
        else
        {
            cout << name << " has insufficient fuel to land" << endl;
        }
    }

    void status()
    {
        cout << "Mars Probe '" << name << "' | Fuel: " << fuel
             << "% | Experiment: " << experiment
             << " | Landing Site: " << ls << endl;
    }
};

int main()
{
    MarsProbe marscity("Curiosity", 70, "Analyze Martian Soil", "Crater");

    marscity.launch();
    marscity.performExperiment();
    marscity.land();
    marscity.status();

    marscity.refuel(40);
    marscity.land();
    marscity.status();

    return 0;
}
