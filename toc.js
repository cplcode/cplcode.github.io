function toc() {
  var header, tocloc, content;
  header=document.getElementsByTagName("h2");
  content="";
  for(i=0;i<header.length;i++) {
    content+="<a href=#"+header[i].id+">"+header[i].innerHTML+"</a><br>"
  }
  tocloc=document.getElementById("toc");
  tocloc.innerHTML=content;
}
