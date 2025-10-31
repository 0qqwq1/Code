#include <stdio.h>
#define artichoke 2.05
#define beet 1.15
#define carrot 1.09
#define discount 0.95
#define discount_requirement 100
#define fee_1 6.5
#define fee_2 14
#define fee_1_limit 5
#define fee_2_limit 20
#define fee_3_multiplier 0.5

int main()
{
    double artichoke_cost, beet_cost, carrot_cost, order_cost, total_cost;
    double artichoke_weight, beet_weight, carrot_weight, total_weight;  
    double increase, FAP_fee;
    char ch;
    while (ch != 'q')
    {
        printf("Please enter a (weight of thistle), b (weight of sugar beet), c (weight of carrot) or q (exit)\n");
        switch (ch = getchar())
        {
            case 'a': printf("Please enter the weight (in pounds) of the thistle you need to order.\n");
                      scanf("%lf", &increase);
                      artichoke_weight += increase;
                      break;
            case 'b': printf("Please enter the weight (in pounds) of the sugar beet you need to order.\n");
                      scanf("%lf", &increase);
                      beet_weight += increase;
                      break;
            case 'c': printf("Please enter the weight (in pounds) of the carrot you need to order.\n");
                      scanf("%lf", &increase);
                      carrot_weight += increase;
                      break;
            default: break;
        }

        artichoke_cost = artichoke_weight * artichoke;
        beet_cost = beet_weight * beet;
        carrot_cost = carrot_weight * carrot;
        order_cost = artichoke_cost + beet_cost + carrot_cost;
        total_weight = artichoke_weight + beet_weight + carrot_weight;

        if (order_cost >= discount_requirement)
        {
            total_cost = order_cost * discount;
        }

        if (total_weight <= fee_1_limit)
        {
            FAP_fee = fee_1;
        }
        else if (total_weight > fee_1_limit && total_weight <= fee_2_limit)
        {
            FAP_fee = fee_2;
        }
        else if (total_weight > fee_2_limit)
        {
            FAP_fee = fee_2 + (total_weight - fee_2_limit) * fee_3_multiplier;
        }
        total_cost += FAP_fee;

        printf("--------------------------------\n");
        printf("Here is your purchase order:\n\n");
        if (artichoke_weight > 0)
        {
            printf("Thistle\n");
            printf("unit price: 2.05$ per pound\n");
            printf("weight: %.2f\n", artichoke_weight);
            printf("fee: %.2f\n\n", artichoke_cost);
        }
        if (beet_weight > 0)
        {
            printf("Suger beet\n");
            printf("unit price: 1.15$ per pound\n");
            printf("weight: %.2f\n", beet_weight);
            printf("fee: %.2f\n\n", beet_cost);
        }
        if (carrot_weight > 0)
        {
            printf("Carrot\n");
            printf("unit price: 1.09$ per pound\n");
            printf("weight: %.2f\n", carrot_weight);
            printf("fee: %.2f\n\n", carrot_cost);
        }
        printf("Order cost: %.2f\n", order_cost);
        if (order_cost >= discount_requirement)
        {
            printf("Discount: 0.95\n");
        }
        printf("Freight&Packaging fees: %.2f\n", FAP_fee);
        printf("Total cost: %.2f\n", total_cost);
        printf("--------------------------------\n");

        if (ch == 'q')
        {
            printf("Looking forward to your next visit.\n");
        }
        else
        {
            printf("Please continue to input.\n");
        }
    }   
    return 0;
}
