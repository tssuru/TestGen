try:
    
    a,b,c=8,7,9
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(b=5,c=0,3)
    print(a,b,c)
    
except: print('error')
