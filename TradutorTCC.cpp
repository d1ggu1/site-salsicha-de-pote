#include <iostream>
#include <windows.h>
using namespace std;
	
// Nome do termo, 3 pra cada (Um com a primeira letra maiuscula, um todo minusculo e um todo maiusculo)
	string termo[80*3] = {
		
	"Larp", "larp", "LARP", //(0/2))
	"Poser", "poser", "POSER", //(3/5)
	"Crush", "crush", "CRUSH", //(6/8)
	"Shippar", "Shippar", "SHIPPAR",//(9/11)
	"Cringe", "cringe", "CRINGE",//(12/14)
	"Ghosting", "ghosting", "GHOSTING",//(15/17)
	"Red flag", "red flag", "RED FLAG",//(18/20)
	"Mood", "mood", "MOOD", //(21/23)
	"Random", "random", "RANDOM", //(24/26)
	"Gg", "gg", "GG", //(27/29)
	"Boomer", "boomer", "BOOMER", //(30/32)
	"Comeback", "comeback", "COMEBACK", //(33//35)
	"Exposed", "exposed", "EXPOSED", //(36/38)
	"Lol", "lol", "LOL", //(39/41)
	"Based", "based", "BASED", //(42/44)
	"Old", "old", "OLD", //(45/47)
	"Og", "og", "OG", //(48/50)	
	"Ranço", "ranço", "RANÇO", //(51/53)
	"Biscoiteiro", "biscoiteiro", "BISCOITEIRO", //(54/56)
	"10/10", "10 de 10", "dez de dez", //(57/59)
	"Tá na disney", "tá na disney", "TÁ NA DISNEY", //(60/62)
	"Maria Mucilon", "maria mucilon", "MARIA MUCILON", //(63/65)
	"Stalkear", "stalkear", "STALKER", //(66/68)
	"Mds", "mds", "MDS", //(69/71)
	"Auge", "auge", "AUGE", // (72/74)
	"Slc", "slc", "SLC", // (75/77)
	"Dar pt", "dar pt", "DAR PT", // (78/80)
	"Basculho", "basculho", "BASCULHO", // (81/83)
	"Trocar", "trocar", "TROCAR", //(84/86)
	"Meo", "meo", "MEO", //(87/89)
	"Miga", "miga", "MIGA", //(90/92)
	"Flopar", "flop", "FLOPAR", //(93/95)
	"Hype", "hype", "HYPE", //(96/98)
	"Mitar", "mitar", "MITAR", //(99/101)
	"Divar", "divar", "DIVAR", //(102/104)
	"Chavoso", "chavoso", "CHAVOSO", //(105/107)
	"Jantar", "jantar", "JANTAR", //(108/110)
	"Gaitar", "gaitar", "GAITAR", //(111/113)
	"Gatilho", "gatilho", "GATILHO", //(114/116)
	"Cancelar", "cancelar", "CANCELAR", //(117/119)
	"Militar", "militar", "MILITAR", //(120/122)
	"Yag", "yag", "YAG", //(123/125)
	"Hitar", "hitar", "HITAR", //(126/128)
	"Mico", "mico", "MICO", //(129/131)
	"Ícone", "ícone", "ÍCONE", //(132/134)
	"Lacrar", "lacrar", "LACRAR", //(135/137)
	"Tankar", "tankar", "TANKAR", //(138/140)
	"Nerfar", "nerfar", "NERFAR", //(141/143)
	"Farmar", "farmar", "FARMAR", //(144/146)
	"Upar", "upar", "UPAR", //(147/149)
	"Mozão", "mozão", "MOZÃO", //(150/152)
	"Vrau", "vrau", "VRAU", //(153/155)
	"Poc", "poc", "POC", //(156/158)
	"Mó", "mó", "MÓ", //(159/161)
	"Massa", "massa", "MASSA", //(162/164)
	"Chave", "chave", "CHAVE", //(165/167)
	"Pico", "pico", "PICO", //(168/170)
	"Trampo", "trampo", "TRAMPO", //(171/173)
	"Sextou", "sextou", "SEXTOU", //(174/176)
	"Peak", "peak", "PEAK", //(177/179)
	};
	
