try:
    
    a,b,c=6,7,8
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(b=2,c=3,0)
    print(a,b,c)
    
except: print('error')
