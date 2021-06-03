typedef struct dicionario Dicionario;

struct entrada {
    char * str;
    int freq;
};

typedef struct entrada Entrada;
void removeDicionario(Dicionario * dic);
Dicionario* criaDicionario();
void adicionarEntrada(Dicionario * dic, char* str);
Entrada ** exportaEntradas(Dicionario * dic);
