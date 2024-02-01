bool has_cycle(SinglyLinkedListNode* x) {
    // inicializa dois ponteiros, 'A' e 'B' ambos apontando para o inicio da lista
    struct SinglyLinkedListNode* A = x, * B = x;

    // enquanto 'A', 'B' e o poximo no de 'B' nao forem nulos
    while ((A != NULL) && (B != NULL) && (B->next != NULL)) {
        // move 'A' uma posicao a frente
        A = A->next;

        // move 'B' duas posicoes a frente
        B = B->next->next;

        // se 'A' alcancar 'B' isso indica a presenca de um ciclo
        if (A == B)
            return true; // retorna verdadeiro indicando a presenca de um ciclo
    }

    // se o loop terminar quer dizer que nao ha ciclo na lista
    return false; // retorna falso indicando a ausencia do ciclo
}