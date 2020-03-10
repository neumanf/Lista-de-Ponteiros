Q: Suponha que as seguintes declarações tenham sido realizadas:
`float aloha[10], coisas[10][5], *pf, value = 2.2;`
`int i=3;`

Identifique quais dos seguintes comandos é válido ou inválido


R:
`aloha[2] = value;` é válida, pois atribui value ao terceiro
    elemento de aloha
`printf("%f", aloha);` é inválida, pois não imprime cada
    elemento de aloha
`scanf("%f", &aloha);` é válida, adiciona o input ao primeiro valor
    da array
`aloha = "value";` é inválida, pois aloha é do tipo float
`coisas[4][4] = aloha[3];` válida, pois adiciona o elemento aloha[3]
    à posição [4][4] da array coisas
`coisas[5] = aloha;` inválida
`pf = value;` inválida, float não pode ser atribuido a float*
`pf = aloha;` válida, copia aloha pra pf
