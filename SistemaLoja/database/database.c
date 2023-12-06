struct Cliente {
    int CPF;
    char Nome[32];
    float LimiteCredito;
} cliente;
struct Venda {
    int Numero;
    int CPF;
    int CodigoProduto;
    int Quantidade;
    float PrecoVenda;
} venda;
struct Produto {
    int Codigo;
    char Descricao[64];
    float Preco;
} produto;