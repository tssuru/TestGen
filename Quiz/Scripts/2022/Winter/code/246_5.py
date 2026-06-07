try:
    
    a,b,c=8,6,9
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(4,c=5,b=3)
    print(a,b,c)
    
except: print('error')
