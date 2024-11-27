print("Hello! Today we're going to find the perfect cookie recipe for you. (for 3, 5, 10, or 25 pcs) \nPlease input the available quantities for the following ingredients")
butter=int(input("Butter (g): "))
flour=int(input("Flour (g): "))
sugar=int(input("Sugar (g): "))
if butter<35 or flour<50 or sugar<15:
    print("You lack enough of the basic ingredients. When's the last time you hit the store?")
else:
    print("\nNow onto preferences. Would you like any of the following? (yes = 1, no = 0)")
    choco_chips=int(input("Chocolate chips: "))
    sriracha=int(input("Sriracha: "))
    nuts=int(input("Nuts: "))
    if choco_chips not in [0,1] or sriracha not in [0,1] or nuts not in [0,1]:
        print("Please make sure all your responses are either 1 or 0.")
    else:
        rate=0
        mylist=[]
        mylist.append(butter)
        mylist.append(flour)
        mylist.append(sugar)
        mylist.append(choco_chips)
        mylist.append(sriracha)
        mylist.append(nuts)
        if mylist[0]<55 or mylist[1]<80 or mylist[2]<25:
            print("\nYou have enough ingredients for 3 cookies!")
            if mylist[3]==1:
                    print("- 15g Chocolate chips")
            if mylist[4]==1:
                    print("- 15g Sriracha sauce")
            if mylist[5]==1:
                    print("- 7g Nuts")
            print("- 35g Butter \n- 50g Flour \n- 15g Sugar")
        elif mylist[0]<110 or mylist[1]<160 or mylist[2]<50:
            print("You have enough ingredients for 5 cookies!")
            if mylist[3]==1:
                    print("- 25g Chocolate chips")
            if mylist[4]==1:
                    print("- 25g Sriracha sauce")
            if mylist[5]==1:
                    print("- 12g Nuts")
            print("- 55g Butter \n- 80g Flour \n- 25g Sugar")
        elif mylist[0]<275 or mylist[1]<400 or mylist[2]<125:
            print("You have enough ingredients for 10 cookies!")
            if mylist[3]==1:
                    print("- 50g Chocolate chips")
            if mylist[4]==1:
                    print("- 50g Sriracha sauce")
            if mylist[5]==1:
                    print("- 25g Nuts")
            print("- 110g Butter \n- 160g Flour \n- 50g Sugar")
        else:
            print("You have enough ingredients for 25 cookies!")
            if mylist[3]==1:
                    print("- 125g Chocolate chips")
            if mylist[4]==1:
                    print("- 125g Sriracha sauce")
            if mylist[5]==1:
                    print("- 60g Nuts")
            print("- 275g Butter \n- 400g Flour \n- 125g Sugar")
        print("\nPreheat oven to 170 C.")
        print ("In a bowl, mix all the dry ingredients. In another, bigger bowl, mix all the wet ingredients.")
        print("Pour in the dry mixture, and fold in until you are left with a homogenous batter.")
        print("Roll the dough into ~3cm balls, and place them a fair bit apart on your parchment paper.")
        print("Bake for ~10 minutes or until just slightly golden around the edges and on the bottom.")
        print("Ta da! How was your experience on a scale of 1-10?")
        while rate<10:
            rate=int(input(""))
            if rate<0:
                print(":(")
            elif rate<8:
                print("Oh no, no, no, no... Try again.")
            elif rate<10:
                print("Very close. Try again.")
            elif rate==10:
                print("Thank you :)")
            elif rate>10:
                print("YES!!! YOU CRACKED THE CODE! THIS IS THE CORRECT ANSWER! \nTHANK YOU!!!")