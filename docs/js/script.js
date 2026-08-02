// ==========================
// VAR DOCUMENTATION JAVASCRIPT
// ==========================


// ==========================
// BOUTON COPIER LE CODE
// ==========================


document.addEventListener("DOMContentLoaded", () => {


    const codeBlocks = document.querySelectorAll(".code pre");


    codeBlocks.forEach((code) => {


        const button = document.createElement("button");


        button.textContent = "Copier";


        button.className = "copy-button";



        code.parentElement.appendChild(button);



        button.addEventListener("click", () => {


            navigator.clipboard.writeText(code.textContent);



            button.textContent = "Copié !";



            setTimeout(() => {

                button.textContent = "Copier";

            }, 2000);



        });


    });



});





// ==========================
// ANIMATION APPARITION
// ==========================


const elements = document.querySelectorAll(".card, .code");


const observer = new IntersectionObserver((entries)=>{


    entries.forEach(entry=>{


        if(entry.isIntersecting){


            entry.target.style.opacity = "1";

            entry.target.style.transform = "translateY(0)";


        }


    });



});




elements.forEach(element=>{


    element.style.opacity = "0";

    element.style.transform = "translateY(30px)";

    element.style.transition = "0.6s";


    observer.observe(element);


});





// ==========================
// RECHERCHE API
// ==========================


const search = document.querySelector("#search");


if(search){


    search.addEventListener("input",()=>{


        let value = search.value.toLowerCase();


        const sections = document.querySelectorAll(".card, h2, table");


        sections.forEach(section=>{


            let text = section.textContent.toLowerCase();


            if(text.includes(value)){


                section.style.display = "";


            }

            else{


                section.style.display = "none";


            }


        });



    });


}