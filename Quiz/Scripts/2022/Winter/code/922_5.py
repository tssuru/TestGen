try:
    
    a,b,c=6,8,7
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(2,5,c=3)
    print(a,b,c)
    
except: print('error')
