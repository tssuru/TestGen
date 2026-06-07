try:
    
    a,b,c=6,7,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(b=5,c=2,1)
    print(a,b,c)
    
except: print('error')
