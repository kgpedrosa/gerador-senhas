#include <iostream>
#include <string>
#include <random>
#include <cmath>
#include <stdexcept>

using namespace std;

// Fun��o para gerar a senha com base nos par�metros escolhidos
string generatePassword(int length, bool includeUpper, bool includeLower, bool includeDigits, bool includeSymbols) {
    string charPool;
    
    if (includeLower) {
        charPool += "abcdefghijklmnopqrstuvwxyz";
    }
    if (includeUpper) {
        charPool += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    if (includeDigits) {
        charPool += "0123456789";
    }
    if (includeSymbols) {
        charPool += "!@#$%^&*()-_=+[]{};:,.<>/?";
    }
    
    if (charPool.empty()) {
        throw runtime_error("Nenhum conjunto de caracteres foi selecionado!");
    }
    
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<> distrib(0, charPool.size() - 1);
    
    string password;
    for (int i = 0; i < length; i++) {
        password.push_back(charPool[distrib(generator)]);
    }
    
    return password;
}

// Fun��o para calcular a entropia da senha
double calculateEntropy(int length, int poolSize) {
    return length * log2(poolSize);
}

int main() {
    int length;
    char includeUpper, includeLower, includeDigits, includeSymbols;
    
    cout << "Digite o tamanho da senha: ";
    cin >> length;
    
    cout << "Incluir letras maiúsculas? (s/n): ";
    cin >> includeUpper;
    
    cout << "Incluir letras minúsculas? (s/n): ";
    cin >> includeLower;
    
    cout << "Incluir dígitos? (s/n): ";
    cin >> includeDigits;
    
    cout << "Incluir símbolos? (s/n): ";
    cin >> includeSymbols;
    
    bool useUpper = (includeUpper == 's' || includeUpper == 'S');
    bool useLower = (includeLower == 's' || includeLower == 'S');
    bool useDigits = (includeDigits == 's' || includeDigits == 'S');
    bool useSymbols = (includeSymbols == 's' || includeSymbols == 'S');
    
    try {
        // Gera a senha
        string password = generatePassword(length, useUpper, useLower, useDigits, useSymbols);
        cout << "\nSenha gerada: " << password << endl;
        
        // Calcula o tamanho do pool de caracteres selecionado
        int poolSize = 0;
        if (useLower) poolSize += 26;
        if (useUpper) poolSize += 26;
        if (useDigits) poolSize += 10;
        if (useSymbols) poolSize += 24; // Quantidade aproximada de s�mbolos usados
        
        // Calcula a entropia da senha
        double entropy = calculateEntropy(length, poolSize);
        cout << "Entropia da senha: " << entropy << " bits" << endl;
        
    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
    }
    
    return 0;
}
