#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
  string nome;
  int idade;
  float nota;
  
};

struct Curso
{
  Aluno estudante;  
};

int main()
{
    Aluno aluno = {"Home Baiano", 18, 7.89}; //1
    Aluno alunos[3] = {"Home1", 1, 2.3, "Home2", 4, 8.7, "Home3", 360291, 4.89}; //2
    Aluno *p = &aluno; //3
    Curso curso; //4
    
    int i;
    
    cout << aluno.nome << endl; //1
    cout << aluno.idade << endl; //1
    cout << aluno.nota << endl << endl; //1
    
        for(i = 0; i < 3; i++) //2
        {
            cout << "Aluno " << i+1 << endl;
            cout << alunos[i].nome << endl;
            cout << alunos[i].idade << endl;
            cout << alunos[i].nota << endl << endl;
        }
        
    cout << endl << "Idade original " << (*p).idade << endl; //3
        (*p).idade = 6786;
    cout << "IDADE ALTERADA " << (*p).idade << endl << endl;
    
    cout << "Preencha os dados do alunin: " << endl << "Nome: "; //4
    getline(cin, curso.estudante.nome);
    cout << "Idade:";
    cin >> curso.estudante.idade;
    cout << "Nota: ";
    cin >> curso.estudante.nota;
    
    cout << endl << "DADOS PREENCHIDOS:" << endl << endl;
    cout << "Nome: " << curso.estudante.nome << endl;
    cout << "Idade: " << curso.estudante.idade << endl;
    cout << "Nota: " << curso.estudante.nota << endl;
    
    return 0;
}
