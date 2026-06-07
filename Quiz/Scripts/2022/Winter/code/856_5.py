try:
    
    a,b,c=7,6,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(0,3,c=2)
    print(a,b,c)
    
except: print('error')
