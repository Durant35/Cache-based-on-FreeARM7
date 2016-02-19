int __gccmain(){
   int ranNum[8096];
   int seed = 103;
   int a = 29, b = 37;
   int i, k, j, tmp;
   // Initialize the random number.
   for(i = 0; i < 8096; ++i){
     ranNum[i] = i;
   }
   // Get the random number in [0, 1023]
   ranNum[0] = seed;
   for(i = 1; i < 8096; ++i){
     ranNum[i] = (a*ranNum[i-1] + b) % 1024;
   }
   // Sort the random number in nondecreasing order.
   for(i = 0; i < 8095; i++){
	k = i;
	for(j = i+1; j < 8096; j++){
	   if(ranNum[k] > ranNum[j]){
             k = j;
	    }
	}
	if(k != i){
	  tmp = ranNum[k];
	  ranNum[k] = ranNum[i];
	  ranNum[i] = tmp;
	}
   }
   
   return 0;
}
