import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String time = sc.next();

        String hour = time.substring(0, 2);
        
        if(time.charAt(8) == 'A'){
            if(time.charAt(0) == '1' && time.charAt(1) == '2'){
                System.out.println("00" + time.substring(2, 8));
            }
            else{
                System.out.println(time.substring(0, 8));
            }
        }
        else{
            int hourInt = Integer.parseInt(hour);

            if(hourInt == 12){
                System.out.println(time.substring(0, 8));
            }

            else{hourInt += 12;
            System.out.println(String.valueOf(hourInt) + time.substring(2, 8));
            }
        }

        sc.close();
    }
}