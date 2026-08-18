#include<bits/stdc++.h>
using namespace std;

class Patient {
protected:
    string patientName, patientID;
public:
    Patient(string patientName, string patientID) {
        this->patientName = patientName;
        this->patientID = patientID;
    }
    void show() {
        cout << "Patient Name: " << this->patientName << endl;
        cout << "Patient ID: " << this->patientID << endl;
    }
};
class Treatment : public Patient {
protected:
    string treatmentName, doctorName;
public:
    Treatment(string patientName, string patientID, string treatmentName, string doctorName):
    Patient(patientName, patientID) {
        this->treatmentName = treatmentName;
        this->doctorName = doctorName;
    }
    void show() {
        Patient :: show();
        cout << "Treatment Name: " << this->treatmentName << endl;
        cout << "Doctor Name: " << this->doctorName << endl;
    }
};
class Bill : public Treatment {
private:
    double basicCost;
public:
    Bill(string patientName, string patientID, string treatmentName, string doctorName, double basicCost):
    Treatment(patientName, patientID, treatmentName, doctorName) {
        this->basicCost = basicCost;
    }
    double Emergency() {
        return this->basicCost + (this->basicCost * 0.1);
    }
    void show() {
        Treatment::show();
        cout << "Basic Cost: " << this->basicCost << endl;
    }
};
int main() {
    Bill patient1("Gemini", "001", "Open Heart Surgery", "ChatGPT", 150000);
    patient1.show();
    cout << "Emergency Cost: " << patient1.Emergency() << endl;
    return 0;
}