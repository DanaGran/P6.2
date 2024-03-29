#include <iostream>
#include <algorithm>
#include <string>
#include <vector>



bool isAnagrama( std::string a , std::string b){

    std::sort( a.begin() , a.end() );
    std::sort( b.begin() , b.end() );

    if( a==b )return true;
    else return false;

}

int main(){

    std::vector<std::string>parole;
    std::string m;

    while(std::cin>>m){

        parole.push_back(m);

    }
    for( int i=0 ; i<parole.size() ; i++ ){
        int contor=0;
        for( int j=0 ; j<parole.size() ; j++)
        {

            if( i!=j && isAnagrama( parole[i] , parole[j] ))contor++;


        }

        if( contor==0 )std::cout<<parole[i]<<std::endl;

    }


    return 0;
}