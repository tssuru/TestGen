try:
    
    a,b,c=7,8,9
    def g(a,b=6,c=7):
        print(a,b,c,end="")
    
    g(b=3,b=2,c=1)
    print(a,b,c)
    
except: print('error')
