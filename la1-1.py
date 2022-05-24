array_hash = [-1]*10

def hash(x):
    h = x%10
    i1=1
    h2=h
    while(True):
        if(array_hash[h2]==-1):
            return h2
        else:
            h2=h+(i1*i1)
            i1=i1+1
            if(h2>9):
                return h2
        if(h>=10):
            return -1

def search(x):
    h=x%10
    i1=1
    h2=h
    while (i1<10):
        if(array_hash[i1]==x):
            print(x,"found at index : ",i1,"\n")
            return
        else:
            h2=h+(i1*i1)
            i1=i1+1
    print("Number not found !!!\n")

while(True):
    a = 0
    print("1 : Enter numbers")
    print("2 : Display hash table")
    print("3 : Search a number in table")
    print("4 : Exit")
    
    choice = int(input("choose options : "))
    
    if(choice == 1):
        while a<10:
            n=int(input("Enter the roll number : "))
            index = hash(n)
            if(index>-1 and index<10):
                array_hash[index]=n
                print("Number enter successfully at position",index,"\n")
                a=a+1
            else:
                print("Overflow !!!\n")
                
    elif(choice == 2):
        print(array_hash)
        
    elif(choice == 3):
        d = int(input("Enter the number to search : "))
        search(d)
        
    elif(choice == 4):
        exit(0)
        
    else:
        print("Invalid choice !!!\n")



