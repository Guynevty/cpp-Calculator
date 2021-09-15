#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

static std::string c(std::string fx,string kl){
    string rtu = "not found.";
    if(fx.find(kl) != std::string::npos) {
        rtu = "found";
    }
    return rtu;
}
int main(){
    string h;
    std::cout<< "Enter your calculation.. ";
    getline(cin,h);
    string t;
    string p;
    string ifk;
    for(int i = 0; i < h.size();i++){
        char par = h[i];
        string y = c(h,"+");
        if(y == "found"){
            if(par == '+'){
                vector<int> meh;
                meh.push_back(h.find(par));

                t = h.substr(0,meh[0]);
                p = h.substr(meh[0]+1,h.size());
                ifk = "+";
            //ging = g.substr(meh[i--],meh[i]);
            }
        }
        y = c(h,"-");
        if(y == "found"){
            if(par == '-'){
                vector<int> meh;
                meh.push_back(h.find(par));

                t = h.substr(0,meh[0]);
                p = h.substr(meh[0]+1,h.size());
            //ging = g.substr(meh[i--],meh[i]);
                ifk = "-";
            }
        }
        y = c(h,"*");
        if(y == "found"){
            if(par == '*'){
                vector<int> meh;
                meh.push_back(h.find(par));

                t = h.substr(0,meh[0]);
                p = h.substr(meh[0]+1,h.size());
            //ging = g.substr(meh[i--],meh[i]);
                ifk = "*";
            }
        }
        y = c(h,"/");
        if(y == "found"){
            if(par == '/'){
                vector<int> meh;
                meh.push_back(h.find(par));

                t = h.substr(0,meh[0]);
                p = h.substr(meh[0]+1,h.size());
            //ging = g.substr(meh[i--],meh[i]);
                ifk = "/";
            }
        }
        
    }
    string l = t;
    string f = p;
    int j;
    int kl;
    double call;
    double anytime;
    if(ifk != "/"){
         j = stoi(l);
         kl = stoi(f);
    }else{
        call = atof(l.c_str());
        anytime = atof(f.c_str());
    }
    if(ifk == "+"){
      std::cout << j+kl;
    }
    if(ifk == "-"){
        std::cout << j-kl;
    }
    if(ifk == "*"){
        std::cout << j*kl;
    }
    if(ifk == "/"){
        std::cout << call/anytime;
    }
    
}