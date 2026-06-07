try:
    
    a,b,c=7,8,7
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(2,3,a=4)
    print(a,b,c)
    
except: print('error')
