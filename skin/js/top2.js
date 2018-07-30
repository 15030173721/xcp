/**
 * Created by George on 3/24/2015.
 */




	function b(){
	t = $(document).scrollTop();
	var top1 = $("#bannerWeb").offset().top-95;
	var top2 = $("#service1").offset().top-95;
	//alert(7);
	if(t >= top1 && t < top2){
		$("#service1").addClass("active");
	}else if(t >= top3 && t < top4){
       	
	}else{
        
		
		
	}

}

$(window).scroll(function(e){
	b();		
})