try:
    
    a,b,c=8,7,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(c=2,a=5,b=0)
    print(a,b,c)
    
except: print('error')
