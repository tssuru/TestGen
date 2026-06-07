try:
    
    a,b,c=8,6,7
    def g(a,b=8,c=9):
        print(a,b,c,end="")
    
    g(b=5,c=3,3)
    print(a,b,c)
    
except: print('error')
