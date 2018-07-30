<?php
$z[0]=Array("global","",131,159);
$z[0][4]=array();
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",227,253);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",306,336);
$z[2][4]=array();
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",373,400);
$z[3][4]=array();
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("include","",989,1028);
$z[4][4]=array();
$z[4][4]['filename']="header_m.htm";
$z[5]=Array("channelartlist","\r\n  <div class=\"product\">\r\n    <div class=\"hd\">\r\n      <div class=\"tit\">{dede:field name='typename'/}</div>\r\n      <a href=\"list.php?tid={dede:field name='id'/}\" class=\"more\">MORE</a> </div>\r\n    <div class=\"bd\">\r\n      <ul class=\"list-01 clearfix\">\r\n      {dede:arclist titlelen=80 orderby ='pubdate' row='3'}    \r\n       <!--  <li>\r\n          <div class=\"pic\"><a href=\"view.php?aid=[field:id/]\"><img src=\"[field:picname/]\"></a></div>\r\n          <div class=\"title\"><a href=\"view.php?aid=[field:id/]\">[field:title/]</a></div>\r\n        </li> -->\r\n         <li>\r\n          <div class=\"pic\"><a href=\"view.php?aid=[field:id/]\"><img src=\"/skin/images/yewu1.jpg\"></a></div>\r\n          <div class=\"title\"><a href=\"view.php?aid=[field:id/]\">宣传片制作</a></div>\r\n        </li>\r\n         <li>\r\n          <div class=\"pic\"><a href=\"view.php?aid=[field:id/]\"><img src=\"/skin/images/yewu2.jpg\"></a></div>\r\n          <div class=\"title\"><a href=\"view.php?aid=[field:id/]\">课件制作</a></div>\r\n        </li>\r\n         <li>\r\n          <div class=\"pic\"><a href=\"view.php?aid=[field:id/]\"><img src=\"/skin/images/yewu3.jpg\"></a></div>\r\n          <div class=\"title\"><a href=\"view.php?aid=[field:id/]\">微电影拍摄</a></div>\r\n        </li>\r\n      {/dede:arclist}  \r\n      </ul>\r\n    </div>\r\n  </div>\r\n  ",1032,2380);
$z[5][4]=array();
$z[5][4]['typeid']="5,0";
$z[6]=Array("channelartlist","\r\n  <div class=\"product\">\r\n    <div class=\"hd\">\r\n      <div class=\"tit\">{dede:field name='typename'/}</div>\r\n      <a href=\"list.php?tid={dede:field name='id'/}\" class=\"more\">MORE</a> </div>\r\n    <div class=\"bd\">\r\n      <ul class=\"list-01 clearfix\">\r\n      {dede:arclist titlelen=80 orderby ='pubdate' row='3'}    \r\n        <li>\r\n          <div class=\"pic\"><a href=\"view.php?aid=[field:id/]\"><img src=\"[field:picname/]\"></a></div>\r\n          <div class=\"title\"><a href=\"view.php?aid=[field:id/]\">[field:title/]</a></div>\r\n        </li>\r\n      {/dede:arclist}  \r\n      </ul>\r\n    </div>\r\n  </div>\r\n  ",2385,3040);
$z[6][4]=array();
$z[6][4]['typeid']="4,0";
$z[7]=Array("channelartlist","\r\n    <div class=\"about hTit\">\r\n      <div class=\"hd\">\r\n        <div class=\"tit\">{dede:field name='typename'/} | <a href=\"list.php?tid={dede:field name='id'/}\">MORE</a></div>\r\n      </div>\r\n      <div class=\"bd\"> {dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),200)'/] {/dede:sql} ... <a href=\"list.php?tid={dede:field name='id'/}\">详细阅读>></a> </div>\r\n    </div>\r\n    ",3081,3574);
$z[7][4]=array();
$z[7][4]['typeid']="1,0";
$z[8]=Array("channelartlist","\r\n    <div class=\"news hTit\">\r\n      <div class=\"hd\">\r\n        <div class=\"tit\">{dede:field name='typename'/} | <a href=\"list.php?tid={dede:field name='id'/}\">MORE</a></div>\r\n      </div>\r\n      <div class=\"bd\">\r\n        <ul>\r\n        {dede:arclist titlelen=80 orderby ='pubdate' row='6'}    \r\n          <li><a href=\"view.php?aid=[field:id/]\">[field:title/]</a></li>\r\n        {/dede:arclist}     \r\n        </ul>\r\n      </div>\r\n    </div>\r\n    ",3581,4081);
$z[8][4]=array();
$z[8][4]['typeid']="13,0";
$z[9]=Array("include","",4096,4135);
$z[9][4]=array();
$z[9][4]['filename']="footer_m.htm";

?>