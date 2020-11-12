// #include <stdio.h>
 
// int main() {
 
//     int startDay, endDay;
//     int sHour, sMin, sSec;
//     int eHour, eMin, eSec;
//     char a[4];
//     int day, hour, min, sec;

//     scanf("%s%d", &a, &startDay);
//     scanf("%d : %d : %d", &sHour, &sMin, &sSec);
 
//     scanf("%s%d", &a, &endDay);
//     scanf("%d : %d : %d", &eHour, &eMin, &eSec);

//     day = endDay - startDay;

//     if (sHour > eHour){
//         eHour += 24;
//         hour = eHour - sHour;
//         day--;
//     }else{
//         hour = eHour - sHour;
//     }
    
//     if (sMin > eMin){
//         eMin += 60;
//         min = eMin - sMin;
//         hour--;
//     }else{
//         min = eMin - sMin;
//     }
    
//     if (sSec > eSec){
//         eSec+= 60;
//         sec = eSec - sSec;
//         sec--;
//     }else{
//         sec = eSec - sSec;
//     }
    


//     printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hour, min, sec);
 
//     return 0;
// }

// [Correct But Showing 5% error]

// OR  --------------------------------------------------------



#include <stdio.h>

int main(){
 int hour, hour2, min, min2, day, day2, sec, sec2;

 scanf("Dia %d",&day);
 scanf("%d : %d : %d\n",&hour, &min ,&sec);
 scanf("Dia %d",&day2);
 scanf("%d : %d : %d",&hour2 ,&min2 ,&sec2);

sec = sec2 - sec;
min = min2 - min;
hour = hour2 - hour;
day = day2 - day;

if(sec < 0){
	sec += 60;
	min--;
}

if(min < 0){
	min += 60;
	hour--;
}

if(hour < 0){
	hour += 24;
	day--;
}

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);


 return 0;
}
