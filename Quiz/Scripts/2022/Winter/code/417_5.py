try:
    
    a,b,c=9,7,6
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(0,c=3)
    print(a,b,c)
    
except: print('error')
