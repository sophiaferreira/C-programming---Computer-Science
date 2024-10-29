	void contaNos(no lista){
	
	int count = 0;
	
	no p = lista;
	
	if(p == NULL)
	printf("A lista esta vazia!");
	
	while(p != NULL){
		count++;
		p = p->link;
	}
	
	printf("\nQuantidade de nos: %d\n",count);
	
	} 
 
	--------or---------- 

    int contaNos(no lista){
	
    int count = 0;
	
    no p = lista;
	
	if(p == NULL) 
	printf("A lista esta vazia!");
	s
	while(p != NULL){ ou while(p)
		count++;
		p = p->link;
	}
	
	return count;
	
    }
