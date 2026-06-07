try:
    
    a,b,c=6,7,9
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(1,3)
    print(a,b,c)
    
except: print('error')
