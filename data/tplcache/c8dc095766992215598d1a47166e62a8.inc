<div class="product">
    <div class="hd">
      <div class="tit">{dede:field name='typename'/}</div>
      <a href="list.php?tid={dede:field name='id'/}" class="more">MORE</a> </div>
    <div class="bd">
      <ul class="list-01 clearfix">
      {dede:arclist titlelen=80 orderby ='pubdate' row='3'}    
        <li>
          <div class="pic"><a href="view.php?aid=[field:id/]"><img src="[field:picname/]"></a></div>
          <div class="title"><a href="view.php?aid=[field:id/]">[field:title/]</a></div>
        </li>
      {/dede:arclist}  
      </ul>
    </div>
  </div>