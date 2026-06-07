try:
    a,b,c=8,7,9
    def h(a,b=6,c):
        print(a,b,c,end=" ")
    
    h(3,1,4)
    print(a,b,c)
    
except: print('error')
