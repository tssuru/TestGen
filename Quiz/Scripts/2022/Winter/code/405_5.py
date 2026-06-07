try:
    
    a,b,c=8,7,6
    def h(a,b=9,c=9):
        print(a,b,c,end="")
    
    h(4,c=3)
    print(a,b,c)
    
except: print('error')
