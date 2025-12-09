#include <iostream>
#include <string>

using namespace std;

int main(){
    //cria a string
    string txt("o homi dos mil corres");
    //inteira o txt(a variavel da string) no it
    string:: iterator it;
    cout<<txt<<endl;
    //faz o it receber a primeira letra de txt(a variavel da string)
    it = txt.begin();  
    //printa a primeira letra de txt(a variavel da string)
    cout<<*it<<endl;
    // faz o it receber a ultima letra de txt(a variavel da string)
    it = txt.end()-1;
    //printa a ultima letra de txt(a variavel da string)
    cout<<*it<<endl;

    //printa o tamanho de txt(a variavel da string)
    cout<<txt.size()<<endl;
    //outra forma de printar o tamanho de txt(a variavel da string)
    cout<<txt.length()<<endl;

    //redefine o tamanho do txt(a variavel da string)
    txt.resize(6);
    //printa o novo tamanho do txt(a variavel da string)
    cout<<txt.size()<<endl;
    //mostra o que foi digitado ate o novo tamanho do txt(a variavel da string)
    cout<<txt<<endl;

    //mostra a capacidade inicial que foi dado ao txt(a variavel da string)
    cout<<txt.capacity()<<endl;

    //esvazia o txt(a variavel da string)
    txt.clear();
    //só pra mostrar que n tem nada no txt(a variavel da string)
    cout<<txt<<endl;
    //mostra se esta vazio, se estiver mostra "esta vazio", senao mostra o valor de txt
    if (txt.empty())
    {
        cout << "esta vazio"<<endl;
    }
    else
    {
        cout<<txt<<endl;
    }

    cout<<endl;

    //declarei outra variavel 
    string txt1("sexo para todos");
    //printei a variavel nova
    cout<<txt1<<endl;
    //medi a capacidade da variavel nova
    cout<<txt1.capacity()<<endl;
    //reduzi o tamanho da variavel nova
    txt1.resize(4);
    cout<<txt1<<endl;

    //criei outra variavel
    string txt2;
    //entrei com o valor da variavel
    cin >>txt2;

    //printei a variavel txt2
    cout<<endl<<endl<<txt2<<endl;

    cout<<txt2.size()<<endl;
    
    string::iterator palavra;

    palavra = txt2.begin();

    cout<<*palavra<<endl;

    palavra = txt2.end()-1;
    cout<<*palavra<<endl;

    int aux; cin >> aux;

    txt2.resize(aux);

    cout<<txt2<<endl;
    return 0;

    string texto;
    cin>>texto;
    cout<<texto<<endl;
    int x; cin>> x;
    texto.resize(x);
    cout<<texto<<endl;

    texto.erase(2, 4);
    cout<<texto<<endl;

}