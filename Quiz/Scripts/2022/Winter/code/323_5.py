try:
    
    a,b,c=7,8,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(3,c=2,b=1)
    print(a,b,c)
    
except: print('error')
