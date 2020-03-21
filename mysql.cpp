#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Gestion de string
#include <unistd.h>//Pour interagir avec le port série
#include <fcntl.h>//Descripteurs de fichiers
#include <termios.h>//Contrôle des ports de communication asynchrone
#include <errno.h>//Gestion des erreurs
#include <mariadb/mysql.h>//Pour utiliser mysql
#include <iostream>//Permet l'utilisation du cout
using namespace std;//Pour ne pas avoir à rajouter des std::
  int main(void)
{
  




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






MYSQL *conn;
  if ((conn = mysql_init(NULL)) == NULL)
{
  fprintf(stderr, "Could not init DB\n");
  return EXIT_FAILURE;
}
  if (mysql_real_connect(conn, "localhost", "bts", "snir", "capteurs", 0, NULL,
  0) == NULL)
{
  fprintf(stderr, "DB Connection Error\n");
  return EXIT_FAILURE;
}

  if (mysql_query(conn, "INSERT INTO mesures (temperature) VALUES ('18')") != 0)
{
  fprintf(stderr, "Query Failure\n");
  return EXIT_FAILURE;
}

  mysql_close(conn);
  return EXIT_SUCCESS;
}
