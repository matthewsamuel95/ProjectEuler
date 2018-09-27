// How many Sundays fell on the first of the month during the 
// twentieth century (1 Jan 1901 to 31 Dec 2000)?


import java.util.Calendar;

public class prob19 {
    public static void main(String[] args) {
    	int num_of_sundays = 0;
    	//loop the years 1901 to 2000
    	for(int i = 1901 ; i <= 2000 ; i++){
    		//loop each month in a year 
    		for(int j = 0 ; j <= 11 ; j++){
    			//Calendar is abstract; cannot be instantiated
    			Calendar cal = Calendar.getInstance();
				cal.set(Calendar.YEAR, i);
				cal.set(Calendar.MONTH, j);
				if(cal.get(Calendar.DAY_OF_WEEK) == Calendar.SUNDAY)
					num_of_sundays++;
    		}
    	}
    	System.out.println(num_of_sundays);
    }

}