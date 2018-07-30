// <![CDATA[ 
function $(id){return document.getElementById(id);} 
var n=0; 
var Num=$("jfocusnum").getElementsByTagName("li"); 
var imglist=$("jfocuspic").getElementsByTagName("a"); 
function setBg(value){ 
for(var i=0;i<Num.length;i++) Num[i].className=(value==i)?"on":""; 
} 
function plays(value){ 
try 
{ 
with (jfocuspic) 
{ 
filters[0].Apply(); 
for(i=0;i<Num.length;i++)i==value?children[i].style.display="block":children[i].style.display="none"; 
filters[0].play(); 
} 
} 
catch(e) 
{ 
for(i=0;i<Num.length;i++) 
{ 
i==value?imglist[i].style.display="block":imglist[i].style.display="none";//使当前图片显示，隐藏其他图片； 
} 
} 
} 
function mouse(n){ 
for(var i=0;i<Num.length;i++){ 
(function(n){ 
Num[i].onmouseover=imglist[i].onmouseover=function(){clearInterval(autoStart);Mea(n);} 
Num[i].onmouseout=imglist[i].onmouseout=function(){setAuto();} 
})(i); 
} 
} 
function Mea(value){ 
n=value; 
mouse(); 
setBg(value); 
plays(value); 
} 
function auto(){ 
n++; 
if(n>Num.length-1)n=0; 
Mea(n); 
} 
function setAuto(){autoStart=setInterval("auto()",3000)} 
setAuto(); 
// ]]>