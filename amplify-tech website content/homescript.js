  var x=0;                            //0 means closed 1 open
  var w = window.innerWidth;
  var h = window.innerHeight;
  if( w<=500){ x=1;}
  else{}

function openNav() {
    if (x==0) {
      document.getElementById("mySidebar").style.width = "200px";
      document.getElementById("main").style.marginLeft = "200px";
      x=1;
    }
    else{
      document.getElementById("mySidebar").style.width = "0";
      document.getElementById("main").style.marginLeft= "0";
      x=0;
    }
}
function myhide(button) {
  var x = button.parentNode.querySelector("div");
  if (x.style.display === "block") {
    x.style.display = "none";
  } else {
    x.style.display = "block";
  }
}