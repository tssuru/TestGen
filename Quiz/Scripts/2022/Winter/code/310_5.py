try:
    
    a,b,c=6,8,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(a=3,0,c=3)
    print(a,b,c)
    
except: print('error')
