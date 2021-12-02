#include<iostream>
#include<random>


class want_to_play
{
    private:
    int num_of_plays = 0;
    std::string playorno;
    
    public:
    want_to_play(std::string pn)
    {
        playorno = pn;
    if(playorno == "yes")
    {
        num_of_plays++; //may have to return value and add to func header
    }
    }//in the main ave playorno variable =getplayorno
    
    std::string play_again() //can you c in this from main
    {
    bool ans;
    std::cout<<"Wanna play again?(enter 1(yes) or 2(no): "<< std::endl;
    std::cin >> ans;
    if (ans!= 1||0)
    {
        std::cout<<"Invalid input, Wanna play again?(enter yes or no): "<< std::endl;
    }
    if (ans == 0)
    {
        playorno = "no";
        return playorno; 
        
    }
    else 
    {
        num_of_plays++;
        return playorno; 
    } 
    
   
    //may have to return value and add to func header
    }//could also create  aget func can call in both construct and play again func
    std::string getplayagain()
    {
        
        return playorno;
    }
};

class Map 
{
    int difficulty;
    int array_sizex;
    int array_sizey;
    //char maparr[array_size][array_size];
    char **Ptrto_map;
    friend class Playscape;

   public:
    //array_size = //convert diffiluty to size of array
    int getdiff()
    {
        return difficulty;
    }
     void setdiff(int di)
    {
        difficulty=di;
    }
     int getarrx()
    {
        return array_sizey;
    }
     int getarry()
    {
        return array_sizex;
    } void setarrx(int arx)
    {
        array_sizex=arx;
    }
     void setarry(int ary)
    {
        array_sizey=ary;
    }

    char** Create_map()
    {
    //Use char maparr = // Create an array according to difficulty specified fill with char
    char** maparrptr= new char *[array_sizex]; //update
    //char *ptrtomap = maparr;
    //return char* array;
    for (int i = 0; i < array_sizex; i++)
    {
        maparrptr[i] = new char[array_sizex];
        for (int i2 = 0; i2 < array_sizex; i2++)
        maparrptr[i][i2] = '.'; 
    }
    return maparrptr;
    };

    char** getptrtomap ()
    {
        return Create_map(); 
    }
};



class Playscape
{
    //char updatedmap_andplayscape[][]
    //char updatedplayscape_andobj[][]
    int sizeof_array;//create function for th
    int num_obj = sizeof_array/8;
    int playscapeX_max; //find th
    int playscapeY_max; //find this
    char **maptobeconvert;
    

    /*Playscape(int)
    {
        maptobeconvert = conv;


        //Map::
        //function to createplayscape from mapobjget
        //updatedmap_andplayscape = resultafterchange;
    }*/
    void setmaptobconv(char[][m], int n,int m) // stioll wrong
    {
        maptobeconvert = mtb; //still wrong

    }
    void Assignobjto_playscape()
    {
        int numeachobj = num_obj/3;
        /*fObject;
        wObject;
        rObject;*/
        int objcurr;
        while(objcurr<numeachobj)
        {
            // Randomly distribute fobj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and ymax
            //use posxy of fobj and and put subobj in pos surrounding
            objcurr++;
        }
        while(objcurr<numeachobj)
        {
            // Randomly distribute robj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and yma
            //use posxy of robj and and put subobj in pos surroundin
            objcurr++;
        }
        while(objcurr<numeachobj)
        {
            // Randomly distribute wobj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and yma
            //use posxy of wobj and and put subobj in pos surrounding
            objcurr++;
        }
        // make sure all of these functions are updating the map to updatedplayscape_andobj[][];
    }
};

/*
class fObject
{
    std::string name_obj;
    char char_obj;
    fObject()
    {
    //random determination of rock water or fir
    //name_obj = Depstd::endling on this decide std::string nam
    //setchar_ob(std::string)
    //Subobj(char obj
    }
    char Subobj(char obj); // returns lower case letter of what ever letter
    std::string getname_ob();
    void setchar_ob(std::string); //sets the first letter of the std::string std::string_obj to char_obj
    char getchar(); //add characteristics to points surrounding whatever positions are assigned to a char based off the char
    void playObjsound(char);
};


class wObject
{
    std::string name_obj;
    char char_obj;
    wObject()
    {
        //random determination of rock water or fire
        //name_obj = Depstd::endling on this decide std::string name
        //setchar_ob(std::string);
        //Subobj(char obj)
    }
    char Subobj(char obj); // returns lower case letter of what ever letter
    std::string getname_ob();
    void setchar_ob(std::string); //sets the first letter of the std::string std::string_obj to char_obj
    char getchar(); //add characteristics to points surrounding whatever positions are assigned to a char based off the char
    void playObjsound(char);
};

 
class rObject
{
    std::string name_obj;
    char char_obj;
    rObject()
    {
        //random determination of rock water or fire
        //name_obj = Depstd::endling on this decide std::string nam
        //setchar_ob(std::string)
        //Subobj(char obj)
    }
    char Subobj(char obj); // returns lower case letter of what ever lette
    std::string getname_ob();
    void setchar_ob(std::string); //sets the first letter(Capital) of the std::string std::string_obj to char_ob
    char getchar(); //add characteristics to points surrounding whatever positions are assigned to a char based off the cha
    void playObjsound(char);

};

 





 
 class move
 {

 
 
 

};
*/

int main()

{
    std::string playorno = "yes";

   
    want_to_play wantt(playorno);
    Map mapintiial;
    int difficulty;
    int array_sizex;
    int array_sizey;
    
    while (wantt.getplayagain() == "yes")
    {
        do
        {
            std::cout << "What difficulty would you like, enter (1) for easy, (2) for medium, (3) for hard: "<<std::endl;
            std::cin >> difficulty;
            if (difficulty == 1)
            {
                mapintiial.setdiff(1);
                array_sizex = 12;
                mapintiial.setarrx(12);
                array_sizey = 12;
                mapintiial.setarry(12);
                //mapintiial.getptrtomap();
                //char** maparrptr
                char **arraytomap[array_sizex][array_sizex];
                **arraytomap = mapintiial.Create_map();
                break;
            }
            else if (difficulty = 2)
            {
                mapintiial.setdiff(2);
                array_sizex = 20;
                mapintiial.setarrx(20);
                array_sizey = 20;
                mapintiial.setarry(20);
                //char** maparrptr
                char **arraytomap[array_sizex][array_sizex];
                **arraytomap = mapintiial.Create_map();
                break;
            }
            else if (difficulty = 3)
            {
                mapintiial.setdiff(3);
                array_sizex = 32;
                mapintiial.setarrx(32);
                array_sizey = 32;
                mapintiial.setarry(32);
                //mapintiial.getptrtomap();
                //char** maparrptr
                
                char **arraytomap[array_sizex][array_sizex];
                **arraytomap = mapintiial.Create_map();


                Playscape Createplay;
                Createplay;
                
                
                

            }
            else
            {
                std::cout<<"Incorrect input needs to be 1,2, or 3: "<<std::endl;
            }
        } while (mapintiial.getdiff()!=1 || mapintiial.getdiff()!= 2|| mapintiial.getdiff()!=3);
        wantt.play_again();
    }

    std::cout << "thanks for playing"<<std::endl;

    system("pause");
    return 0;

}

