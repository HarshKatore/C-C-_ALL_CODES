
import java.util.*;

class WeatherReport {
    int dayOfMonth;
    double highTemp;
    double lowTemp;
    double amountRain;
    double amountSnow;

   
    WeatherReport(int day) {
        dayOfMonth = day;
         highTemp = 0.0;
        lowTemp = 0.0;
        amountRain = 0.0;
        amountSnow = 0.0;
    }
   
   
    WeatherReport(int day,double high, double low, double rain, double snow) {
        dayOfMonth = day;
        highTemp = high;
        lowTemp = low;
        amountRain = rain;
        amountSnow = snow;
    }


   
    static void generateMonthlyReport(WeatherReport[] reportArray) {
        double avgHighTemp = 0.0;
        double avgLowTemp = 0.0;
        double avgAmountRain = 0.0;
        double avgAmountSnow = 0.0;

        for (int i = 0; i < reportArray.length; i++) {
            avgHighTemp += reportArray[i].highTemp;
            avgLowTemp += reportArray[i].lowTemp;
            avgAmountRain += reportArray[i].amountRain;
            avgAmountSnow += reportArray[i].amountSnow;
        }

        avgHighTemp /= reportArray.length;
        avgLowTemp /= reportArray.length;
        avgAmountRain /= reportArray.length;
        avgAmountSnow /= reportArray.length;
       
        System.out.println();
        System.out.println("\tAverage High Temperature: " + avgHighTemp);
        System.out.println("\tAverage Low Temperature: " + avgLowTemp);
        System.out.println("\tAverage Amount of Rain: " + avgAmountRain);
        System.out.println("\tAverage Amount of Snow: " + avgAmountSnow);
    }
}

public class Ass2 {
    public static void main(String[] args) {
        System.out.println("\t Welcome To Monthly Report ");
        Scanner sc = new Scanner(System.in);
       
 
        WeatherReport[] monthReport = new WeatherReport[30];
        for (int i = 0; i < 30; i++) {
           
             monthReport[i] = new WeatherReport(i+1);
        }
       
        System.out.println("Enter How Many Days You have Make Report");
        int n = sc.nextInt();

       
        for (int i = 0; i < n; i++) {
            System.out.println("Enter weather report for day " + (i + 1));
            System.out.print("Enter high temperature: ");
            double high = sc.nextDouble();
            System.out.print("Enter low temperature: ");
            double low = sc.nextDouble();
            System.out.print("Enter amount of rain: ");
            double rain = sc.nextDouble();
            System.out.print("Enter amount of snow: ");
            double snow = sc.nextDouble();
            monthReport[i] = new WeatherReport(i+1,high, low, rain, snow);
        }

   
       
        System.out.println();
        System.out.println("\t\t\t Monthly Report");
        System.out.println();
        System.out.println("\t"+"DayOfMonth"+"\t"+"HighTemp"+"\t"+"LowTemp"+"\t\t"+"Rain"+"\t\t"+"Snow");
        for (int i = 0; i <30 ; i++) {
        System.out.print("\t"+monthReport[i].dayOfMonth+"\t\t"+monthReport[i].highTemp+"\t\t"+monthReport[i].lowTemp+"\t\t"+monthReport[i].amountRain+"\t\t"+monthReport[i].amountRain);
        System.out.println();
        }
        WeatherReport.generateMonthlyReport(monthReport);
        sc.close();
    }
}
