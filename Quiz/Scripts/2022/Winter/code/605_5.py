try:
    
    a,b,c=7,8,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(1,c=5,b=0)
    print(a,b,c)
    
except: print('error')
