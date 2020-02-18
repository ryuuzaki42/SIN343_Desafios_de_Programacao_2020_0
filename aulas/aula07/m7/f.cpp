#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

void printv(vector<int>& v) {
    cout<<endl;

    for(int i = 0; i < v.size(); i++)
        cout<< v.at(i) << " ";

    cout<<endl;
}

int main() {
    int n,val;
    int ant, prox,i,j;
    bool somou = true;
    vector<int> vet;
    cin>>n;

    for(int i = 0 ; i < n; i++) {
        cin>>val;
        vet.push_back(val);
    }

//    printv(vet);

    while(somou) {
        somou = false;
        i = 0;

        while((i < vet.size()-1) && (! somou)) {
            j = i+1;
            prox = j+1;

            // cout<<" ## inicio : i=" << i << ", j="<< j << ", prox="<< prox<< endl;
            if(vet.at(i) == vet.at(j)) {
                // testar se o terceiro tb é possível somar
                if(prox <= (vet.size()-1)) {
                    if(vet.at(i) == vet.at(prox)) {
                        vet.at(prox) = vet.at(i)*3;
                        vet.at(j) = 0;
                        //cout<< "erase(" << i << ","<< j<<")"<<endl;
                        vet.erase(vet.begin()+i, vet.begin()+j+1);
                    } else {
                        vet.at(j) = vet.at(i)*2;
                        vet.at(i) = 0;
                        // cout<< "erase(" << i <<")"<<endl;
                        vet.erase(vet.begin()+i);
                    }
                } else {
                    vet.at(j) = vet.at(i)*2;
                    vet.at(i) = 0;
                    // cout<< "erase(" << i <<")"<<endl;
                    vet.erase(vet.begin()+i);
                }

                somou = true;
            } else {
                if(prox <= (vet.size()-1)) {
                    if(vet.at(i) == vet.at(prox)) {
                        // somar 3
                        vet.at(prox)+= vet.at(i)+vet.at(j);
                        vet.at(j) = 0;
                        vet.at(i) = 0;
                        // cout<< "erase(" << i << ","<< j<<")"<<endl;
                        vet.erase(vet.begin()+i, vet.begin()+j+1);
                        somou = true;
                    }
                }
            }

            // printv(vet);
            i++;
        }
    }

    int maior = vet.at(0);

    for(int i = 1 ; i < vet.size(); i++) {
        if(vet.at(i) > maior)
            maior = vet.at(i);
    }

    cout<< maior << "\n";
}
