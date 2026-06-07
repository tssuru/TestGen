try:
    
    a,b,c=6,7,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(0,2,1)
    print(a,b,c)
    
except: print('error')
