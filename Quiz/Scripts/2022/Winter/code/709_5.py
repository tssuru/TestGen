try:
    
    a,b,c=6,7,9
    def g(a,b=8,c=8):
        print(a,b,c,end="")
    
    g(c=2,a=5,b=1)
    print(a,b,c)
    
except: print('error')
