try:
    
    a,b,c=6,9,7
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(4,c=1,b=2)
    print(a,b,c)
    
except: print('error')
