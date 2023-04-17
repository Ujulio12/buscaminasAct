#include "Juego.h"

int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}

	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}

	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}
	Juego::Juego(Tablero tablero, int cantidadMinas)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente();
	}

	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}

	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}

	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}

	bool Juego::jugadorGana()
	{
	    system("cls");
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Juego::iniciar()
	{
		int fila, columna, i, j;
		while (true)
		{
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
			if (!respuestaAUsuario)
			{   system("cls");
                //muñeco 1
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << "                          ?   " << endl;
                cout << "                        _____"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       /____/"<< endl;
                cout << "                          |     "<< endl;
                cout << "                          |  |   "<< endl;
                cout << "                          | |   "<< endl;
                cout << "                         /||    "<< endl;
                cout << "                        / |     "<< endl;
                cout << "                       /  |     "<< endl;
                cout << "                         / |    "<< endl;
                cout << "                        /   |    "<< endl;
                cout << "                       /     |__!__"<< endl;
                //retardo
                for (i=0;i<=39999;i++)
                {
                    for (j=0;j<=19999;j++)
                    {
                    }
                }
                //muñeco 2
                system("cls");
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << "                          !  "<< endl;
                cout << "                        _____"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       /_____/"<< endl;
                cout << "                          |     "<< endl;
                cout << "                          |  |   "<< endl;
                cout << "                          | |   "<< endl;
                cout << "                         /||     "<< endl;
                cout << "                        / |     "<< endl;
                cout << "                       /  |     "<< endl;
                cout << "                         / |     "<< endl;
                cout << "                        /   |    "<< endl;
                cout << "                       /   __|!__"<< endl;
                //retardo
                for (i=0;i<=39999;i++)
                {
                    for (j=0;j<=19999;j++)
                    {
                    }
                }
                //muñeco 3
                system("cls");
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << "                     MM  M  M              ___"<< endl;
                cout << "                    M  M M  M    MM  M  M  | |"<< endl;
                cout << "                    M  M MMMM   M  M M  M  | | "<< endl;
                cout << "                    M  M M  M   M  M MMMM  | |"<< endl;
                cout << "                     MM  M  M   M  M M  M  | |"<< endl;
                cout << "                                 MM  M  M   M"<< endl;
                cout << "                                           M M" << endl;
                cout << "                                            M "<< endl;
                cout << "                        _____"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       |     |"<< endl;
                cout << "                       /_____/"<< endl;
                cout << "                          |     "<< endl;
                cout << "                       |  |  |   "<< endl;
                cout << "                        | | |   "<< endl;
                cout << "                         |||     "<< endl;
                cout << "                          |     "<< endl;
                cout << "                          |     "<< endl;
                cout << "                         / |     "<< endl;
                cout << "                        /   |    "<< endl;
                cout << "                       /   __|!__"<< endl;
                //retardo
                for (i=0;i<=39999;i++)
                {
                    for (j=0;j<=19999;j++)
                    {
                    }
                }
                //explosión 1
                system("cls");
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << "                     _____________"<< endl;
                cout << "                    ooooooooooooooo"<< endl;
                cout << "                   ooooooooooooooooo "<< endl;
                cout << "                  ppppppppppppppppppp"<< endl;
                cout << "                   @@@@@@@@@@@@@@@@@"<< endl;
                cout << "                    @@@@@@@@@@@@@@@"<< endl;
                cout << "                      99999999999"<< endl;
                cout << "                        99999999"<< endl;
                cout << "                         QQQQQ "<< endl;
                cout << "                          0000   "<< endl;
                cout << "                 Q         **         Q"<< endl;
                cout << "                  Q      *******     Q"<< endl;
                cout << "                   Q   QQQQQQQQQQ  Q"<< endl;
                cout << "                     QQQQQQQQQQQQQQ    "<< endl;
                cout << "                    QQQQQQQQQQQQQQQQ          ";
                //retardo
                for (i=0;i<=19999;i++)
                {
                    for (j=0;j<=19999;j++)
                    {
                    }
                }
                //explosión 2
                system("cls");
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << ""<< endl;
                cout << "                   ___________________"<< endl;
                cout << "                OOOOOOOOOOOOOOOOOOOOOOO"<< endl;
                cout << "               OOOOOOOOOOOOOOOOOOOOOOOOO"<< endl;
                cout << "              OOOOOOOOOOOOOOOOOOOOOOOOOOO"<< endl;
                cout << "            OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                         "<< endl;
                cout << "           PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP        "<< endl;
                cout << "            PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"<< endl;
                cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<< endl;
                cout << "               @@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
                cout << "                   @@@@@@@@@@@@@@@@@@@"<< endl;
                cout << "                     @@@@@@@@@@@@@@@"<< endl;
                cout << "            Q       99999999999999999     Q"<< endl;
                cout << "             Q     9999999999999999999   Q"<< endl;
                cout << "              Q     QQQQQQQQQQQQQQQQQ   Q"<< endl;
                cout << "               Q      0000000000000    Q"<< endl;
                cout << "                 Q      **********    Q"<< endl;
                cout << "                  Q      ********     Q"<< endl;
                cout << "                    Q   QQQQQQQQQQ  Q"<< endl;
                cout << "                      QQQQQQQQQQQQQQ    "<< endl;
                cout << "       ";
                //retardo
                for (i=0;i<=19999;i++)
                {
                    for (j=0;j<=19999;j++)
                    {
                    }
                }
                system("cls");
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;

			}

			if (this->jugadorGana())
			{
			    system("cls");
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;

			}
		}
	}
