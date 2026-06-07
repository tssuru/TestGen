try:
    
    a,b,c=8,7,9
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(a=5,3,c=0)
    print(a,b,c)
    
except: print('error')
