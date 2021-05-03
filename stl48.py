def BitmapHoles(strArr):
    bitmap = {}
    for i in range(len(strArr)):
        for j in range(len(strArr[i])):
            bitmap[(i,j)] = int(strArr[i][j])
    
    hole_count = 0
    hole = set()
    checked = set()
    flag = True
    
    for i in range(len(strArr)):
        for j in range(len(strArr[i])):
            stack = [(i,j)] 
            while stack:
                coords = stack.pop()
                if coords not in checked:
                    checked.add(coords)
                    if bitmap[coords] == 0 and coords not in hole:
                        hole.add(coords)
                        if flag == True:
                            hole_count += 1
                            flag = False
                        if coords[0] - 1 >= 0 and (coords[0]-1,coords[1]) not in checked:
                            stack.append((coords[0]-1,coords[1]))
                        if coords[0] + 1 < len(strArr) and (coords[0]+1,coords[1]) not in checked:
                            stack.append((coords[0]+1,coords[1]))
                        if coords[1] - 1 >= 0 and (coords[0],coords[1]-1) not in checked:
                            stack.append((coords[0],coords[1]-1))
                        if coords[1] + 1 < len(strArr[coords[0]]) and (coords[0],coords[1]+1) not in checked:
                            stack.append((coords[0],coords[1]+1))
            flag = True
            
    return hole_count
