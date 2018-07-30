<?php
$z[0]=Array("field","",214,233);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",234,260);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",301,330);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",370,428);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2344,2379);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2498,2882);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",2954,3194);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\r\n          <div class=\"art_list not-animated\" data-animate=\"fadeInUp\">\r\n            <div class=\"art_img\"><a href='[field:arcurl/]'><img src='[field:litpic/]' width=\"\" /></a></div>\r\n            <div class=\"art_right\">\r\n                <div class=\"art_title\"><a href='[field:arcurl/]' style=\"color:#000;\" >[field:title/]</a></div>\r\n                <div class=\"art_author\"><span>日期：[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span></div>\r\n                <div class=\"art_des\">[field:description function='cn_substr(@me,250)'/]...</div>\r\n            </div>\r\n          </div>\r\n          ",3306,3941);
$z[7][4]=array();
$z[7][4]['pagesize']="5";
$z[8]=Array("pagelist","",4062,4128);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="3";
$z[9]=Array("include","",4220,4257);
$z[9][4]=array();
$z[9][4]['filename']="footer.htm";

?>