// Explicacao do termo, 1 pra cada (LEMBRAR DE AUMENTAR CONFORME O TERMO)
	string explicacao[80] = {
		
	/*1*/	"LARP (Ou Live Action Roleplay) é um termo criado em 1960 utilizado para jogos de interpretação que são realizados na vida real, geralmente utilizado por comunidades de Roleplaying Games (RPGs) Medievais. O termo foi generalizado ao redor de 2020 para 'Fingir ser o que não é', tal como fingir conhecer algo. Larp veio para substituir a giria 'Poser' nos tempos atuais.",
	/*2*/	"Poser é uma giria que surgiu mais ou menos em 1970 que descreve alguem que quer fingir conhecer algo ou pertencer a um grupo apenas pra se encaixar ou parecer legal, mesmo sem conhecer sobre o assunto. Ele vem do frances 'Poseur', que significa 'Colocar' ou 'Posicionar'.",
	/*3*/	"Crush é uma expressão em inglês utilizada para se referir a alguém por quem uma pessoa sente atração ou interesse romântico.",
	/*4*/	"Shippar é uma gíria derivada do inglês 'relationship' (relacionamento), utilizada quando alguém torce para que duas pessoas formem um casal.",
	/*5*/	"Cringe é uma expressão em inglês utilizada para descrever algo constrangedor, vergonhoso ou que provoca vergonha alheia.",
	/*6*/	"Ghosting é um termo em inglês utilizado quando alguém interrompe repentinamente todo contato com outra pessoa, sem dar explicações.",
	/*7*/	"Red flag significa literalmente 'bandeira vermelha' e é utilizado para identificar comportamentos ou características que podem indicar problemas ou sinais de alerta em alguém.",
	/*8*/	"Mood é uma palavra em inglês que significa 'humor' ou 'estado de espírito'. Na internet, é utilizada para demonstrar identificação com uma situação.",
	/*9*/	"Random significa 'aleatório' em inglês. Na internet, é utilizado para descrever algo inesperado, sem contexto ou aparentemente sem relação com o assunto.",
	/*10*/	"GG é uma abreviação de 'Good Game', que significa 'bom jogo'. É utilizada principalmente em jogos online para demonstrar respeito ou reconhecer uma partida.",
	/*11*/	"Boomer é uma abreviação de 'Baby Boomer', originalmente utilizada para se referir a pessoas nascidas entre 1946 e 1964. Na internet, também é usada para brincar com pessoas que possuem ideias ou comportamentos considerados ultrapassados.",
	/*12*/	"Comeback significa 'retorno' em inglês. Na internet, pode representar a volta de alguém após um período afastado ou uma resposta rápida e marcante durante uma discussão.",
	/*13*/	"Exposed vem do inglês 'expor' e é utilizado quando alguém tem informações, atitudes ou comportamentos revelados publicamente, geralmente envolvendo alguma polêmica.",
	/*14*/	"LOL é uma abreviação de 'Laughing Out Loud', que significa 'rindo muito alto'. É utilizada na internet para demonstrar que algo é engraçado.",
	/*15*/	"Based é uma gíria utilizada principalmente na internet para demonstrar aprovação ou admiração por uma opinião ou atitude considerada autêntica, independente ou corajosa.",
	/*16*/	"Old significa 'velho' ou 'antigo' em inglês. Na internet, pode ser utilizado para indicar que algo está ultrapassado ou já não é novidade.",
	/*17*/	"OG é uma abreviação de 'Original Gangster'. Na internet, é utilizada para se referir a alguém ou algo original, veterano ou que possui reconhecimento por estar presente desde o início.",
	/*18*/ "Ranço é uma gíria utilizada para demonstrar aversão, antipatia ou irritação por alguém ou alguma coisa.",
	/*19*/ "Biscoiteiro é uma expressão utilizada para descrever alguém que busca chamar atenção ou receber elogios e aprovação, principalmente nas redes sociais.",
	/*20*/ "10/10 é uma expressão utilizada para dar uma nota máxima a algo ou alguém, indicando que é excelente ou perfeito.",
	/*21*/ "Tá na Disney é uma expressão utilizada para dizer que alguém está fora da realidade, sendo ingênuo ou criando expectativas muito distantes da situação real.",
	/*22*/ "Maria Mucilon é uma gíria brasileira utilizada para se referir, geralmente de forma pejorativa, a alguém considerado infantil, imaturo ou muito jovem.",
	/*23*/ "Stalkear vem do inglês 'stalk' e significa investigar ou acompanhar excessivamente a vida de alguém, principalmente pelas redes sociais.",
	/*24*/ "MDS é uma abreviação de 'Meu Deus', utilizada na internet para expressar surpresa, espanto ou indignação.",
	/*25*/ "Auge é uma expressão utilizada para destacar uma situação extremamente engraçada, absurda ou surpreendente.",
	/*26*/ "SLC é uma abreviação de 'Se é louco' ou 'Cê é louco', utilizada para demonstrar surpresa, admiração ou espanto.",
	/*27*/ "Dar PT é uma expressão derivada de 'perda total', utilizada para indicar que alguém ou alguma coisa chegou a uma situação de completo desgaste ou incapacidade. Também é associada a situações de embriaguez excessiva.",
	/*28*/ "Basculho é uma expressão popularizada na internet para se referir a algo ou alguém considerado desprezível ou sem valor, geralmente de maneira ofensiva.",
	/*29*/ "Trocar é uma gíria que pode significar perder o controle, agir de maneira inesperada ou apresentar um comportamento considerado estranho.",
	/*30*/ "Meo é uma variação informal de 'meu', bastante utilizada na fala e na internet como forma de expressão ou para chamar a atenção de alguém.",
	/*31*/ "Miga é uma abreviação informal de 'amiga', utilizada principalmente em conversas descontraídas para se dirigir a uma amiga ou conhecida.",
	/*32*/ "Flopar vem do inglês 'flop' e significa fracassar ou não alcançar o sucesso e a popularidade esperados, principalmente nas redes sociais.",
	/*33*/ "Hype é uma palavra em inglês utilizada para descrever a grande expectativa, empolgação ou popularidade criada em torno de algo.",
	/*34*/ "Mitar é uma gíria utilizada quando alguém realiza algo impressionante, apresenta uma resposta marcante ou se destaca em determinada situação.",
	/*35*/ "Divar é uma gíria utilizada para descrever alguém que se destaca, demonstra confiança ou realiza algo de maneira impressionante.",
	/*36*/ "Chavoso é uma gíria brasileira utilizada para descrever alguém que possui um estilo considerado marcante, estiloso ou associado à cultura das periferias.",
	/*37*/ "Jantar é uma gíria da internet utilizada quando alguém supera outra pessoa de maneira marcante, geralmente com uma resposta ou atitude impressionante.",
	/*38*/ "Gaitar é uma gíria regional que pode significar rir muito ou gargalhar, dependendo da região e do contexto.",
	/*39*/ "Gatilho é uma expressão utilizada para descrever algo que desperta uma reação emocional intensa ou traz à tona lembranças e sentimentos difíceis.",
	/*40*/ "Cancelar é uma expressão utilizada quando alguém passa a receber críticas e rejeição pública por atitudes ou declarações consideradas problemáticas.",
	/*41*/ "Militar é uma gíria utilizada na internet para descrever alguém que defende uma causa ou debate determinado assunto de maneira intensa, especialmente em discussões sociais.",
	/*42*/ "Yag é uma expressão utilizada em determinados espaços da internet como uma forma de gíria ou brincadeira entre comunidades LGBTQIA+. Seu significado depende do contexto.",
	/*43*/ "Hitar vem do inglês 'hit' e significa fazer sucesso, alcançar grande popularidade ou chamar bastante atenção.",
	/*44*/ "Mico é uma gíria utilizada para descrever uma situação constrangedora, vergonhosa ou uma atitude que faz alguém passar vergonha.",
	/*45*/ "Ícone é uma expressão utilizada para elogiar alguém ou algo considerado marcante, admirável ou muito importante em determinado contexto.",
	/*46*/ "Lacrar é uma gíria utilizada quando alguém faz algo impressionante, apresenta uma resposta marcante ou se destaca em uma situação.",
	/*47*/ "Tankar vem do inglês 'tank' e, na internet, significa aguentar, suportar ou resistir a alguma situação, geralmente difícil ou engraçada.",
	/*48*/ "Nerfar vem do inglês 'nerf' e significa enfraquecer algo, principalmente em jogos, reduzindo seus atributos ou habilidades para equilibrar a experiência.",
	/*49*/ "Farmar vem do inglês 'farm' e significa acumular recursos, experiência ou recompensas repetindo determinadas atividades, principalmente em jogos.",
	/*50*/ "Upar vem do inglês 'up' e significa subir de nível, evoluir ou melhorar alguma característica, principalmente em jogos.",
	/*51*/ "Mozão é uma expressão carinhosa utilizada para se referir a uma pessoa amada, geralmente um namorado, namorada ou companheiro.",
	/*52*/ "Vrau é uma expressão informal utilizada para representar impacto, velocidade ou uma ação repentina, podendo também aparecer em brincadeiras e memes.",
	/*53*/ "Poc é uma gíria associada principalmente à cultura LGBTQIA+, especialmente à comunidade gay, utilizada como forma de identificação e expressão cultural.",
	/*54*/ "Mó é uma abreviação informal de 'maior', utilizada para intensificar uma característica ou situação, como em 'mó legal'.",
	/*55*/ "Massa é uma gíria utilizada para descrever algo legal, interessante ou agradável.",
	/*56*/ "Chave é uma gíria brasileira utilizada para descrever algo muito bom, interessante ou estiloso.",
	/*57*/ "Pico significa lugar ou local. Na linguagem informal, é utilizado para se referir a um determinado ambiente ou ponto de encontro.",
	/*58*/ "Trampo é uma gíria utilizada como sinônimo de trabalho, emprego ou atividade profissional.",
	/*59*/ "Sextou é uma expressão popular utilizada para comemorar a chegada da sexta-feira e o início do fim de semana.",
	/*60*/ "Peak é uma palavra em inglês que significa 'auge' ou 'pico'. Na internet, é utilizada para descrever algo que atingiu seu ponto máximo de qualidade ou excelência."
};
	
