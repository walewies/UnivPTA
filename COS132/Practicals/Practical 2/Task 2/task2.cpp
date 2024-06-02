#include <iostream>
#include <string>

int main() {
    /**
     * ***************************** *
     * Part 1: Setting up Inventory  *
     * ***************************** * 
    */

    // Declare all your variables for Part 1 here:


    /* DO NOT CHANGE THIS CODE! */
    std::cout<<"###"<<std::endl;
    
    std::string bestSellingItem = "Caramel Macchiato";
    std::cout<<"Best-selling item: "<<bestSellingItem<<std::endl;
    
    char cupSize = 'L';
    std::cout<<"Cup size for best-seller: "<<cupSize<<std::endl;
    
    int beanStock = 50;
    std::cout<<"Number of coffee bean bags in stock: "<<beanStock<<std::endl;
    int milkStock = 30;
    std::cout<<"Number of milk cartons in stock: "<<milkStock<<std::endl;
    
    bool cafeOpen = true;
    std::cout<<"Cafe open: "<<cafeOpen<<std::endl;
    bool restockNeeded = false;
    std::cout<<"Restock needed: "<<restockNeeded<<std::endl;
    
    float sales = 1234.50;
    std::cout<<"Sales in rands: R"<<sales<<std::endl;
    std::cout<<"###"<<std::endl;

    /**
     * ************************************ *
     * Part 2: Daily Inventory Calculation  *
     * ************************************ * 
    */

    // Your code for Part 2 goes here:
    int espressoShots = 10;
    float espressoCost = 5.5;
    int milkCost = 3;
    const int cappuccinoShots = 2;
    const int cappuccinoMilk = 3;
    float cappuccinoShotCost = cappuccinoShots * espressoCost;
    float cappuccinoMilkCost = cappuccinoMilk * milkCost;
    float cappuccinoTotalCost = cappuccinoShotCost + cappuccinoMilkCost;
    espressoShots = espressoShots - (3 * cappuccinoShots);
    int totalSales = 100 / (cappuccinoTotalCost);
    
    std::cout << espressoShots << std::endl;
    std::cout << espressoCost << std::endl;
    std::cout << milkCost << std::endl;
    std::cout << cappuccinoShots << std::endl;
    std::cout << cappuccinoMilk << std::endl;
    std::cout << cappuccinoShotCost << std::endl;
    std::cout << cappuccinoMilkCost << std::endl;
    std::cout << cappuccinoTotalCost << std::endl;
    std::cout << totalSales << std::endl;
    

    /*DO NOT CHANGE CODE BELOW THIS LINE*/
    std::cout<<"###"<<std::endl;


}

