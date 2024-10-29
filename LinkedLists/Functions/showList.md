void mostraLista(no lista) {
    no p = lista;
    printf("\nElementos da lista: ");
    while (p) {
        printf("%d -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}
