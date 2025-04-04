# LISTA DENTRO DE LISTA
```java
import java.util.ArrayList;

public class ListaLista {

    public static void main(String[] args) {
        ArrayList<Integer> lista1 = new ArrayList<>();
        ArrayList<Integer> lista2 = new ArrayList<>();
        ArrayList<Integer> lista3 = new ArrayList<>();
        ArrayList<ArrayList> listaPrincipal = new ArrayList<>();

        lista1.add(126);
        lista1.add(14);
        lista1.add(895);
        lista1.add(644);
        listaPrincipal.add(lista1);

        lista2.add(26);
        lista2.add(14);
        lista2.add(39);
        listaPrincipal.add(lista2);

        lista3.add(89);
        lista3.add(170);
        listaPrincipal.add(lista3);

        System.out.println("Exibindo as listas");
        for (ArrayList lista : listaPrincipal) {
            System.out.println(lista);
        }

        // EXIBINDO A LISTA INTEIRA DA PRIMEIRA POSIÇÃO
        System.out.println("\nEXIBINDO A LISTA INTEIRA NA PRIMERIA POSIÇÃO:");
        System.out.println(listaPrincipal.get(0));

        // EXIBINDO ITEM A ITEM DA LISTA PRINCIPAL NA PRIMEIRA POSIÇÃO
        System.out.println("\n EXIBINDO ITEM A ITEM DA LSITA PRINCIPAL NA PRIMEIRA POSIÇÃO");
        for (Object i : listaPrincipal.get(0)) {
            System.out.println(i);
        }

        // EXIBINDO OS PARES DA LISTA PRINCIPAL, ANALISANDO ITEM A ITEM DAS LISTAS
        // INTERNAS
        System.out.println("EXIBINDO OS PARES DA LISTA PRINCIPAL, ANALISANDO ITEM A ITEM DAS LISTAS INTERNAS");
        for (ArrayList lista : listaPrincipal) {
            for (Object i : lista) {

                System.out.println(lista);
            }
        }

    }
}
```

# DICIONÁRIO
```java
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class ExemploDicionarioEmLista {
    public static void main(String[] args) {
        // Criando a lista que vai armazenar os mapas
        List<Map<String, String>> listaDeDicionarios = new ArrayList<>();

        // Criando o primeiro dicionário (mapa)
        Map<String, String> dicionario1 = new HashMap<>();
        dicionario1.put("nome", "Eric");
        dicionario1.put("idade", "24");

        // Criando o segundo dicionário (mapa)
        Map<String, String> dicionario2 = new HashMap<>();
        dicionario2.put("nome", "Anna");
        dicionario2.put("idade", "23");

        // Adicionando os mapas na lista
        listaDeDicionarios.add(dicionario1);
        listaDeDicionarios.add(dicionario2);

        // Imprimindo os dados
        for (Map<String, String> dicionario : listaDeDicionarios) {
            System.out.println("Nome: " + dicionario.get("nome"));
            System.out.println("Idade: " + dicionario.get("idade"));
            System.out.println("-----------------------");
        }

    }
}
```

# LISTA CURSO
```java
import java.util.ArrayList;
import java.util.List;

public class ListaCurso {
    public static void main(String[] args) {
        ArrayList<String> estruturaDeDados = new ArrayList<String>();
        estruturaDeDados.add("Ceretta");
        estruturaDeDados.add("Cleber");
        estruturaDeDados.add("Andrisa");
        estruturaDeDados.add("Luiza");
        estruturaDeDados.sort(null);

        ArrayList<String> bancoDeDados = new ArrayList<String>();
        bancoDeDados.add("Ceretta");
        bancoDeDados.add("Andrisa");
        bancoDeDados.add("Luiza");
        bancoDeDados.sort(null);
        
        ArrayList<String> inteligenciaArtifical = new ArrayList<String>();
        inteligenciaArtifical.add("Ceretta");
        inteligenciaArtifical.add("Miguel");
        inteligenciaArtifical.sort(null);

        ArrayList<ArrayList> cienciaComputacao = new ArrayList<ArrayList>();
        cienciaComputacao.add(estruturaDeDados);
        cienciaComputacao.add(bancoDeDados);
        cienciaComputacao.add(inteligenciaArtifical);

        for (Object disciplina : cienciaComputacao){
            System.out.println(disciplina);
        }

        System.out.println("\nExibindo alunos das disciplinas...");
        ArrayList<String> nomesAvalaliados = new ArrayList<>();
        String nomeTmp;
        int contador;

        for (ArrayList disciplina : cienciaComputacao){
            for (Object aluno : disciplina){
                nomeTmp = aluno.toString();
                if (!nomesAvalaliados.contains(nomeTmp)){
                    nomesAvalaliados.add(nomeTmp);
                    contador = 0;
                    for (ArrayList d : cienciaComputacao){
                        for (Object a : d){
                            if (nomeTmp.equals(a.toString())){
                                contador++;
                            }
                        }
                    }
                    System.out.println(nomeTmp + " aparece em " + contador + " disciplinas");
                }
            }
        }
    }
}
```

# LISTA CURSO SEM NOME DO CURSO
``` java
import java.util.ArrayList;

public class ListaCursoSemNome {
    public static void main(String[] args) {
        ArrayList<ArrayList<String>> cienciaComputacao = new ArrayList<>();
        // 0 - Estrutura de dados
        cienciaComputacao.add(new ArrayList<String>()); // Lista que dentro da lista cria uma lista vazia
        // 1 - Banco de dados
        cienciaComputacao.add(new ArrayList<String>()); // Lista que dentro da lista cria uma lista vazia
        // 2 - Inteligencia Artificial
        cienciaComputacao.add(new ArrayList<String>()); // Lista que dentro da lista cria uma lista vazia

        // 0 - Estrutura de dados
        cienciaComputacao.get(0).add("Luiza");
        cienciaComputacao.get(0).add("Andrisa");
        cienciaComputacao.get(0).add("Cereta");
        cienciaComputacao.get(0).sort(null);

        // 1 - Banco de dados
        cienciaComputacao.get(1).add("Andrisa");
        cienciaComputacao.get(1).add("Cereta");
        cienciaComputacao.get(1).sort(null);

        // 2 - Inteligencia Artificial
        cienciaComputacao.get(2).add("Miguel");
        cienciaComputacao.get(2).add("Ceretta");
        cienciaComputacao.get(2).add("Cereta");
        cienciaComputacao.get(2).sort(null);

        for (Object disciplina : cienciaComputacao) {
            System.out.println(disciplina);
        }

        System.out.println("\nExibindo alunos das disciplinas...");
        ArrayList<String> nomesAvalaliados = new ArrayList<>();
        String nomeTmp;
        int contador;

        for (ArrayList<String> disciplina : cienciaComputacao) {
            for (Object aluno : disciplina) {
                nomeTmp = aluno.toString();
                if (!nomesAvalaliados.contains(nomeTmp)) {
                    nomesAvalaliados.add(nomeTmp);
                    contador = 0;
                    for (ArrayList<String> d : cienciaComputacao) {
                        for (Object a : d) {
                            if (nomeTmp.equals(a.toString())) {
                                contador++;
                            }
                        }
                    }
                    System.out.println(nomeTmp + " aparece em " + contador + " disciplinas");
                }
            }
        }
    }
}
```
