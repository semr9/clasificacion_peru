#include <iostream>
using namespace std;
int  entrada()
{
	int a;
	cin>> a;
	return a;
}
int main()
{
    int lista_max[81];//Se  guarda a cuatos equipos supero peru en cada combinacion
    int maxi_fila;//Para hallar la cantidad de equpos que ganamos en  lista_max[81];
    int maxi_total;//Para hallar el maximo en la lista
    int probable[]={};//Guarda las posiciones de las posibles ultimas combianciones
    //combinaciones=81;
    //El orden es:0_Brasil,1_Colombia,2_Uruguay,3_Chile,4_Argentina,5_Peru,6_Paraguay,7_Ecuador,8_Bolivia,9_Venezuela
    int tabla_posiciones[10]={36,25,24,23,23,21,21,20,10,7};
    int resultado_tabla[81][10];//resultados de todas las combinaciones en tabla
    int resultados_partido[81][4];//resultados de todas las combinaciones de resultados G-E-P
    //Eligimos el resultado de Peru para la amejor posibilidad de acuerdo a lo que queremos
    tabla_posiciones[5]+=3;//Peru gano
    tabla_posiciones[7]+=0;//Ecuador perdio
    //perdio=0,empato=1,gano2
    //BOLIVIA_CHILE
    int par_1=0;
    //ARGENINA_VENEZUELA
    int par_2=0;
    //PARAGUAY_URUGUAY
    int par_3=0;
    //COLOMBIA_BRASIL
    int par_4=0;
    //Se hara las combianciones
    int i=0;
    for (int a=0;a<3;a++ ){
		par_1=a;
		for (int b=0;b<3;b++ ){
			par_2=b;
			for (int c=0;c<3;c++ ){
				par_3=c;
				for (int d=0;d<3;d++ ){
					par_4=d;
					//Parte de guardar en la matriz
					resultado_tabla[i][5]=tabla_posiciones[5];
					resultado_tabla[i][7]=tabla_posiciones[7];
					resultados_partido[i][0]=par_1;
					resultados_partido[i][1]=par_2;
					resultados_partido[i][2]=par_3;
					resultados_partido[i][3]=par_4;
					switch (par_1){
						case 0:
							cout<<"0";
							resultado_tabla[i][8]=tabla_posiciones[8]+3;
							resultado_tabla[i][3]=tabla_posiciones[3]+0;
							break;
						case 1:
							cout<<"1";
							resultado_tabla[i][8]=tabla_posiciones[8]+1;
							resultado_tabla[i][3]=tabla_posiciones[3]+1;
							break;
						case 2:
							cout<<"2";
							resultado_tabla[i][8]=tabla_posiciones[8]+0;
							resultado_tabla[i][3]=tabla_posiciones[3]+3;
							break;
					}
					switch (par_2){
						case 0:
							cout<<"0";
							resultado_tabla[i][4]=tabla_posiciones[4]+3;
							resultado_tabla[i][9]=tabla_posiciones[9]+0;
							break;
						case 1:
							cout<<"1";
							resultado_tabla[i][4]=tabla_posiciones[4]+1;
							resultado_tabla[i][9]=tabla_posiciones[9]+1;
							break;
						case 2:
							cout<<"2";
							resultado_tabla[i][4]=tabla_posiciones[4]+0;
							resultado_tabla[i][9]=tabla_posiciones[9]+3;
							break;
					}
					switch (par_3){
						case 0:
							cout<<"0";
							resultado_tabla[i][6]=tabla_posiciones[6]+3;
							resultado_tabla[i][2]=tabla_posiciones[2]+0;
							break;
						case 1:
							cout<<"1";
							resultado_tabla[i][6]=tabla_posiciones[6]+1;
							resultado_tabla[i][2]=tabla_posiciones[2]+1;
							break;
						case 2:
							cout<<"2";
							resultado_tabla[i][6]=tabla_posiciones[6]+0;
							resultado_tabla[i][2]=tabla_posiciones[2]+3;
							break;
					}
					switch (par_4){
						case 0:
							cout<<"0";
							resultado_tabla[i][1]=tabla_posiciones[1]+3;
							resultado_tabla[i][0]=tabla_posiciones[0]+0;
							break;
						case 1:
							cout<<"1";
							resultado_tabla[i][1]=tabla_posiciones[1]+1;
							resultado_tabla[i][0]=tabla_posiciones[0]+1;
							break;
						case 2:
							cout<<"2";
							resultado_tabla[i][1]=tabla_posiciones[1]+0;
							resultado_tabla[i][0]=tabla_posiciones[0]+3;
							break;
					}
					cout<<"||||||"<<i;
					i++;
					cout<<"\n";
				}
			}
		}
	}			
    for (int i=0;i<81;i++ ){
		maxi_fila=0;
		for (int j=0;j<10;j++ ){
			if (resultado_tabla[i][5]>resultado_tabla[i][j]){
				maxi_fila++;
			}
		}	
		lista_max[i]=maxi_fila;
		cout<<i<<"||"<<lista_max[i];
		cout<<"\n";
    }
    cout<<i<<"\n";
    maxi_total=lista_max[1];
    cout<<"maxi_total"<<maxi_total<<"\n";
    for (int i=0;i<81;i++ ){
		if (lista_max[i]>maxi_total){
				maxi_total=lista_max[i];
		}
	}	
	int cont=0;	
	for (int i=0;i<81;i++ ){
		if (lista_max[i]==maxi_total){
				probable[cont]=i;
				cout<<"<"<<probable[cont];
				cout<<"\n";
				cont++;
		}	
	}
	
	cout<<"|maxi_total|"<<maxi_total;
	cout<<" y el contador "<<cont;
	cout<<"\n";
	//Vemos los partidos y resultados
	int mejor_posicion[cont][10];
	int aux=0;
	for (int i=0;i<cont;i++ ){
		aux=probable[i];
		for (int k=0;k<10;k++ ){
			mejor_posicion[i][k]=resultado_tabla[aux][k];
			cout<<"|||"<<mejor_posicion[i][k];
		}
		cout<<"\n";
	}
    for (int i=0;i<81;i++ ){
		for (int j=0;j<10;j++ ){
			
			cout<<"||"<<resultado_tabla[i][j];
		}
		cout<<"\n";
    }
   /*  para reducir nuestras posibilidades hacemos las suma de los que se encuentran adelante de peru , y hallamos las suma ,
    de estas sumas halamso la menor ,ya que asi sabremos cual es la mejor combnacion para Perú*/
    int suma[cont]={};
    for(int l=0;l<cont;l++){
		for(int j=0;j<10;j++){
			if (mejor_posicion[l][j]>mejor_posicion[l][5] and mejor_posicion[l][j]<39 ){
				suma[l]+=mejor_posicion[l][j];
			}
		}
    }
    int minimo=suma[0];
    int mini=0;
    for(int i=0;i<cont;i+=1){
		if (suma[i]<minimo){
			minimo=suma[i];
			mini=i;
		}
	}	
	//cout<<mini;
	cout<<"\n"<<"EL MEJOR RESULTADO EN TABLA SERIA:"<<"\n";	
	for(int i=0;i<10;i+=1){
		cout<<"||||"<<mejor_posicion[mini][i];
	}
	cout<<"\n";
	//Es la posicion en donde se encuentra el mejor resultado
	int elegido=probable[mini];
	//El orden es:0_Brasil,1_Colombia,2_Uruguay,3_Chile,4_Argentina,5_Peru,6_Paraguay,7_Ecuador,8_Bolivia,9_Venezuela
	char orden1[10]={'B','C','U','C','A','P','P','E','B','V'};
	char orden2[10]={'R','O','R','H','R','E','A','C','O','E'};
	char orden3[10]={'A','L','U','I','G','R','R','U','L','N'};
	int orden_par[8]={8,3,4,9,6,2,1,0};
	int partidos[4]={};
	for(int i=0;i<4;i+=1){
		partidos[i]=resultados_partido[elegido][i];
	}
	for(int i=0;i<4;i++){
		switch (partidos[i]){
			case 0:
				cout<<"EN EL PARTIDO"<<(i+1)<<">>>";
				cout<<orden1[orden_par[i*2]]<<orden2[orden_par[i*2]]<<orden3[orden_par[i*2]]<<"  VS  ";
				cout<<orden1[orden_par[(i*2)+1]]<<orden2[orden_par[(i*2)+1]]<<orden3[orden_par[(i*2)+1]]<<" GANO:: ";
				cout<<orden1[orden_par[i*2]]<<orden2[orden_par[i*2]]<<orden3[orden_par[i*2]];
				cout<<"\n";
				break;
			case 1:
				cout<<"EN EL PARTIDO"<<(i+1)<<">>>";
				cout<<orden1[orden_par[i*2]]<<orden2[orden_par[i*2]]<<orden3[orden_par[i*2]]<<"  VS  ";
				cout<<orden1[orden_par[(i*2)+1]]<<orden2[orden_par[(i*2)+1]]<<orden3[orden_par[(i*2)+1]]<<" TERMINO EN:: ";
				cout<<"EMPATE";
				cout<<"\n";
				break;
			case 2:
				cout<<"EN EL PARTIDO"<<(i+1)<<">>>";
				cout<<orden1[orden_par[i*2]]<<orden2[orden_par[i*2]]<<orden3[orden_par[i*2]]<<"  VS  ";
				cout<<orden1[orden_par[(i*2)+1]]<<orden2[orden_par[(i*2)+1]]<<orden3[orden_par[(i*2)+1]]<<" GANO:: ";
				cout<<orden1[orden_par[(i*2)+1]]<<orden2[orden_par[(i*2)+1]]<<orden3[orden_par[(i*2)+1]];
				cout<<"\n";
				break;
					}
		
	}
}

