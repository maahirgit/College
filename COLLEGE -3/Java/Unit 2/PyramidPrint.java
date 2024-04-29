class PyramidPrint{
    public static void main(String[] args) {
       

        char pyramidChar = args[0].charAt(0);

        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(pyramidChar+" ");
            }
            System.out.println(" ");
            }
    }
}