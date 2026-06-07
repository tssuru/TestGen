try:
    
    a,b,c=8,9,7
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(b=3,c=2,0)
    print(a,b,c)
    
except: print('error')
