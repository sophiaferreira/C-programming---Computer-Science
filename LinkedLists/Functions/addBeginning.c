void incluiInicio(no *lista, int data) {
    no p = (no)malloc(sizeof(struct reg));
    p->data = data;
    p->link = *lista;
    *lista = p;
}

