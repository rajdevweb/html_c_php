<!-- Loop Statement -->
<html>
    <head>
        <title>Loop Statement</title>
        <style>
            *{
                font-family:Arial, Helvetica, sans-serif;
                box-sizing: borer-box;
            }
            .php{
                text-align: center;
                border: 2px solid black;
                width: 100px;
                margin: 0 auto;
                background-color: lightblue;
                font-size: 20px;
            }
            .php:hover{
                background-color: black;
                transition: 0.3s ease-in-out;
                color: white;
                border-radius: 4px;
                box-shadow: 10px 10px 10px gray;
                width:200px ;
            }
            .heading{
                text-align: center;
               
            }
        </style>
    </head>
    <body>
        <div class="heading">
      <h3>this is loop statement </h3>
        </div>
        <div class="php">
        <?php
       

     $i = 0;
     while($i<100){ 
        echo "<br>";
        echo "the value even ";
        echo $i+2;
        echo "<br>";
        $i+=2;
     }
     

 
        ?>
        <?php
           $j = 1;
           while ($j <= 100) {
               echo "<br>";
               echo  "odd number ";
               echo $j+1;
               echo "<br>";
               echo $j+=2;
               
           }
        
        ?>
        </div>

    </body>
</html>