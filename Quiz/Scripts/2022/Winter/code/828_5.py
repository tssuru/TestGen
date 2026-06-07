try:
    
    a,b,c=6,8,9
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(0,c=3,b=2)
    print(a,b,c)
    
except: print('error')
