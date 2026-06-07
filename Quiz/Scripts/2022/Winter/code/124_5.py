try:
    
    a,b,c=9,8,7
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(c=5,c=4,b=3)
    print(a,b,c)
    
except: print('error')
