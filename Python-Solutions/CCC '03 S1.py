s = 1
won = False

down = [[54,19],[90,48],[99,77]]
up = [[9,34],[40,64],[67,86]]
while s!=100 and won == False:
    num = int(input())
    
    if num == 0:
        print("You Quit!")
        break

    if (s+num)<= 100:
        s += num
        
        if s == 100:
            won = True
        
    moved = False
    
    if won == False:
        for i in down:
            if s in i:
                if s == i[0]:
                    s = i[1]
                    moved = True
                
    if moved == False and won == False:
        for i in up:
            if s in i:
                if s == i[0]:
                    s = i[1]
                    moved = True
    
    print("You are now on square "+str(s))
    
    if won == True:
        break
    
if won == True:
    print("You Win!")
