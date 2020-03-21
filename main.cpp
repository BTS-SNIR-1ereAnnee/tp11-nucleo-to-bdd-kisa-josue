//
//  main.cpp
//  snir1String
//
//  Created by Cécile Tonnerre on 11/03/2020.
//  Copyright © 2020 Cécile Tonnerre. All rights reserved.
//

#include <iostream>
// include pour les objets de type string C++
#include <string>

// include pour utiliser les string comme en C
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h> 
#include <termios.h> 
#include <errno.h>
#include <mariadb/mysql.h>
using namespace std;

#define PORTSERIE "/dev/ttyS2"
#define BAUDRATE 115200

int main(int argc, const char * argv[]) {
    
    /**************************************************************************/
    /* utilisation des chaînes de caractères mode c++ : objet de type string  */
    /**************************************************************************/
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++"  << endl;
    cout << "\tUtilisation en C++ de l'objet de type string " << endl; 
    
    // utilisation pour le TP
    int sfd ;
    string requete("INSERT INTO mesures  (temperature) VALUES ()");
    char buf[255] = "Temp[0]: +19.31 degC";
    string maTemperature ("NULL");
    string buffer(buf);
    string tempOutput;
     char requeteFinale[1024]; //Sera utilisée pour la requete finale
    cout << "ma ligne : " << buffer << endl;
    


   if ( buffer.find("Temp[0]") != string::npos  )
    {
    	cout << "C'est gagné on a la temperature   " << endl ;
    	buffer.replace(0, 9, "");
    	cout << "ma ligne apres replace 1: -" << buffer << "- " << endl;
    	buffer.replace(6, 9, "");
    	cout << "ma ligne apres replace 2: -" << buffer << "- " << endl;

    }
    
    
    //decoupe (tokenzie) avec 
    return 0;



 close(sfd);//Ferme la lecture du port série
}
   

