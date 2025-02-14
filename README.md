# Gerador de Senhas Seguras

Bem-vindo ao **Gerador de Senhas Seguras**! Este projeto tem como objetivo gerar senhas robustas e seguras utilizando C++ e técnicas modernas, como a análise de entropia, para auxiliar na criação de senhas com alta resistência a ataques.

## Descrição

O projeto permite a criação de senhas personalizadas com base em parâmetros definidos pelo usuário, incluindo:
- **Comprimento da Senha:** Tamanho total da senha.
- **Conjuntos de Caracteres:** Escolha entre letras maiúsculas, letras minúsculas, dígitos e símbolos.
- **Análise de Entropia:** Cálculo da entropia (em bits) para avaliar a força da senha gerada.

## Funcionalidades

- **Geração Personalizável:** Configure quais tipos de caracteres incluir na senha.
- **Cálculo de Entropia:** Avalie a segurança da senha com base na diversidade do conjunto de caracteres.
- **Interface Simples:** Interação via terminal para fácil uso e entendimento.
- **Tratamento de Erros:** Mensagens claras caso nenhuma opção de conjunto de caracteres seja selecionada.

## Pré-requisitos

- **Compilador C++** compatível com C++11 (por exemplo, g++).
- **Windows:** Se estiver utilizando o Windows 10, recomenda-se instalar o [MinGW-w64](https://mingw-w64.org/doku.php) e configurar a variável de ambiente `PATH` para acesso ao compilador.

## Instalação e Execução

### 1. Clonando o Repositório

Abra o terminal ou o Git Bash e execute:

```bash
git clone https://github.com/seu-usuario/gerador-senhas.git
```

### 2. Navegue até o Diretório do Projeto

No terminal, execute:
```bash
cd gerador-senhas
```

### 3. Compilando o Projeto

Em Linux/macOS:
```bash
g++ main.cpp -o gerador -std=c++11
```

Em Windows (usando MinGW):

1. Abra o Prompt de Comando ou PowerShell.
2. Navegue até a pasta do projeto:
```bash
cd C:\Users\silva\OneDrive\Documentos\GitHub\gerador-senhas
```
3. Compile o código:
```bash
g++ main.cpp -o gerador -std=c++11
```

### 4. Executando o Programa

Em Linux/macOS:
```bash
./gerador
```
Em Windows:
```bash
gerador.exe
```
### Estrutura do Projeto
```bash
gerador-senhas/
├── main.cpp            # Código principal do gerador de senhas
├── README.md           # Documentação do projeto
└── (outros arquivos)   # Possíveis arquivos futuros, como testes e scripts
```

### Roadmap / Ações Futuras
Este projeto possui várias possibilidades de evolução e aprimoramento. Entre as ações futuras planejadas, destacam-se:

- Interface Gráfica: Desenvolvimento de uma interface amigável utilizando bibliotecas como Qt.
- Geração Múltipla: Implementação para gerar várias senhas de uma vez.
- Armazenamento Seguro: Adição de funcionalidade para salvar senhas em arquivos criptografados.
- Parâmetros via Linha de Comando: Suporte a argumentos e opções avançadas (por exemplo, utilizando Boost.Program_options).
- Testes Automatizados: Criação de testes unitários e de integração para garantir a estabilidade e confiabilidade do código.
- Documentação Expandida: Inclusão de exemplos, capturas de tela e vídeos demonstrativos conforme o projeto evoluir.

### Contribuindo
Contribuições são sempre bem-vindas! Se você deseja colaborar com o projeto, siga estes passos:

1. Faça um fork deste repositório.

2. Crie uma branch para a sua feature ou correção:
```bash
git checkout -b minha-feature
```
3. Realize os commits das suas alterações:
```bash
git commit -am 'Adiciona nova funcionalidade'
```
4. Envie a sua branch para o repositório remoto:
```bash
git push origin minha-feature
```
5. Abra um Pull Request explicando as mudanças realizadas.

### Licença

Este projeto está licenciado sob a MIT License.

### Contato

Caso tenha dúvidas, sugestões ou queira reportar algum problema, sinta-se à vontade para abrir uma issue no repositório.

### Aproveite e mantenha suas senhas seguras! 


