	void incluiFinal(no *lista, int data){
		
	no p = (no) malloc(sizeof(struct reg));
	p->data = data;
	p->link = NULL;
	
	if(*lista == NULL)
	*lista = p;
	
	else{
		no q = *lista;
		while(q->link)
		q = q->link;
	q->link = p;
	}

	}
