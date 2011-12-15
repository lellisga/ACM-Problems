public class P100{
    
    private static int counter(int n){
        int count = 1;
        while(n > 1){
            n = cicle(n);
            count++;
        }
        return count;
    }

    private static int cicle(int n){
        if(n == 1)
            return 1;
        if (n%2 == 0)
            return n/2;
        else
            return 3*n+1;
    }
    
    
    public static void main(String [] args){
        int i = Integer.valueOf(args[0]);
        int j = Integer.valueOf(args[1]);
        int temp,cicle;
        temp = cicle = 0;
        for(; i <= j ; i++){
            cicle = counter(i);
            temp = cicle > temp? cicle : temp;
        }
        System.out.println(args[0] + " " + args[1] + " " + temp);
    }

}
