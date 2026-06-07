try:
    
    a,b,c=8,9,7
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(4,c=0,b=5)
    print(a,b,c)
    
except: print('error')
