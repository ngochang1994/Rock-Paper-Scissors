var you;
var yourScore = 0;
var computer;
var computerScore = 0 ;

var choices = ["rock", "paper", "scissors"];

window.onload = function()
{
    for(let i = 0; i < 3; i++)
    {
        // <img id="rock" src="rock.png">
        let choice = document.createElement("img");
        choice.id = choices[i];
        choice.src = choices[i] + ".png";
        choice.addEventListener("click", selectChoice);
        document.getElementById("choices").append(choice);
    }
}


function selectChoice()
{
    you = this.id;
    document.getElementById("your-choice").src = you + ".png";


    // Let computer choose its choice randomly
    computer = choices[Math.floor(Math.random() * 3)];    //(0 - .9999 * 3) = (0 - 2.9999)
    document.getElementById("computer-choice").src = computer + ".png";


    // check winner
    if(you == computer)
    {
        return 0;   // keep the score same if tie game

    }
    else
    {
        if(you == "rock")
        {
            if(computer == "scissors")
            {
                yourScore += 1;
            }
            else if(computer == "paper")
            {
                computerScore += 1;
            }
        }
        else if(you == "paper")
        {
            if(computer == "rock")
            {
                yourScore += 1;
            }
            else if(computer == "scissor")
            {
                computerScore +=1;
            }
        }
        else if(you == "scissors")
        {
            if(computer == "rock")
            {
                computerScore += 1;
            }
            else if(computer = "rock")
            {
                yourScore += 1;
            }
        }
    }

    document.getElementById("your-score").innerText = yourScore;
    document.getElementById("computer-score").innerText = computerScore;
}