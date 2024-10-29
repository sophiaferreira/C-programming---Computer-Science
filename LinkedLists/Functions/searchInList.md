int buscaLista(no lista, int pesquisa){

	no p = lista;
	
	while(p){

		if(p->data == pesquisa)
		return 1;
		p = p->link;
	}
	
	return 0;
	
}