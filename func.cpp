#include <string>
#include <iostream>
using namespace std;
class Pc
{
private:
    string model;
    int quantiteRam;
    int taille;
    string processor;
public:
Pc(){
    
}
Pc(string m, int q, int t, string p){
    model = m;
    quantiteRam = q;
    taille = t;
    processor = p;
}
//SETTRE
void setModel(string m){
    model = m;
}
void setQRam(int Q){
    quantiteRam = Q;
}
void settaille(int T){
        taille  = T;
}
void setProcessor(string P){
        processor  = P;
}
//GETTRE
string getModel(){
    return model;
}
int getQRam(){
    return quantiteRam;
}
int gettaille(){
    return taille;
}

string getProcessor(){
    return processor;
}
void afficherSpecs(){
    cout << "Model: "<< model << endl;
    cout <<"Quantite Ram: " << quantiteRam << " GB" << endl;
    cout <<"Taille: " << taille << " Go" << endl;
    cout <<"Processor: " << processor << endl;
}
};
class RepairTicket
{
private:
Pc pc;
string problem ;
string receptionDate ;
public :
RepairTicket(){

}
RepairTicket(Pc p, string prob, string rDate){
    pc = p;
    problem = prob;
    receptionDate = rDate;
}
//settre

void setPc(Pc p){
    pc = p;
}
void setProblem(string prob){
    problem = prob;
}
void setReceptionDate( string rDate){
    receptionDate = rDate ;
}
//Gettre
Pc getPc(){
    return pc;
}
string getProblem(){
    return problem;
} 

string getReceptionDate(){
    return receptionDate;
}
void afficherTicket(){
    cout << "----- Repair Ticket -----" << endl;
    pc.afficherSpecs();
    cout << "Problem: " << problem << endl;
    cout << "Reception Date: " << receptionDate << endl;
}

};

int main()
{
   
    Pc pc1 ;
    pc1.setModel("Dell XPS 13");
    pc1.setQRam(16);
    pc1.settaille(512);
    pc1.setProcessor("Intel i7");
    pc1.afficherSpecs();

    RepairTicket ticket1 ;
    ticket1.setPc(pc1);
    ticket1.setProblem("Screen flickering");
    ticket1.setReceptionDate("2024-06-15");
    ticket1.afficherTicket();


}
