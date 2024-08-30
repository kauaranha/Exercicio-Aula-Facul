#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct Dependentes {
    string Nome;
    string Cpf;
};

struct Funcionario {
    int Matricula;
    string Nome;
    string Cpf;
    Dependentes dependentes[3]; 
    int numero_dependentes;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Funcionario Funcionario_Cadastro[1];

    for (int i = 0; i < 1; ++i) {
        cout << "Digite os dados do funcionario " << endl;

        cout << "Matricula: ";
        cin >> Funcionario_Cadastro[i].Matricula;

        cin.ignore();

        cout << "Nome: ";
        getline(cin, Funcionario_Cadastro[i].Nome);

        cout << "CPF: ";
        getline(cin, Funcionario_Cadastro[i].Cpf);

        cout << "Digite o numero de dependentes para insercao (ate 3): ";
        cin >> Funcionario_Cadastro[i].numero_dependentes;

        cin.ignore();

        for (int j = 0; j < Funcionario_Cadastro[i].numero_dependentes; ++j) {
            cout << "Nome do dependente " << j + 1 << ": ";
            getline(cin, Funcionario_Cadastro[i].dependentes[j].Nome);

            cout << "CPF do dependente " << j + 1 << ": ";
            getline(cin, Funcionario_Cadastro[i].dependentes[j].Cpf);
        }
    }

    cout << "--------------------------------" << endl;

    for (int i = 0; i < 1; ++i) {
        cout << "Informacoes dos Funcionarios cadastrados: " << endl;
        cout << "Matricula: " << Funcionario_Cadastro[i].Matricula << endl;
        cout << "Nome: " << Funcionario_Cadastro[i].Nome << endl;
        cout << "Cpf: " << Funcionario_Cadastro[i].Cpf << endl;

        for (int j = 0; j < Funcionario_Cadastro[i].numero_dependentes; ++j) {
            cout << "--------------------------------" << endl;
            cout << "Informacoes dos Dependentes cadastrados: " << endl;
            cout << "Nome: " << Funcionario_Cadastro[i].dependentes[j].Nome << endl;
            cout << "Cpf: " << Funcionario_Cadastro[i].dependentes[j].Cpf << endl;
        }
        cout << "--------------------------------" << endl;
    }

    system("pause");
    return 0;
}
