#include <iostream>
#include <string>

using namespace std;

// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor
float converteSensor(int medida, int min, int max){
		float subtracao = max - min;
		float medida2 = medida - min;
		float result = medida2 / subtracao;

	return result;
}

int main(){
/*
	cout << "Insira medida";
	cin >> medida;

	cout << "Insira máximo";
	cin >> max;

	cout << "Insira minimo";
	cin >> min;
*/
	cout << converteSensor(250,100,400);
}


// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor

int leituraSensor() {
	int value;
	cin >> value;
	
	return value;
}

// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor

int armazenaVetor(int *values, int size, int ultPos, int value) {
	int posAtual = ultPos++;

	if(posAtual < size) {
		values[posAtual] = value;
	} else {
		throw invalid_argument( "A posição está além do tamanho maximo do vetor." );
	}

	return posAtual;
}
// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.


string direcaoMenorCaminho(int Vetor[]) {
  int direita = Vetor[0];
  int esquerda = Vetor[1];
  int frente = Vetor[2];
  int tras = Vetor[3];

  sort(Vetor, Vetor + 4);
  int maiorNumero = Vetor[3];
  cout << "distância:" << maiorNumero

  if (maior == direita) {
    return "Direita";
  } else if (maior == esquerda) {
    return "Esquerda";
  } else if (maior == frente) {
    return "Frente";
  } else {
    return "Tras";
  }


}




// Descomente a função main abaixo para testar o exercício 3
int main(){
int numeros[4] = {0, 20, 100, 50};

cout << direcaoMenorCaminho(numeros) << endl;
}



// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso

int leComando() {
  int tecla = 0;
  cout << "Insira uma tecla:" << endl;
  cin >> tecla;
  if (tecla == "sim") {
    return 1;
  } else {
    return 0;
  }
}

// Descomente a função main abaixo para testar o exercício 5

int main() {
  int parar = 0;

  while (parar == 0) {
    parar = leComando();
}

  return 1;
}
*/


/*
int converteSensor(float medida,float vi,float vf){
	float valor = 0;
	valor = 100* (medida - vi)/(vf-vi);
	return (int) valor;
}
// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

int leSensor(char *direcao){
	int medida;
	printf("Digite o valor do sensor %s: ",direcao);
	scanf("%i",&medida);
	return medida;	
}
int leComando(){
	char resultado[5];
	printf("Deseja continuar o mapeamento ? (s/n) ");	
	scanf("%s",resultado);
	if(strcmp(resultado,"s")==0){
		return(1);
	}else{
		return(0);
	}
}
int armazenaMedida(int *v,int medida,int posatual,int maxv){
	if(posatual < maxv){
		v[posatual] = medida;
		posatual++;		
		return(posatual);
	}else{
		return(0);
	}
}
// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor

char *direcaoMenorCaminho(int *v,int *maiorCaminho){
	int maiorMedida = -1;
	int maiorIndice = -1;
	for(int i=0; i<4; i++){
		if( v[i] > maiorMedida ){
			maiorMedida = v[i];
			maiorIndice = i;			
		}		
	}	
	(*maiorCaminho)  = maiorMedida;
	switch(maiorIndice){
		case 0: return ("Direita");
		case 1: return ("Esquerda");		
		case 2: return ("Frente");
		case 3: return ("Tras");			
	}
	return("Ficar");	
}
// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor



// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.




// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso

int leComando() {
	//declaro variavel
	int answer;
	//pergunta para o usuario se quer continuar
	cout << "Quer continuar ou mapeamento, coloque 1 se sim e 0 se nao";
	cin >> answer;
	//retorna a resposta do usuario
	return answer;
}


#include <iostream>
using namespace std;
int main() {
int val = 1;
  while (val != 0){
    cout << "Digite 0 ou 1 " <<endl;
    cin >> val;
    while (val != 0) {
      cout << "Acesso negado! Digite um número novamente: " <<endl;
      cin >> val;
      if (val != 1) {
        cout << "Acesso concedido!";
}}}}

// 6 - A função abaixo (que está incompleta) vai "dirigindo" virtualmente um robô 
// e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", 
// "Frente", "Tras"). 
//      A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno 
// para uma movimentação futura. 
//      Ele vai armazenando estas distancias em um vetor fornecido como parâmetro 
// e retorna a ultima posicao preenchida do vetor.
//      Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado 
//
//      Para simular os sensores e os comandos de pare, use as funções já construídas 
// nos ítens anteriores e em um looping contínuo até que um pedido de parada seja 
// enviado pelo usuário. 
//
//      Complete a função com a chamada das funções já criadas
int dirige(int *v,int maxv){
	int maxVetor = maxv;
	int posAtualVetor = 0;
	int *vetorMov = v;
	int posAtualVetor = 0;
	int dirigindo = 1;		
	while(dirigindo){
		int medida = leSensor("direita");
		medida = converteSensor(medida,0,830);
		posAtualVetor = armazenaMedida(vetorMov,medida,posAtualVetor, maxVetor*4);
        /////////////////////////////////////////////
		medida = leSensor("esquerda");
	while(dirigindo){		
		int medida = /// .. Chame a função de de leitura da medida para a "Direita"
		medida = converteSensor(medida,0,830);
		posAtualVetor = armazenaMedida(vetorMov,medida,posAtualVetor, maxVetor*4);
		/////////////////////////////////////////////
		medida = leSensor("frente");
		medida = converteSensor(medida,0,830);
		posAtualVetor = armazenaMedida(vetorMov,medida,posAtualVetor, maxVetor*4);
		/////////////////////////////////////////////
		medida = leSensor("tras");
		medida = converteSensor(medida,0,830);
		posAtualVetor = armazenaMedida(vetorMov,medida,posAtualVetor, maxVetor*4);

		posAtualVetor = // Chame a função para armazenar a medida no vetor
        ///////////////////////////////////////////////////////////////////////////		
		// Repita as chamadas acima para a "Esquerda", "Frente", "Tras"
		// ................
		///////////////////////////////////////////////////////////////////////////
		dirigindo = leComando();		
	}
	return posAtualVetor;
}


// O trecho abaixo irá utilizar as funções acima para ler os sensores e o movimento
// do robô e no final percorrer o vetor e mostrar o movimento a cada direção baseado 
// na maior distância a cada movimento
void percorre(int *v,int tamPercorrido){		
	int *vetorMov = v;
	int maiorDir = 0;
@@ -91,7 +75,6 @@ void percorre(int *v,int tamPercorrido){
	}
}


int main(int argc, char** argv) {
	int maxVetor = 100;
	int vetorMov[maxVetor*4];

	*/