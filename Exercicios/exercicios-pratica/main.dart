import 'dart:io'; // Para entrada/saída

// Classe principal - você já sabe o que é!
class AppCadastro {
  // Lista de usuários - isso é um ARRAY de objetos
  List<Map<String, String>> usuarios = [];

  // Método principal - ponto de entrada
  void executar() {
    print('=== MEU PRIMEIRO APP REAL ===');
    
    // LOOP INFINITO - mantém o app rodando
    while (true) {
      _mostrarMenu();
      var opcao = stdin.readLineSync();
      
      // CONDICIONAL - você conhece bem isso!
      switch (opcao) {
        case '1':
          _cadastrarUsuario();
          break;
        case '2':
          _listarUsuarios();
          break;
        case '3':
          print('Saindo... Até logo!');
          exit(0);
        default:
          print('Opção inválida!');
      }
    }
  }

  // MÉTODO privado (underline) - mostra menu
  void _mostrarMenu() {
    print('\n' + '='*30);
    print('1. Cadastrar usuário');
    print('2. Listar usuários');
    print('3. Sair');
    print('Escolha: ');
  }

  // MÉTODO para cadastrar usuário
  void _cadastrarUsuario() {
    print('\n--- NOVO CADASTRO ---');
    
    print('Nome: ');
    var nome = stdin.readLineSync();
    
    print('Email: ');
    var email = stdin.readLineSync();
    
    // OBJETO - isso você já sabe!
    var usuario = {
      'nome': nome,
      'email': email,
      'data': DateTime.now().toString()
    };
    
    usuarios.add(usuario);
    print('✅ Usuário cadastrado com sucesso!');
  }

  // MÉTODO para listar usuários
  void _listarUsuarios() {
    print('\n--- USUÁRIOS CADASTRADOS ---');
    
    if (usuarios.isEmpty) {
      print('Nenhum usuário cadastrado ainda!');
      return;
    }
    
    // LOOP for - você conhece bem!
    for (var i = 0; i < usuarios.length; i++) {
      var user = usuarios[i];
      print('${i + 1}. ${user['nome']} - ${user['email']}');
    }
  }
}

// Função main - ponto de entrada do Dart
void main() {
  // INSTÂNCIA da classe - isso você já sabe!
  var app = AppCadastro();
  app.executar(); // Chamando método
}