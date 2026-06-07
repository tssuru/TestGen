try:
    
    a,b,c=8,7,6
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(b=5,b=3,c=0)
    print(a,b,c)
    
except: print('error')
