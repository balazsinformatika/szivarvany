#include <stdio.h>
#include <iostream>
using namespace std;

class Ember{
    int kor;
    string nev;
    
    public:
    Ember(int _kor, _nev){
        kor= _kor;
        nev= _nev;
    }
    
    int getKor(){
        return kor;
    }
    
    string getNev(){
        return nev;
    }
    
    void setKor(int ujkor){
        kor=ujkor
    }
    
    void setNev(string ujnev){
        nev=ujnev
    }
    
    void toString(){
        
    }
};

class Alkalmazott{
    int fizetes;
    
    public:
    Alkalmazott(int _kor, string _nev, int _fizetes) : Ember( _kor, _nev){
        fizetes=_fizetes;
    }
    
    int getFizetes(){
        return fizetes;
    }
    
    void setFizetes(int ujfizetes){
        fizetes=ujfizetes;
    }
};

class T{
    int fizetes;
    
    public:
    Alkalmazott(int _kor, string _nev, int _fizetes) : Ember( _kor, _nev){
        fizetes=_fizetes;
    }
    
    int getFizetes(){
        return fizetes;
    }
    
    void setFizetes(int ujfizetes){
        fizetes=ujfizetes;
    }
};
int main()
{
    return 0;
}
