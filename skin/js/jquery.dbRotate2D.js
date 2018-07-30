/*********************************************************************************

 Copyright(http://www.kaiwo123.com) 

*********************************************************************************/
$(function(){
	
	 $('#dowebok').fullpage({
        sectionsColor : ['#fff', '#fff', '#fff', '#fff', '#fff', '#fff', '#fff', '#fff', '#fff'],
		anchors: ['1', '2', '3', '4', '5','6','7','8','9'],

		'navigation': true,
		navigationTooltips: ['首页', '', '服务范围', '案例作品','设备展示','新闻中心','服务流程','合作企业','联系我们']
    });

    $(window).resize(function(){
        autoScrolling();
    });

    function autoScrolling(){
        var $ww = $(window).width();
        if($ww < 1024){
            $.fn.fullpage.setAutoScrolling(false);
        } else {
            $.fn.fullpage.setAutoScrolling(true);
        }
    }

    autoScrolling();
	
	
	
	$.fn.dbRotate2D=function(options){
		var opt={
			rotateSpeed:150       //雀傈加档
		}
		$.extend(opt,options);
        
		var myVideo = document.getElementsByTagName('video')[0];

       myVideo.play();
		
		return this.each(function(){
			var $this=$(this);
			var $img=$this.find('img');
			var imgWidth=$img.width();
			var imgHeight=$img.height();
			var mOver=false;
			init();

			function init(){
				setCss();
				setMouseEvent();
				
			}
			
			function setCss(){				
				$this.css({'width':imgWidth,'height':imgHeight});
				$img.data({'out':$img.attr('src'),'over':$img.attr('alt')});
			}
			
			function setMouseEvent(){
				$this.bind('mouseenter',function(){
					mOver=true;
					setAnimation();
					
				}).bind('mouseleave',function(){
					mOver=false;
					setAnimation();
				})
			}
						
			function setAnimation(){
				if(mOver==true){
					$img.stop()
						.animate({'left':imgWidth/2,'width':0},opt.rotateSpeed,function(){
							$(this).attr({'src':$(this).data('over')});
						})
						.animate({'left':0,'width':imgWidth},opt.rotateSpeed)
					
				}else{
					$img.stop()
						.animate({'left':imgWidth/2,'width':0},opt.rotateSpeed,function(){						
							$(this).attr({'src':$(this).data('out')});
						})
						.animate({'left':0,'width':imgWidth},opt.rotateSpeed)
				}
			}	
			
		})	
				
				
	}			
});