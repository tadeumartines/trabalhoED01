/* Estrutura de Armazenamento das Listas, Pilhas e Filas */

/* Renomeado para MainStruct */
/*struct main_structure{
	e_lst *L; // Cria ponteiro para a lista contendo
	// os ponteiros para cada lista criada
	e_pilha *P; // Cria ponteiro para a lista contendo
	// os ponteiros para cada Pilha criada
	e_fila *F; // Cria ponteiro para a lista contendo
	// os ponteiros para cada Fila criada
};*/ /* Será substituido por ponteiros */

/* Renomeado para e_lst */
struct estrutura_listas{
	Lista *p_lst;
	struct estrutura_listas *prox_lst;
};

/* Renomeado para e_pilha */
struct estrutura_pilha{
	Pilha *p_pilha;
	struct estrutura_pilha *prox_pilha;
};

/* Renomeado para e_fila */
struct estrutura_fila{
	Fila *p_fila;
	struct estrutura_fila *prox_fila;
};
