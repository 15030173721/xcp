$(function(){
    //鑾峰彇娴忚鍣ㄧ殑瀹姐€侀珮搴�
    var w_con = $(window).width();
    var h_con = $(window).height();
    $('.slideBox').width(w_con);
    $('.slideBox .bd ul li a').width(w_con);
    $('.slideBox .bd').height(h_con);
    $('.slideBox .bd ul li a').height(h_con);
    //header鐨勯珮搴�
    $(window).resize(function(){
        var w_con = $(window).width();
        var h_con = $(window).height();
        $('.slideBox').width(w_con);
        $('.slideBox .bd ul li a').width(w_con);
        $('.slideBox .bd').height(h_con);
        $('.slideBox .bd ul li a').height(h_con);
    })

    //slide-1
    $('.skin-1').each(function(){
        var num = $(this).find('li').length;
        var oUlw = 33 * num;
        var ml = oUlw/2;
        $(this).css('marginLeft',-ml+'px');
    })

    //mod-02
    $('.mod-02 ul li').hover(function(){
        $(this).addClass('on');
        $(this).find('img:first').hide();
        $(this).find('img:last').show();
    },function(){
        $(this).removeClass('on');
        $(this).find('img:last').hide();
        $(this).find('img:first').show();
    })

    //mod-03
    $('.mod-03 ul li').hover(function(){
        $(this).toggleClass('on');
    })

    $('.list-01').hide();
    $('.tabs').each(function(){
        $(this).find('.tabs-tit').eq(0).addClass('selected');
        $(this).find('.list-01').eq(0).show();
    });
    $('.tabs .tabs-tit').click(function(){
        var _index=$(this).index();
        $(this).addClass('selected').siblings().removeClass('selected');
        $(this).parent().siblings().children('.list-01').eq(_index).show().siblings().hide();
    });
	
	
	$('.mod-12 ul li .img').hover(function(){
        $(this).find('.pf-a').stop().fadeToggle();
    })
})