// Termo que o usuario quer procurar
	string procura;
	
// Confirmacao do termo escolhido pelo usuario
	string confirma;
	
	// Escolha switch do usuario
	int escolha = 0;
	
	//verifica se o codigo ta rodando (while)
	bool rodando = true;

	//iteracao do registrar termo
	int itermo = 6;
	
	// Verifica o termo escolhido pelo usuario e responde com a explicação dele
void verificartermo() {
	
		bool encontrado = false;
			
		for (int i=0; i<241;i++){
			
			
			if (procura==termo[i]){
				
				cout << "Termo identificado!" << endl;
				// A explicacao é dada pelo terço da variavel i, ja que o tamanho do array do termo é 3 vezes maior do que o da explicacao
				cout << explicacao[i/3] << endl;
				// Marca a variavel que faz o programa dizer que não encontrou o termo como verdadeira, justamente pra não dizer que não encontrou.
				encontrado = true;
				// Quebra o for assim que achar a explicacao pra não repetir a procura pra sempre
				break;
				
				}
		}
				// Se o termo procurado pelo usuario nao foi encontrado, avisa isso
				if (encontrado == false){
					
					cout << "Termo não encontrado.";
					
				}
	
	}	
	
	// Registra um termo no array
	void registrartermo() {
		
		// Primeira posição do termo
		
		cout << "Digite o termo: " << endl;
		
		getline(cin >> ws, termo[itermo]);
		
		// aumenta a iteracao do termo em 1
		
		itermo++;
		
		// Segunda posicao do termo
		
		cout << "Digite ele de novo, só que agora em letras minusculas, maiusculas ou com a primeira letra maiuscula" << endl;
		
		getline(cin >> ws, termo[itermo]);
		
		// aumenta a iteracao do termo em 1
		
		itermo++;
		
		// terceira posicao do termo
		cout << "Digite a ultima vez:" << endl;
		
		getline(cin >> ws, termo[itermo]);
		
		// explicacao do termo
		cout << "Agora digite sua explicação uma unica vez: " << endl;
		
		getline(cin >> ws, explicacao[itermo/3]);
		
		itermo++;
		
	}
	// Dá boas vindas pro usuario e pede o que deseja fazer

