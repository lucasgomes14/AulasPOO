#include "Cliente.cpp"
#include "Endereco.cpp"
#include "Pedidos.cpp"
#include "Produtos.cpp"

#include <iostream>

using namespace std;

int main()
{
    Cliente pessoa = Cliente();
    Endereco endereco = Endereco();
    Pedidos pedido = Pedidos();
    Produtos produto = Produtos();

    string nome, rua, bairro, referencia, telefone, numeroPedido;
    int numero, quantidade;

    cout << "Bom dia!" << endl;

    cout << "Qual seu primeiro nome: ";
    cin >> nome;

    cout << "\nDigite o nome da sua rua: ";
    cin >> rua;

    cout << "\nDigite o numero da sua casa: ";
    cin >> numero;

    cout << "\nDigite o bairro onde voce mora: ";
    cin >> bairro;

    cout << "\nDigite a referencia de onde voce mora: ";
    cin >> referencia;

    cout << "\nQual seu numero de contato: ";
    cin >> telefone;

    cout << "\nTemos:\n1-Coxinha                3,50\n2-Risole                 3,00\n3-Coca-Cola              5,00" << endl;

    cout << "Digite o numero do pedido: ";
    cin >> numeroPedido;

    cout << "\nDigite a quantidade: ";
    cin >> quantidade;

    endereco.setRua(rua);
    endereco.setNumero(numero);
    endereco.setBairro(bairro);
    endereco.setReferencia(referencia);

    produto.setNomeProduto(numeroPedido);
    produto.setQuantidade(quantidade);
    produto.setValorProduto(numeroPedido);

    pedido.setValorPedido(produto.valorTotal());
    pedido.setProdutos(produto);

    pessoa.setNome(nome);
    pessoa.setEndereco(endereco);
    pessoa.setTelefone(telefone);
    pessoa.setPedidos(pedido);

    cout << "\n\n----------Pedido----------" << endl;
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Endereco\nRua: " << endereco.getRua() << endl;
    cout << "Numero: " << endereco.getNumero() << endl;
    cout << "Bairro: " << endereco.getBairro() << endl;
    cout << "Referencia: " << endereco.getReferencia() << endl;
    cout << "Numero de contato: " << pessoa.getTelefone() << endl;
    cout << "Pedidos: " << produto.getNomeProduto() << endl;
    cout << "Quantidade: " << produto.getQuantidade() << " unidades" << endl;
    cout << "Valor unitario: " << produto.getValorProduto() << endl;
    cout << "\n\n----------------------------" << endl;
    cout << "             Valor total = "<< produto.valorTotal() << endl;



    

    return 0;
}