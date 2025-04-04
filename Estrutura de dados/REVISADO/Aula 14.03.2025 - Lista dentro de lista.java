import java.util.ArrayList;

public class ListaLista {
    public static void main(String[] args) {
        ArrayList<Integer> lista1 = new ArrayList<>();
        ArrayList<Integer> lista2 = new ArrayList<>();
        ArrayList<Integer> lista3 = new ArrayList<>();
        ArrayList<ArrayList> listaPrincipal = new ArrayList<>();
        
        lista1.add(126);
        lista1.add(14);
        lista1.add(567);
        lista1.add(200);
        listaPrincipal.add(lista1);
        
        lista2.add(189);
        lista2.add(29);
        lista2.add(33);
        listaPrincipal.add(lista2);

        lista3.add(89);
        lista3.add(170);
        listaPrincipal.add(lista3);

        System.out.println("Exibindo as listas");
        for (ArrayList lista : listaPrincipal){
            System.out.println(lista);
        }

        //Exibindo a lista inteira da primeira posição
        System.out.println("\nExibindo a lista inteira da primeira posição:");
        System.out.println(listaPrincipal.get(0));

        //Exibindo item a item da listaPrincipal na primeira posição
        System.out.println("\n Exibindo item a item da listaPrincipal na primeira posição");
        for (Object i : listaPrincipal.get(0)){
            System.out.println(i);
        }
    
        //Exibindo os pares da lista principal, analisando item a item das listas internas
        System.out.println("\nExibindo os pares da lista principal");
        for (ArrayList lista : listaPrincipal){
            for (Object i : lista){
                if ((int)i % 2 == 0){
                    System.out.println(i);

                }
            }
        }
    }
}
