try:
    
    a,b,c=7,6,8
    def g(a,b=9,c=9):
        print(a,b,c,end="")
    
    g(4,3,1)
    print(a,b,c)
    
except: print('error')
