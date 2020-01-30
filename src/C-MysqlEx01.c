/*
 * TesteMySQL.c
 *
 *  Created on: 04/04/2013
 *      Author: alex
 */

/*
 * TesteMySQL.c
 *
 *  Created on: 04/04/2013
 *      Author: alex
 *
 *      1. Install Mysql Library before to compile
 *      $sudo apt-get install libmysqlclient-dev
 */


#include <stdio.h>
#include <mysql/mysql.h>

int main(int argc, char **argv)
{
      MYSQL conexao;

      mysql_init(&conexao);
      if ( mysql_real_connect(&conexao, "localhost", "root", "triplos", "triplos", 0, NULL, 0) )
      {
            printf("conectado com sucesso!\n");
            mysql_close(&conexao);
       }
       else
       {
            printf("Falha de conexao\n");
            printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
       }

       return 0;
}

