
// resourse 1.https://www.w3schools.com/jquery/jquery_intro.asp
//          2.https://developer.mozilla.org/en-US/docs/Glossary/jQuery 

/*jQuery is a JavaScript Library that focuses on simplifying DOM manipulation,
 AJAX calls, and Event handling.{The purpose of jQuery is to make it much easier to use JavaScript on your website.} 
jQuery uses a format, $(selector).action() will call jQuery to select selector element(s),
and assign it to an event API called .action().
jQuery uses CSS syntax to select elements*/

// SUB
// The Document Ready Event
/*$(document).ready(function(){

  // jQuery methods go here...

});*/// This is to prevent any jQuery code from "running before the document is finished loading" (is ready)
// It is good practice to wait for the document to be fully loaded and ready before working with it
$(document).ready(() => {
    //SUB selectors
    //resourse 1.https://www.w3schools.com/jquery/jquery_selectors.asp
    //CODE
    /*$('p').click(()=>{// selecting an elements by tag name
        $('p').hide();
    })*/
    //CODE
    /*$('#p1').click(()=>{ // selecting an element by id 
         $(this).css('color','green');
         console.log(this);//when we use arrow function this(pointer) points parent object
     })*/
    //CODE
    /*$('.para').click(function(){     // selecting an elements by class  
        $(this).css('font-size','2rem');
        console.log(this);//when we use normal function this(pointer) points its object
    })*/
    //SUB events
    // resourse 1.https://www.w3schools.com/jquery/jquery_events.asp
    //CODE 
    /*$('#p1').dblclick(function(){ 
        if(this.style.color!='red'){
            $(this).css('color','red');
        }
        else{
           $(this).css('color','green');
        }
    })*/
    //CODE
    /*$('#p1').mouseenter(function(){ 
        if(this.style.color!='red'){
            $(this).css('color','red');
        }
        else{
           $(this).css('color','green');
        }
    })*/
    //CODE
    /*$('#p1').mouseleave(function(){
        if(this.style.fontWeight!='bold'){
            $(this).css('font-weight','bold');
        }
        else $(this).css('font-weight','normal');
    })*/
    //CODE
    /*$('#p1').hover(function(){
        if(this.style.fontWeight!='bold'){
            $(this).css('font-weight','bold');
        }
        else $(this).css('font-weight','normal');
    })*/
    //CODE
    /*$('input').focus(function(){
        $(this).css("background-color", "lightblue");
    });
    $('input').blur(function(){
        $(this).css("background-color", "lightgreen");
    })*/

    //.-> on() Method /*The on() method attaches one or more event handlers for the selected elements.*/
    //CODE
    /*$('#p1').on({              // in on we should add events like obejcts key-pair value
        click:function(){
           setTimeout(function(){
              $('#p1').css('font-size','2rem');
           },500)
        },
        mouseenter:function(){
            setTimeout(function(){
                $('#p1').css('color','red');
             },500)
        },
        hover:function(){
            setTimeout(function(){
                $('#p1').css('font-weight','bold');
             },500)
        },
        dblclick:function(){
            setTimeout(function(){
               $('#p1').css('font-size','1rem');
            },500)
         },
    })*/

    //SUB jQuery Effects
    // resourse 1.https://www.w3schools.com/jquery/jquery_hide_show.asp
    //          2.https://api.jquery.com/fadein/
    // Hide, Show, Toggle, Slide, Fade, and Animate. 
    // Hide, Show, Toggle
    //CODE
    /*$('#p1').click(function(){
        $(this).hide(6*1000,display(this));
    })
    function display(para){
       console.log(para);
    }*/
    //CODE
    /*$('#btn').click(()=>{
      $('#p1').toggle(2000);
    })*/
    //SUB fade(fadeIn(),fadeOut(),fadeToggle(),fadeTo())
    //these methods animates the opacity of the matched elements.
    //CODE
    /*$('#btn').click(()=>{
       function loop_fun(){
       $('.googleImg').fadeOut(2000,function(){ //fadeOut()[The jQuery fadeOut() method is used to fade out a visible element.] Once the opacity reaches 0, the display style property is set to none, so the element no longer affects the layout of the page. 
           $(this).fadeIn(5000,()=>{// fadeIn() [The jQuery fadeIn() method is used to fade in a hidden element.] method animates the opacity of the matched elements. It is similar to the .fadeTo() method but that method does not unhide the element and can specify the final opacity level.
               loop_fun();
           });
       });
       }
       loop_fun();
    })*/
    //CODE
    /*$('#btn').click(()=>{
        $('.googleImg').fadeToggle(2000);//The jQuery fadeToggle() method toggles between the fadeIn() and fadeOut() methods.
    })*/
    //CODE
    /*$('#btn').click(()=>{
        function loop_fun(){
            $('.googleImg').fadeTo(3000,0.3,function(){//The jQuery fadeTo() method allows fading to a given opacity (value between 0 and 1).
                $(this).fadeTo(5000,1,()=>{
                    loop_fun(); 
                })
            })
        }
        loop_fun();
    })*/

    //SUB Slide methods(slideToggle(),slideUp(),slideDown()) for css styles
    //CODE
    /*$('#btn').click(() => {
        function loop_fun() {
            $('.googleImg').slideUp(5000, function () {//The .slideUp() method animates the height of the matched elements. This causes lower parts of the page to slide up, appearing to conceal the items. Once the height reaches 0 (or, if set, to whatever the CSS min-height property is), the display style property is set to none to ensure that the element no longer affects the layout of the page.
                $(this).slideDown(3000,()=> {//The .slideDown() method animates the height of the matched elements. This causes lower parts of the page to slide down, making way for the revealed items.
                    loop_fun();
                })
            });
        }
        loop_fun();
    })*/
    //CODE
    /*$('#btn').click(() => {
        $('.googleImg').slideToggle(3000);//The jQuery slideToggle() method toggles between the slideDown() and slideUp() methods.
    })*/
    //SUB animate() The jQuery animate() method is used to create custom animations.
    //CODE
    /*$('#btn').click(function(){
        $('.animation').animate({right:'250px'},function(){
            $(this).animate({right:'0px'},function(){
                $(this).animate({right:'250px'},function(){
                    $(this).animate({right:'0px'})
                })
            })
        })
    });*/

    // HEADER  Ajax-JQuery
    //resourse 1.https://api.jquery.com/category/ajax/
    
})
