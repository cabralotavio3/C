    #include <iostream>

     using namespace std;

     void inicializar( char V [3][3]){
     for( int i = 0; i < 3; i ++)
     for( int j = 0; j < 3; j ++)
     V [i ][ j] = NULL ;
     };

     void desenhaMatriz( char V [3][3]){
     system (" clear ") ;
     cout << " ------- ------- -------" << endl ;
     for( int i = 0; i < 3; i ++) {
     for( int j = 0; j < 3; j ++) {
     cout << " | " << V[i ][ j] << " |";
     }
     cout << endl << " ------- ------- -------" << endl ;
     }
     };
     bool verificaVencedor ( char V [3][3] , char jog , int linha , int coluna ) {
     // verificando a linha
     int cont = 0;
     for( int k = 0; k < 3; k ++) {
     if(V[ linha ][ k] == jog) {
     cont ++;
     }
     }
     if( cont == 3) {
     return true ;
     }
     // verificando a coluna
     cont = 0;
     for( int k = 0; k < 3; k ++) {
     if(V[ k ][ coluna ] == jog ){
     cont ++;
     }
     }
     if( cont == 3) {
     return true ;
     }
     // diagonal principal
     cont = 0;
     for( int k = 0; k < 3; k ++) {
     if(V[ k ][ k] == jog) {
     cont ++;
     }
     }
     if( cont == 3) {
     return true ;
     }
     // diagonal secundaria
     cont = 0;
     for( int k = 0; k < 3; k ++) {
     for( int m = 0; m < 3; m ++) {
     if (( k + m == 2) && (V [k ][ m] == jog) ){
     cont ++;
     }}
     }
     if( cont == 3) {
     return true ;
     }

     return false ;
     };

     int main ()
     {
     char V [3][3] , simbJ1 , simbJ2 ;
     string nomeJ1 , nomeJ2 ;
     int i , j , jogadas;
     bool J1 , J2 ;
     char continua;

     do{ system("clear") ;
     cout << " Jogador 1 , digite seu nome : ";
     cin >> nomeJ1 ;
     do{
     cout << " Escolha: X ou O: ";
     cin >> simbJ1 ;}
     while (simbJ1 != 'X' && simbJ1 != 'O');
     cout << " Jogador 2 , digite seu nome : ";
     cin >> nomeJ2 ;
     if( simbJ1 == 'X')
     simbJ2 = 'O';
     else
     simbJ2 = 'X';
     jogadas = 0;
     J1 = false ;
     J2 = false ;
     inicializar( V);
     do{

     desenhaMatriz(V );
      do{
     cout << nomeJ1 << " , faça sua jogada informando linha e coluna : ";
     cin >> i >> j;
     } while (V [i ][ j] != NULL );

     V [i ][ j] = simbJ1 ;

     if( jogadas > 3) {
     J1 = verificaVencedor (V , simbJ1 , i , j) ;
     if( J1 )
    break ; }

     jogadas ++;

     if( jogadas < 9) {

     desenhaMatriz( V);

     do{
     cout << nomeJ2 << " , faça sua jogada informando linh";
     cin >> i >> j;
     } while ( V[i ][ j] != NULL );

     V [i ][ j] = simbJ2 ;

     if( jogadas > 3) {
     J2 = verificaVencedor (V , simbJ2 , i , j) ;
     if( J2 )
     break ;
     }

     jogadas ++;
     }

     } while (( jogadas < 9) && (! J1 ) && (! J2 )) ;

     if( J1 ){
     cout << nomeJ1 << " venceu !!!!! ";
     } else if( J2 ) {
     cout << nomeJ2 << " venceu !!!! ";
     } else{
     cout << " Empatou !!!! ";
     }
     cout << " Vocês desejam jogar novamente: ( s ou n) : ";
     cin >> continua;
     } while( continua == 's' || continua == 'S');

     return 0;}