int main() {
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	cout << "Bem vindo(a)!" << endl;
	
	while (rodando==true) {
	cout << "O que deseja fazer? (Favor digitar o numero da escolha)" << endl << "1- Traduzir um termo" << endl << "2- Registrar um termo" << endl << "3- Terminar" << endl;
		cin >> escolha;
		
		switch(escolha){
			
			case 1:
			
				cout << "Qual termo procura traduzir?" << endl;
	
				getline(cin >> ws, procura);
	
				// Pergunta pro usuario se o termo que ele pediu esta escrito corretamente, se estiver, continua o programa. se nao estiver, da outra escolha pro usuario ate ele decidir que esta certo
	
	cout << endl << "O termo é: " << procura << ", isso está certo?" << endl;
	
	cin >> confirma;
	
	if (confirma=="sim" || confirma=="Sim" || confirma=="s" || confirma== "S" || confirma== "Y" || confirma=="y") {
		
		verificartermo();
		
		} else {
			
			if (confirma=="não" || confirma=="Não" || confirma == "nao" || confirma== "Nao" || confirma == "n" || confirma == "N") {
				
				cout << "Qual termo procura traduzir?" << endl;
				
				cin >> procura;
				verificartermo();
				
			}
		}
	

	
				break;
	
			case 2:
			
			registrartermo();
			break;
			
			case 3:
			cout << "Adeus!";
			rodando = false;
	
		}
	}

	
			return 0;		
}