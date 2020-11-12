void * allocation_mem(size_t nobjets,size_t taille) {
    void * pt;
    pt = malloc (nobjets * taille); //allocation
    /*on vérifie si l'allocation a marché*/

    if (pt==NULL)
        mon_erreur("Impossible d'allouer la mémoire %d %d\n",nobjets,taille);
    return(pt);
}

void * allocation_mem_init0(size_t nobjets, size_t taille) {
    void * pt;
    pt = calloc (nobjets,taille); //allocation avec calloc
    /*on vérifie si l'allocation a marche*/
    if (pt==NULL)
        mon_erreur("Impossible d'allouer la memoire %d * %d\n",nobjets,taille);
    return(pt);
}

void * reallocation_mem(void **pt, size_t nobjets, size_t taille) {
    void *pt_realloc = realloc(*pt, nobjets*taille);
    if (pt_realloc != NULL)
        *pt = pt_realloc;
    else
        mon_erreur("Impossible de reallouer la mémoire %d * %d a l'adresse %p\n",nobjets,taille,*pt);
    return pt_realloc;
}