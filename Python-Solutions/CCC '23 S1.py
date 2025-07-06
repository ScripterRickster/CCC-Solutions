tris = int(input())
tArray = (input()).split(" ")
bArray = (input()).split(" ")

lineDist = 0
skips = 0
for i in range(tris):

    
    if int(tArray[i]) == 1:
        lineDist += 3
            
    if int(bArray[i]) == 1:
        lineDist += 3
        
    if int(bArray[i]) == 1 and int(tArray[i]) == 1 and (i+1)%2 == 1:
        skips += 2
        #print("skipped | tArray: "+tArray[i]+" | bArray: "+bArray[i]+" on (i+1)%2")
        
    if i<tris-1:
        if int(tArray[i+1]) == 1 and int(tArray[i]) == 1:
            skips += 2
            #print("skipped | tArray: "+tArray[i]+" | bArray: "+bArray[i]+" on tArray i+1 = i")
        
        if int(bArray[i]) == 1 and int(bArray[i+1]) == 1:
            skips += 2
            #print("skipped | tArray: "+tArray[i]+" | bArray: "+bArray[i]+" on bArray i+1 = i ")
            
    elif i>0 and i<tris-1:
        if int(tArray[i]) == 1 and int(tArray[i-1]) == 1:
            skips += 2
            #print("skipped | tArray: "+tArray[i]+" | bArray: "+bArray[i]+" on tArray i-1 = i")
        
        if int(bArray[i]) == 1 and int(bArray[i-1]) == 1:
            skips += 2
            #print("skipped | tArray: "+tArray[i]+" | bArray: "+bArray[i]+" on bArray i-1 = i")
        
print(lineDist-skips)
