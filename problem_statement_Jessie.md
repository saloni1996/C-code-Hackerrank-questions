##Problem Statement: ##
============================================================================

#####Jessie loves candy so much that she buys it from 2 different stores every day. Her city is located along a number line. It has  buildings, b0, b1 ,.. bn-1, and each bi is located at i coordinate . Each building has a candy value of either 0 or 1 , where 1 denotes a candy shop and 0 denotes a regular building that does not sell candy. Jessie lives in building b0 , so the candy value of this location is always 0.#####

#####Jessie always starts out from her house,b0 , and buys her candies from  different shops. It takes her 1 second to move a distance of 1 unit when her hands are empty; once she makes her first candy purchase, it takes her k seconds to move a distance of 1 unit.#####

#####Given the candy value of each building in the city, find and print the minimum amount of time needed for Jessie to visit two candy shops if she starts from her house at coordinate .#####

###Note:###
#####The distance between two coordinates, i and j, is |i-j|.#####

###Input Format:###
=======================================================================
#####The first line contains two space-separated integers describing the respective values of  n(the number of buildings in the city) and  k(the number of seconds it takes for her to move 1 unit of distance after visiting the first shop). #####

#####The second line contains  space-separated binary integers (i.e., 0 or 1) describing the candy value of each building in the city.#####

###Constraints###
====================================================================
* 1<=n<=10^5
* 1<=k<=1000
* bi belongs to {0,1}, where bi is the candy value of the  building.
* It is guaranteed that at least two different shops sell candy.


###Output Format###
=====================================================================
#####Print the minimum number of seconds it takes for Jessie to visit two distinct candy shops and purchase her candies.#####