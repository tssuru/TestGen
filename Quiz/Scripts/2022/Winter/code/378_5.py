try:
    
    a,b,c=9,7,8
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(0,b=0)
    print(a,b,c)
    
except: print('error')
