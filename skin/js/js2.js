function setTab(name,cursel,n){for(i=1;i<=n;i++){var menu=document.getElementById(name+i);var con=document.getElementById("con_"+name+"_"+i); menu.className=i==cursel?"t_2":"t_1";con.style.display=i==cursel?"block":"none";
}}

$(document).ready(function(){


//right_fixed
	$(".right_fixed ul li").mouseenter(function(){
		 $(this).stop().animate({
			marginLeft: "-13px",
			width: "90px",
		  }, 600);
	});
	$(".right_fixed ul li.icon_tel").mouseenter(function(){
		 $(this).stop().animate({
			marginLeft: "-135px",
			width: "232px"
		  }, 600)
	});
	$(".right_fixed ul li").mouseleave(function(){
		 $(this).stop().animate({
			marginLeft: "0px",
			width: "77px"
		  }, 600)
	});
	
	
	$(".right_fixed ul li.icon_wx").mouseenter(function(){
		 $(".wx",$(this)).stop().slideDown();
	});
	$(".right_fixed ul li.icon_wx").mouseleave(function(){
		 $(".wx",$(this)).stop().slideUp();
	});

	$(".form_page .close").click(function(){
		 $(".form_page").hide();
	});
});
