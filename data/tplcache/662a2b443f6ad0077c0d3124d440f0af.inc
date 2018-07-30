<div class="product">
    <div class="hd">
      <div class="tit">{dede:field name='typename'/}</div>
      <a href="list.php?tid={dede:field name='id'/}" class="more">MORE</a> </div>
    <div class="bd">
      <ul class="list-01 clearfix">
      {dede:arclist titlelen=80 orderby ='pubdate' row='3'}    
       <!--  <li>
          <div class="pic"><a href="view.php?aid=[field:id/]"><img src="[field:picname/]"></a></div>
          <div class="title"><a href="view.php?aid=[field:id/]">[field:title/]</a></div>
        </li> -->
         <li>
          <div class="pic"><a href="view.php?aid=[field:id/]"><img src="/skin/images/yewu1.jpg"></a></div>
          <div class="title"><a href="view.php?aid=[field:id/]">宣传片制作</a></div>
        </li>
         <li>
          <div class="pic"><a href="view.php?aid=[field:id/]"><img src="/skin/images/yewu2.jpg"></a></div>
          <div class="title"><a href="view.php?aid=[field:id/]">课件制作</a></div>
        </li>
         <li>
          <div class="pic"><a href="view.php?aid=[field:id/]"><img src="/skin/images/yewu3.jpg"></a></div>
          <div class="title"><a href="view.php?aid=[field:id/]">微电影拍摄</a></div>
        </li>
      {/dede:arclist}  
      </ul>
    </div>
  </div>