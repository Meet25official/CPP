// 2. Recipe Book Application:
//    - Problem: Develop an application to store and manage recipes from various cuisines.
//    - Test Case: Verify that a recipe can be categorized into a specific cuisine.
//    - Logic: Define an abstract class 'Recipe' with methods to display ingredients and cooking instructions. Subclasses like 'ItalianRecipe', 'ChineseRecipe', etc., implement cuisine-specific details.

#include <iostream>
using namespace std;

class Recipe {
protected:
    string name;
    string* ingredients;
    string* instructions;
    int ingredientCount;
    int instructionCount;

public:
    Recipe(string name, string* ingredients, int ingredientCount, string* instructions, int instructionCount)
        : name(name), ingredients(ingredients), ingredientCount(ingredientCount), instructions(instructions), instructionCount(instructionCount) {}

    virtual void displayIngredients() = 0;
    virtual void displayInstructions() = 0;

    virtual ~Recipe() {
        delete[] ingredients;
        delete[] instructions;
    }
};

class ItalianRecipe : public Recipe {
public:
    ItalianRecipe(string name, string* ingredients, int ingredientCount, string* instructions, int instructionCount)
        : Recipe(name, ingredients, ingredientCount, instructions, instructionCount) {}

    void displayIngredients() override {
        cout << "Ingredients for Italian " << name << ":" << endl;
        for (int i = 0; i < ingredientCount; ++i) {
            cout << ingredients[i] << endl;
        }
    }

    void displayInstructions() override {
        cout << "Cooking instructions for Italian " << name << ":" << endl;
        for (int i = 0; i < instructionCount; ++i) {
            cout << instructions[i] << endl;
        }
    }
};

// Chinese Recipe class
class ChineseRecipe : public Recipe {
public:
    ChineseRecipe(string name, string* ingredients, int ingredientCount, string* instructions, int instructionCount)
        : Recipe(name, ingredients, ingredientCount, instructions, instructionCount) {}

    void displayIngredients() override {
        cout << "Ingredients for Chinese " << name << ":" << endl;
        for (int i = 0; i < ingredientCount; ++i) {
            cout << ingredients[i] << endl;
        }
    }

    void displayInstructions() override {
        cout << "Cooking instructions for Chinese " << name << ":" << endl;
        for (int i = 0; i < instructionCount; ++i) {
            cout << instructions[i] << endl;
        }
    }
};

int main() {
  
    string italianIngredients[] = {"spaghetti", "eggs", "bacon", "cheese"};
    string italianInstructions[] = {"Cook spaghetti", "Fry bacon", "Mix eggs and cheese", "Combine all ingredients"};
    ItalianRecipe spaghettiCarbonara("Spaghetti Carbonara", italianIngredients, 4, italianInstructions, 4);
    spaghettiCarbonara.displayIngredients();
    spaghettiCarbonara.displayInstructions();

    string chineseIngredients[] = {"chicken", "peanuts", "vegetables", "soy sauce"};
    string chineseInstructions[] = {"Marinate chicken", "Stir-fry chicken", "Add vegetables and peanuts", "Season with soy sauce"};
    ChineseRecipe kungPaoChicken("Kung Pao Chicken", chineseIngredients, 4, chineseInstructions, 4);
    kungPaoChicken.displayIngredients();
    kungPaoChicken.displayInstructions();

    return 0;
}
