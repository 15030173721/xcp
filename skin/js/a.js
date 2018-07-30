
$(function(){

    $("#aaa li").click(function() {

        // alert('获取成功');

        $(this).siblings('li').removeClass('cur');  // 删除其他兄弟元素的样式

        $(this).addClass('cur');    // 添加当前元素的样式

           })

    })        
