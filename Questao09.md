Q: O que fazem os seguintes programas em C?

```c
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}
```
```c
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
```

R: O primeiro programa printa, atráves de um ponteiro,
os três primeiros elementos do vetor separados por espaços. 
Enquanto o segundo printa os endereços destes elementos.