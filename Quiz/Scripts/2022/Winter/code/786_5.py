try:
    
    a,b,c=8,9,7
    def g(a,b=6,c=8):
        print(a,b,c,end="")
    
    g(0,c=0,b=3)
    print(a,b,c)
    
except: print('error')
