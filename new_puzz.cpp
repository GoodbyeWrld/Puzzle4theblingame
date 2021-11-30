#include<iostream>
#include<random>



class want_to_play

{

int num_of_plays = 0;

std::string playorno;

want_to_play()

{

std::cout << "Would you like to play"<<std::endl; //can you c in this from main

std::cin>>playorno;

if(playorno == "yes")

{

num_of_plays++; //may have to return value and add to func header
}

//in the main ave playorno variable =getplayorno

}

 

void play_again() //can you c in this from main

{

std::cout<<" Wanna play again?"<< std::endl;

num_of_plays++; //may have to return value and add to func header

}//could also create  aget func can call in both construct and play again func

};


 

 

 

class Map 

{
std::string difficulty;
int array_size;
//char maparr[array_size][array_size];
char *Ptrto_map;

Map()
{
std::cout << "what difficulty would you like"<<std::endl;
std::cin >> difficulty;
//array_size = //convert diffiluty to size of arra
Ptrto_map = Create_map(difficulty);

}

 

char* Create_map(std::string)
{

//Use char maparr = // Create an array according to difficulty specified fill with char
char maparr; //update
//char *ptrtomap = maparr;
//return char* array;

};

char* getptrtomap ()
{
    //return *ptrtomap;
}

};

 



 

class fObject

{
std::string name_obj;

char char_obj;

char char_obj;

fObject()
{

//random determination of rock water or fire

//name_obj = Depstd::endling on this decide std::string name

//setchar_ob(std::string);

//Subobj(char obj)

 

};

 

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

char char_obj;


rObject()
{
//random determination of rock water or fire

//name_obj = Depstd::endling on this decide std::string name

//setchar_ob(std::string);

//Subobj(char obj)


};

char Subobj(char obj); // returns lower case letter of what ever letter
std::string getname_ob();
void setchar_ob(std::string); //sets the first letter(Capital) of the std::string std::string_obj to char_obj
char getchar(); //add characteristics to points surrounding whatever positions are assigned to a char based off the char
void playObjsound(char);

};

 



class Playscape
{
//char updatedmap_andplayscape[][];
//char updatedplayscape_andobj[][];
int sizeof_array;//create function for thi
int num_obj = sizeof_array/8;
int playscapeX_max; //find thi
int playscapeY_max; //find this

 

/*playscape(mapobj().getptrtomap)

{

//function to createplayscape from mapobjget

//updatedmap_andplayscape = resultafterchange;

}*/


void Assignobjto_playscape()
{
int numeachobj = num_obj/3;
fObject;
wObject;
rObject;
int objcurr;

while(objcurr<numeachobj)
{

// Randomly distribute fobj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and ymax

//use posxy of fobj and and put subobj in pos surrounding

objcurr++;

}

while(objcurr<numeachobj)
{

// Randomly distribute robj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and ymax

//use posxy of robj and and put subobj in pos surrounding

objcurr++;

}

 

while(objcurr<numeachobj)
{

// Randomly distribute wobj.getchar on a pos in updatedmap_andplayscape as long as it has an x in pos and at least one x in row and column, and pos not greater than pos x max-2 and ymax

//use posxy of wobj and and put subobj in pos surrounding

objcurr++;

}

// make sure all of these functions are updating the map to updatedplayscape_andobj[][];

 

}

 

 

};


class move

{

 
 
 

};