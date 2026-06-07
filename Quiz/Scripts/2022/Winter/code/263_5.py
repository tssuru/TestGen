try:
    
    a,b,c=6,6,7
    def g(a,b=8,c=9):
        print(a,b,c,end="")
    
    g(2,c=5)
    print(a,b,c)
    
except: print('error')
