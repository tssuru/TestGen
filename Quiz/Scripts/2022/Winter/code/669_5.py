try:
    
    a,b,c=8,7,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(0,c=4,b=5)
    print(a,b,c)
    
except: print('error')
